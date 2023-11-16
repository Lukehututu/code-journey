#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//以+运算符重载为例
class Person
{
public:

	int m_a;
	int m_b;

	//自定义成员函数来实现运算符重载
	/*Person operator+(Person& p)
	{
		Person tmp;
		tmp.m_a = this->m_a + p.m_a;
		tmp.m_b = this->m_b + p.m_b;
		return tmp;
	}*/
	Person operator+(int i)
	{
		Person tmp;
		tmp.m_a = i + this->m_a;
		tmp.m_b = i + this->m_b;
		return tmp;
	}


};

Person operator+(Person& p1, Person& p2)
{
	Person tmp;
	tmp.m_a = p1.m_a + p2.m_a;
	tmp.m_b = p1.m_b + p2.m_b;
	return tmp;
}


void test()
{
	Person P1;
	Person P2;
	P1.m_a = 10;
	P1.m_b = 4;
	P2.m_a = 15;
	P2.m_b = 16;
	//下式本质上是Person P3 = P1operator+(P2);---相当于调取了P1的一个成员函数--P1fuc();

	//此时本质上是Person P3=operator+(P1,P2);
	Person P3 = P1 + P2;

	//运算符重载，也可以发生函数重载
	Person P4 = P1 + 10;

	//cout << "P3的m_a=" << P3.m_a << "\nP3的m_b=" << P3.m_b << endl;
	cout << "P4的m_a=" << P4.m_a << "\nP4的m_b=" << P4.m_b << endl;

}

int main()
{
	test();
}


//以左移运算符为例
class Person
{
public:

	int m_a;
	int m_b;
	//因为成员函数无法实现cout<<p所以我们一般不用成员函数来定义<<
	/*void operator<<(cout) ---简化后p<<cout
	{
	
	}*/


};


class Person
{

	friend ostream& operator<<(ostream& cout, const Person& p);
public:
	Person()
	{
		m_a = 10;
		m_b = 4;
	}
private:
	int m_a;
	int m_b;

};

//一般使用全局函数来定义<<
ostream&  operator<<(ostream& cout, const Person& p)
{
	cout << "m_a = " << p.m_a << " m_b = " << p.m_b;
	return cout;
}


void test01()
{
	Person P1;
	//此时就不能在类外访问了
	/*P1.m_a = 10;
	P1.m_b = 5;*/
	cout << P1 << endl;
}

int main()
{
	test01();
}