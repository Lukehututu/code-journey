#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson(Person<T1, T2>& p)
{
	cout << "类外实现" << endl;
	cout << "名字是： " << p.my_name << "年龄是： " << p.my_age << endl;
}

template<class T1,class T2>
class Person
{
	//全局函数在类内实现
	/*template<class T1,class T2>
	friend void printPerson(Person<T1,T2> &p)
	{
		cout << "名字是： " << p.my_name << "年龄是： " << p.my_age << endl;
	}*/

	template<class T1, class T2>
	friend void printPerson(Person<T1, T2>& p);

public:
	Person(T1 name,T2 age)
	{
		my_name = name;
		my_age = age;
	}

private:
	T1 my_name;
	T2 my_age;
};

void test()
{
	Person<string, int> p("孙子", 99);
	printPerson(p);
}

int main()
{
	test();
}