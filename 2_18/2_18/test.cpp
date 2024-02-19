#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>




class circle
{
//声明权限 ---public private protected  --权限是在使用该类时能使用类内属性和函数的权限还有继承等对于属性和函数的使用权限
//公共权限public 成员 类内可以访问 类外可以访问
//保护权限protected 成员 类内可以访问 类外不能访问 子类可以访问父类中的保护内容
//私有权限private 成员 类内可以访问 类外不能访问  子类不能访问父类中的私有内容
public:
//属性————在public下就是公共属性
	int r;
	void print(string a)
	{
		cout << a << endl;
	}
	void setr(int a)
	{
		a=10;
		this->r = a;
	}
};

void test()
{
	//创建类的对象
	circle a;
	//给对象的属性赋值
	a.r = 10;
	a.print("hzx");
	cout << a.r << endl;
}

//构造函数--初始化
//析构函数--清理


class person
{
public:
	person()
	{
		cout << "person的构造函数" << endl;
	}
	~person()
	{
		cout << "person的析构函数" << endl;
	}
};

void test01()
{
	person a;//此时a是在栈区创建的 因此test01执行完a就销毁了 因此会跟着有析构函数
}


//构造函数的类型
class son
{
public:
	//构造函数是可以重载的
	son()
	{
		cout << "son的无参构造" << endl;
	}
	son(int a)
	{
		cout << "son的有参构造" << endl;
	}
	son(const son& p)//不希望传进来的对象被修改因此加const
	{
		cout << "son的拷贝构造" << endl;
	}
};

void test02()
{
	son a;
	son b(10);
	son c(b);
}

//对于对象的值传递调用实际上在函数中是拷贝调用
void t3(son a)
{

}

//拷贝构造的调用时机
//1.利用一个已创建的对象来初始化一个新对象
//2.对象的传值调用
//3.值方式返回局部对象

class num
{
public:
	int a;

};


//构造函数调用规则：
//1.如果用户定义有参构造函数，c++不再提供默认无参构造，但还会提供拷贝构造函数
//2.如果用户定义拷贝构造函数，c++不会提供其他构造函数

//int main()
/*{
	//test01();
	//test();
	//person b;//b是在堆区创建的因此要等程序结束才会执行析构函数
	//system("pause");
	//test02();
	//son a;
	//son* p = &a;
	//cout << p << endl;
	//t3(a);
	num p;
	p.a = 10;
	num c(p);
	cout << c.a << endl;
}*/

//深拷贝和浅拷贝
//

//初始化列表
class abc
{
public:
	int m_a;
	int m_b;
	int m_c;
	/*abc(int a,int b,int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}*/
	/*abc(int a, int b, int c) :m_a(a),m_b(b),m_c(c)
	{
	;
	}*/
	abc() :m_a(10), m_b(20), m_c(30)
	{
		;
	}
};

class word
{
public:
	static int ah;//静态成员变量--类内声明 类外初始化
};

int word::ah = 100;

//int main()
//{
//	/*abc a;
//	cout<<a.m_a<<a.m_b<<a.m_c<<endl;*/
//	word a;
//	word b;
//	int* pa = &a.ah;
//	int* pb = &b.ah;
//	//cout << "a.ah = " << a.ah << " b.ah = " << b.ah << endl;
//	cout << pa << "\t" << pb << endl;
//	//访问静态成员变量的两种方式
//	cout << a.ah << endl;//1.通过创建对象来访问
//	cout << word::ah << endl;//2.直接通过类名来访问
//	//但如果该静态变量是在private或protected区那类外是不能访问的
//
//}

class ho
{
public:
	int a;
	ho(int b)
	{
		a = b;
	}
	ho& fuc(ho& j)
	{
		this->a += j.a;
		return *this;
	}

};

int main()
{
	ho a(10);
	ho b(5);
	b.fuc(a).fuc(a);
	cout << b.a << endl;
}