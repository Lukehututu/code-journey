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
	//创建容器对象
	vector<Person> v;

	//实例化几个测试数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//尾插法插入数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名为：" << it->m_name << " 年龄为：" << it->m_age << endl;
		//or
		//cout << "姓名为：" << (*it).m_name << "年龄为：" << (*it).m_age << endl;
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
		cout << "test02" << endl << "姓名为：" << (*it)->m_name << "年龄为：" << (*it)->m_age << endl;
	}
}

//int main()
//{
//	test01();
//	test02();
//}