#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//��+���������Ϊ��
class Person
{
public:

	int m_a;
	int m_b;

	//�Զ����Ա������ʵ�����������
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
	//��ʽ��������Person P3 = P1operator+(P2);---�൱�ڵ�ȡ��P1��һ����Ա����--P1fuc();

	//��ʱ��������Person P3=operator+(P1,P2);
	Person P3 = P1 + P2;

	//��������أ�Ҳ���Է�����������
	Person P4 = P1 + 10;

	//cout << "P3��m_a=" << P3.m_a << "\nP3��m_b=" << P3.m_b << endl;
	cout << "P4��m_a=" << P4.m_a << "\nP4��m_b=" << P4.m_b << endl;

}

int main()
{
	test();
}


//�����������Ϊ��
class Person
{
public:

	int m_a;
	int m_b;
	//��Ϊ��Ա�����޷�ʵ��cout<<p��������һ�㲻�ó�Ա����������<<
	/*void operator<<(cout) ---�򻯺�p<<cout
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

//һ��ʹ��ȫ�ֺ���������<<
ostream&  operator<<(ostream& cout, const Person& p)
{
	cout << "m_a = " << p.m_a << " m_b = " << p.m_b;
	return cout;
}


void test01()
{
	Person P1;
	//��ʱ�Ͳ��������������
	/*P1.m_a = 10;
	P1.m_b = 5;*/
	cout << P1 << endl;
}

int main()
{
	test01();
}