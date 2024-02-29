#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>

class Person
{
public:
	string m_name;
	int m_age;

	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}

};


void test01()
{
	//������������
	vector<Person> v;

	//ʵ����������������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//β�巨��������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "����Ϊ��" << it->m_name << " ����Ϊ��" << it->m_age << endl;
		//or
		//cout << "����Ϊ��" << (*it).m_name << "����Ϊ��" << (*it).m_age << endl;
	}


}

void test02()
{
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "test02" << endl << "����Ϊ��" << (*it)->m_name << "����Ϊ��" << (*it)->m_age << endl;
	}
}

//int main()
//{
//	test01();
//	test02();
//}