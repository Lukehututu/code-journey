#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//有参构造
//无参构造（默认构造）
//拷贝构造//(除了拷贝构造之外的函数都成为普通构造)

class People
{


public:
	int age;
	//无参构造
	People()
	{
		cout << "无参构造函数" << endl;
	}

	//有参构造
	People(int a)
	{
		age = a;
		cout << "有参构造函数" << endl;
	}

	//拷贝构造
	People(const People &p)//不希望传进来的p被修改因此加上const。重点：引用调用！！！
	{
		cout << "拷贝构造函数" << endl;
		age = p.age;
	}
	~People()
	{
		cout << "析构函数" << endl;
	}
};

//调用
void test01()
{
	//括号法
	People P1;
	People P2(10);
	People P3(P2);
	cout << "P2的年龄：" << P2.age << endl;
	cout << "P3的年龄：" << P3.age << endl;

	//注意事项
	//1.初始化无参构造函数不要加（）//编译器会认为这是一个函数的声明
	/*People P4();
	void test();*/

	//显示法
	People P1;
	People P2 = People(10);//其中People(10)就叫做匿名对象，此时等号左边P2就是他的名字
	People P3 = People(P2);
	cout << "P2的年龄：" << P2.age << endl;
	cout << "P3的年龄：" << P3.age << endl;
	//匿名对象 单独拿出来没名，右边是他的名 当前行结束后系统会回收对象，
	//注意事项2：不要利用拷贝构造函数来初始化匿名对象--重定义p3
	/*People(P3);*///编译器会认为 People(P3)==People P3

	//隐式转换法
	People P1 = 10;  //相当于People P1=People(10)
	People P2 = P1;  //相当于People P2=People(P1)



	People();
	cout << "aaaa" << endl;
}

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test02()
{
	People p1(10);
	People p2(p1);
}

//2.值传递的方式来给函数传值
void dowork(People P)  //传值调用
{



}

//3.值方式返回局部对象
People dowork3()
{
	People p;
	return p;
}

int main()
{
	///*test01();*/
	////test02();
	//People p;
	//dowork(p);
	People p = dowork3();
}


//构造函数的调用规则

class Person
{
public:
	/*Person()
	{
		cout << "默认构造函数" << endl;
	}*/
	/*Person(int age)
	{
		m_age = age;
	}*/
	~Person()
	{
		cout << "析构函数" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
	}
	int m_age;
};

//对默认提供拷贝构造函数的验证
void test01()
{
	Person p(10);
	Person p2(p);
	cout << "p2's age = " << p2.m_age << endl;
}


//对提供了有参构造就不会默认提供无参构造函数的验证
void test02()
{
	Person p;

}


int main()
{
	test02();

}

//深拷贝和浅拷贝
class person
{
public:
	int m_age;
	int* m_height;
	//构造函数
	person(int age,int height)
	{
		m_age = age;
		m_height = new int(height);
		cout << "有参构造函数" << endl;
	}

	//析构函数
	~person()
	{
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "析构函数" << endl;
	}
	//此时不定义拷贝函数，将执行编译器自动提供的拷贝函数进行浅拷贝

	//此时新定义拷贝函数
	person(const person& p)
	{
		m_height = new int(*p.m_height);
	}
};

void test01()
{
	person p1(10,160);
	person p2(p1);
	cout << "p2的年龄：" << p2.m_age << "p2的身高：" << *p2.m_height << endl;
}

int main()
{
	test01();

}