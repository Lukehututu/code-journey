#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
//
////初始化列表
class Person
{
public:
	
	//属性
	int m_a;
	int m_b;
	int m_c;
	//传统初始化方式
	Person(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	//通过初始化列表的来初始化
	Person() :m_a(10), m_b(20), m_c(30)
	{
		;
	}
	
	//带参数的版本
	Person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
	{
		;
	}

};

void test01()
{
	/*Person p1(10, 20, 30);*/
	Person p3(30,20,10);
	cout << "m_a = " << p3.m_a << endl;
	cout << "m_b = " << p3.m_b << endl;
	cout << "m_c = " << p3.m_c << endl;

}

int main()
{
	test01();
}


//对象成员

class Phone
{
public:
	string p_name;
	Phone(string name):p_name(name)
	{
		cout << "Phone的构造函数" << endl;
	}
	~Phone()
	{
		cout << "Phone的析构函数" << endl;
	}
};


class Person
{
public:
	string m_name;
	Phone p;    //这里实际上string pname和Phone p不是一个类，但这里编译器会看做Phone p = pname;即相当于
	Person(string name, string pname) :m_name(name), p(pname)//一个隐式构造法，因此语法正确
	{
		cout << "Person的构造函数" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数" << endl;
	}
};

void test02()
{
	Person p("张三", "APPLE");
	cout << p.m_name << endl;
	cout << p.p.p_name<<endl;
}

int main()
{
	test02();
}

//静态成员
class Person
{
public:
	//1.数据存放在了全局区(静态区)一个人改那全都会改
	//2.编译阶段就已经分配了内存
	//3.类内声明类外初始化！！！
	static int m_a;
private:
	static int m_b;

};

int Person::m_a = 100;
int Person::m_b = 200;

void cou()
{
	/*cout << Person::m_b << endl;*/

}


void test03()
{
	Person p;
	cout << p.m_a << endl;
	Person p2;
	p2.m_a = 200;
	cout << p.m_a << endl;

	//因为静态成员变量不单独属于某一个类中因此有两种访问方式
	//1通过对象进行访问
	Person p;
	cout << p.m_a << endl;
	//2.直接通过类名进行访问
	cout << Person::m_a << endl;


}

int main()
{
	test03();
}

//静态成员函数
class Person
{
public:
	static void fuc()
	{
		m_a = 20;
		/*m_b = 30;*/
		cout << "static void fuc" << endl;
	}

	//静态成员函数只能调用静态成员变量
	static int m_a;
	int m_b;
	
	
	//静态成员函数也有访问权限限制
private:
	static void fuc2()
	{
		cout << "static void fuc2 的函数调用" << endl;
	}
};

int Person::m_a = 10;


void test04()
{
	Person::fuc2();



	//两种访问方式
	//1.通过创建对象来访问函数
	Person p;
	p.fuc();

	//2.直接用过类名来访问对象
	Person::fuc();
}

int main()
{
	test04();
}