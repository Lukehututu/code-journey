#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<list>
#include<iostream>

class Person
{
public:
	string m_name;
	int m_age;
	int m_height;
	Person(string name, int age ,int height)
	{
		m_name = name;
		m_age = age;
		m_height = height;
	}

};

//年龄升序，年龄相同的情况下按升高降序

void printP(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end();++it)
	{
		cout << "姓名为：" << it->m_name << " 年龄为：" << it->m_age << " 身高为：" << it->m_height << endl;
	}
	cout << endl;
}



bool m_Com(Person p1, Person p2)
{
	if (p1.m_age == p2.m_age)
		return p1.m_height > p2.m_height;
	return p1.m_age < p2.m_age;
}

void test01()
{
	list<Person> L;

	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	printP(L);

	/*L.sort(age_Com);
	printP(L);*/


	//按年龄从大到小排序，如果年龄相同则按身高从小到大排序
	L.sort(m_Com);
	printP(L);





}

int main()
{
	test01();


}