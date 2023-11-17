#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//递增运算符重载
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_a = 0;
	}
	//前置++
	MyInteger& operator++()
	{
		this->m_a++;
		return *this;
	}

	//后置++
	MyInteger operator++(int)
	{
		//留一个tmp记录当前值
		MyInteger tmp = *this;
		//自己实现++
		this->m_a++;
		//将拷贝的当前值传递回去
		return tmp;
	}

private:
	int m_a;


};


ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_a;
	return cout;
}

void test01()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;

}

int main()
{
	test01();

}


//赋值运算符的重载
class Person
{
public:

	Person(int age)
	{
		m_age = new(int);
		*m_age = age;
	}


	~Person()
	{
		if (m_age != NULL)
			delete m_age;
		m_age = NULL;
	}

	Person& operator=(const Person& p)
	{
		//先释放本来的内存
		if (this->m_age != NULL)
			delete this->m_age;
		//然后再进行深拷贝
		m_age = new int(*p.m_age);
		return *this;
	}


	int* m_age;

};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	//进行赋值操作
	p3 = p2 = p1;
	cout << "P1的年龄为" << *p1.m_age << endl;
	cout << "P2的年龄为" << *p2.m_age << endl;
	cout << "P3的年龄为" << *p3.m_age << endl;


}

int main()
{
	test01();
	system("pause");

}


//赋值运算符重载
class Person
{
public:
	bool operator==(Person& p)
	{
		if (this->m_age == p.m_age && this->name == p.name)
			return true;
		else
			return false;
	}
	int m_age;
	string name;
};


void test()
{
	Person p1 = { 18,"张三" };
	Person p2 = { 18,"张三" };
	if (p1 == p2)
		cout << "p1和p2相等" << endl;
	else
		cout << "p1和p2不相等" << endl;


}

int main()
{
	test();
}


//函数调用运算符的重载

class MyPrint
{
public:
	void operator()(string str)
	{
		cout << str << endl;
	}



};

class MyAdd
{
public:
	int operator()(int x, int y)
	{
		return x + y;
	}

};

void test03()
{
	MyPrint myprint;
	myprint("hello");
	MyAdd myadd;
	cout << myadd(1, 6) << endl;
	//匿名函数的调用，先创建一个匿名对象MyAdd() 然后这就相当于一个整体了相当于myadd，就变成了myadd(2,8)
	cout << MyAdd()(2, 8) << endl;

}

int main()
{
	test03();

}