#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


class Person
{
	int a;
	static int b;//静态成员变量内存不计入类中
	void fuc() { ; }//成员函数的内存也不计入类中
	static void fuc2() { ; }//静态成员函数的内存不计入类中


};

void test01()
{
	Person p;  //空对象占内存空间为1B，是为了区分各个空对象，让每个对象的地址不重复。
	cout << "P'size = " << sizeof(p) << endl;

}


int main()
{
	test01();
}


//this指针

//1.解决名称冲突
class Person
{
public:
	int age;
	Person(int age)
	{
		this->age = age;//this指针指向被调用的成员函数所属的对象
						//在此情况中就是指向p1
	}

	Person fuc(Person& p)
	{
		this->age += p.age;
		return *this;
	}

};


void test02()
{
	Person p1(10);
	Person p2(10);
	p2.fuc(p1).fuc(p1);
	cout << "p2的年龄为" << p2.age << endl;

}



void test01()
{
	Person p1(10);
	Person p2(10);
	cout << "p1的年龄为" << p1.age << endl;


}

int main()
{
	//test01();
	test02();
}


//空指针访问成员函数
class Person
{
public:
	int age;
	void showPersonClass()
	{
		cout << "Person class" << endl;
	}
	void showPersonAge()
	{
		if (this == NULL)
			return;
		cout << age << endl;
	}
};

void test04()
{
	Person* p = NULL;
	//p->showPersonClass();
	p->showPersonAge();
}

int main()
{
	test04();
}

//const修饰的成员函数
class Person
{
public:
	//首先this是一个指针常量——Person* const this 使得指针指向的对象不可修改，也就是说this=NULL是不被允许的
	//在成员函数后面加上const后相当于 const Person* const this;这就使得this指向的对象的值也不可修改了。
	void fuc() const  //我们称这样的函数为常函数
	{
		a = 100;//因此这里没有报错。
		b = 10;//这里相当于this->b=10;因此是非法的因为*this被const修饰了
	}

	void fuc2()
	{
		b = 100;
	}

	mutable int a;//但有些特殊的变量想要修改则需要用mutable修饰，这样即使在常函数或者是常变量引用了还能修改。
	int b;
};

void test06()
{
	const Person p;//此时p被const修饰变成了常对象,因此长对象的属性也是不不可以被修改的
	p.a = 100;//但此处a被mutable修饰了，所以能够更改
	p.b = 10;//但一般的变量就不能被更改
	p.fuc2();//此时p是常对象，如果调用fuc2就相当于把b改了，但实际上b是不能改的，因此常对象不能调用一般函数
	p.fuc();//常对象只能调用常函数（因为常函数的性质和常对象是一样的（属性都不可修改））
}