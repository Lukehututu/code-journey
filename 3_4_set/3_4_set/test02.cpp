#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<set>


//set��multiset������
void testa()
{
	//�������;Ͳ�һ��
	set<int>s;
	pair<set<int>::iterator, bool> ret = s.insert(1);
	if (ret.second)
	{
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "����ʧ����" << endl;
	}

	ret = s.insert(1);
	if (ret.second)
	{
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "����ʧ����" << endl;
	}


}

void testb()
{
	multiset<int> ms;
	ms.insert(1);
	ms.insert(1);

	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;
}


//pair����Ĺ��캯��
void testc()
{
	//Ĭ�Ϲ���
	pair<string, int> p("Tom", 10);
	cout << "����Ϊ:" << p.first << "\t����Ϊ:" << p.second << endl;
	//make_pari����
	pair<string, int>p2 = make_pair("Jerry", 20);
	cout << "����Ϊ:" << p2.first << "\t����Ϊ:" << p2.second << endl;

}

void printset(const set<int>& s);
//�º���ָ��set�������

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}


};



void testd()
{
	set<int>s1;
	s1.insert(1);
	s1.insert(3);
	s1.insert(5);
	s1.insert(4);
	printset(s1);

	set<int,MyCompare>s2;
	s2.insert(1);
	s2.insert(3);
	s2.insert(5);
	s2.insert(4);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;



}

class Person {
public:
	Person(string name, int age, int height) {
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}

public:
	string m_Name;  //����
	int m_Age;      //����
	int m_Height;   //���
};

class PerCom
{
public:
	bool operator()(Person p1, Person p2)const
	{
		if (p1.m_Age == p2.m_Age)
			return p1.m_Height > p2.m_Height;
		return p1.m_Age < p2.m_Age;
	}


};

//set�Զ�����������
void teste()
{
	set<Person,PerCom> s;
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);
	s.insert(p6);

	for (set<Person,PerCom>::iterator it = s.begin(); it != s.end(); it++) {
		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age
			<< " ��ߣ� " << it->m_Height << endl;
	}

}


int main()
{
	//testa();
	//testb();
	//testc();
	//testd();
	teste();
}