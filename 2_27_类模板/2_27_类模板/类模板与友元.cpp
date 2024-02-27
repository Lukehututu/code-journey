#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson(Person<T1, T2>& p)
{
	cout << "����ʵ��" << endl;
	cout << "�����ǣ� " << p.my_name << "�����ǣ� " << p.my_age << endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ���������ʵ��
	/*template<class T1,class T2>
	friend void printPerson(Person<T1,T2> &p)
	{
		cout << "�����ǣ� " << p.my_name << "�����ǣ� " << p.my_age << endl;
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
	Person<string, int> p("����", 99);
	printPerson(p);
}

int main()
{
	test();
}