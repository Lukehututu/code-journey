#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//�вι���
//�޲ι��죨Ĭ�Ϲ��죩
//��������//(���˿�������֮��ĺ�������Ϊ��ͨ����)

class People
{


public:
	int age;
	//�޲ι���
	People()
	{
		cout << "�޲ι��캯��" << endl;
	}

	//�вι���
	People(int a)
	{
		age = a;
		cout << "�вι��캯��" << endl;
	}

	//��������
	People(const People &p)//��ϣ����������p���޸���˼���const���ص㣺���õ��ã�����
	{
		cout << "�������캯��" << endl;
		age = p.age;
	}
	~People()
	{
		cout << "��������" << endl;
	}
};

//����
void test01()
{
	//���ŷ�
	People P1;
	People P2(10);
	People P3(P2);
	cout << "P2�����䣺" << P2.age << endl;
	cout << "P3�����䣺" << P3.age << endl;

	//ע������
	//1.��ʼ���޲ι��캯����Ҫ�ӣ���//����������Ϊ����һ������������
	/*People P4();
	void test();*/

	//��ʾ��
	People P1;
	People P2 = People(10);//����People(10)�ͽ����������󣬴�ʱ�Ⱥ����P2������������
	People P3 = People(P2);
	cout << "P2�����䣺" << P2.age << endl;
	cout << "P3�����䣺" << P3.age << endl;
	//�������� �����ó���û�����ұ��������� ��ǰ�н�����ϵͳ����ն���
	//ע������2����Ҫ���ÿ������캯������ʼ����������--�ض���p3
	/*People(P3);*///����������Ϊ People(P3)==People P3

	//��ʽת����
	People P1 = 10;  //�൱��People P1=People(10)
	People P2 = P1;  //�൱��People P2=People(P1)



	People();
	cout << "aaaa" << endl;
}

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test02()
{
	People p1(10);
	People p2(p1);
}

//2.ֵ���ݵķ�ʽ����������ֵ
void dowork(People P)  //��ֵ����
{



}

//3.ֵ��ʽ���ؾֲ�����
People dowork3()
{
	People p;
	return p;
}

int main()
{
	///*test01();*/
	////test02();
	//People p;
	//dowork(p);
	People p = dowork3();
}


//���캯���ĵ��ù���

class Person
{
public:
	/*Person()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}*/
	/*Person(int age)
	{
		m_age = age;
	}*/
	~Person()
	{
		cout << "��������" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
	}
	int m_age;
};

//��Ĭ���ṩ�������캯������֤
void test01()
{
	Person p(10);
	Person p2(p);
	cout << "p2's age = " << p2.m_age << endl;
}


//���ṩ���вι���Ͳ���Ĭ���ṩ�޲ι��캯������֤
void test02()
{
	Person p;

}


int main()
{
	test02();

}

//�����ǳ����
class person
{
public:
	int m_age;
	int* m_height;
	//���캯��
	person(int age,int height)
	{
		m_age = age;
		m_height = new int(height);
		cout << "�вι��캯��" << endl;
	}

	//��������
	~person()
	{
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "��������" << endl;
	}
	//��ʱ�����忽����������ִ�б������Զ��ṩ�Ŀ�����������ǳ����

	//��ʱ�¶��忽������
	person(const person& p)
	{
		m_height = new int(*p.m_height);
	}
};

void test01()
{
	person p1(10,160);
	person p2(p1);
	cout << "p2�����䣺" << p2.m_age << "p2����ߣ�" << *p2.m_height << endl;
}

int main()
{
	test01();

}