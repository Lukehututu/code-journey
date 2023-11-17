#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//�������������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_a = 0;
	}
	//ǰ��++
	MyInteger& operator++()
	{
		this->m_a++;
		return *this;
	}

	//����++
	MyInteger operator++(int)
	{
		//��һ��tmp��¼��ǰֵ
		MyInteger tmp = *this;
		//�Լ�ʵ��++
		this->m_a++;
		//�������ĵ�ǰֵ���ݻ�ȥ
		return tmp;
	}

private:
	int m_a;


};


ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_a;
	return cout;
}

void test01()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;

}

int main()
{
	test01();

}


//��ֵ�����������
class Person
{
public:

	Person(int age)
	{
		m_age = new(int);
		*m_age = age;
	}


	~Person()
	{
		if (m_age != NULL)
			delete m_age;
		m_age = NULL;
	}

	Person& operator=(const Person& p)
	{
		//���ͷű������ڴ�
		if (this->m_age != NULL)
			delete this->m_age;
		//Ȼ���ٽ������
		m_age = new int(*p.m_age);
		return *this;
	}


	int* m_age;

};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	//���и�ֵ����
	p3 = p2 = p1;
	cout << "P1������Ϊ" << *p1.m_age << endl;
	cout << "P2������Ϊ" << *p2.m_age << endl;
	cout << "P3������Ϊ" << *p3.m_age << endl;


}

int main()
{
	test01();
	system("pause");

}


//��ֵ���������
class Person
{
public:
	bool operator==(Person& p)
	{
		if (this->m_age == p.m_age && this->name == p.name)
			return true;
		else
			return false;
	}
	int m_age;
	string name;
};


void test()
{
	Person p1 = { 18,"����" };
	Person p2 = { 18,"����" };
	if (p1 == p2)
		cout << "p1��p2���" << endl;
	else
		cout << "p1��p2�����" << endl;


}

int main()
{
	test();
}


//�������������������

class MyPrint
{
public:
	void operator()(string str)
	{
		cout << str << endl;
	}



};

class MyAdd
{
public:
	int operator()(int x, int y)
	{
		return x + y;
	}

};

void test03()
{
	MyPrint myprint;
	myprint("hello");
	MyAdd myadd;
	cout << myadd(1, 6) << endl;
	//���������ĵ��ã��ȴ���һ����������MyAdd() Ȼ������൱��һ���������൱��myadd���ͱ����myadd(2,8)
	cout << MyAdd()(2, 8) << endl;

}

int main()
{
	test03();

}