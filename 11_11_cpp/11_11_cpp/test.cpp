#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
//
////��ʼ���б�
class Person
{
public:
	
	//����
	int m_a;
	int m_b;
	int m_c;
	//��ͳ��ʼ����ʽ
	Person(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	//ͨ����ʼ���б������ʼ��
	Person() :m_a(10), m_b(20), m_c(30)
	{
		;
	}
	
	//�������İ汾
	Person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
	{
		;
	}

};

void test01()
{
	/*Person p1(10, 20, 30);*/
	Person p3(30,20,10);
	cout << "m_a = " << p3.m_a << endl;
	cout << "m_b = " << p3.m_b << endl;
	cout << "m_c = " << p3.m_c << endl;

}

int main()
{
	test01();
}


//�����Ա

class Phone
{
public:
	string p_name;
	Phone(string name):p_name(name)
	{
		cout << "Phone�Ĺ��캯��" << endl;
	}
	~Phone()
	{
		cout << "Phone����������" << endl;
	}
};


class Person
{
public:
	string m_name;
	Phone p;    //����ʵ����string pname��Phone p����һ���࣬������������ῴ��Phone p = pname;���൱��
	Person(string name, string pname) :m_name(name), p(pname)//һ����ʽ���취������﷨��ȷ
	{
		cout << "Person�Ĺ��캯��" << endl;
	}
	~Person()
	{
		cout << "Person����������" << endl;
	}
};

void test02()
{
	Person p("����", "APPLE");
	cout << p.m_name << endl;
	cout << p.p.p_name<<endl;
}

int main()
{
	test02();
}

//��̬��Ա
class Person
{
public:
	//1.���ݴ������ȫ����(��̬��)һ���˸���ȫ�����
	//2.����׶ξ��Ѿ��������ڴ�
	//3.�������������ʼ��������
	static int m_a;
private:
	static int m_b;

};

int Person::m_a = 100;
int Person::m_b = 200;

void cou()
{
	/*cout << Person::m_b << endl;*/

}


void test03()
{
	Person p;
	cout << p.m_a << endl;
	Person p2;
	p2.m_a = 200;
	cout << p.m_a << endl;

	//��Ϊ��̬��Ա��������������ĳһ��������������ַ��ʷ�ʽ
	//1ͨ��������з���
	Person p;
	cout << p.m_a << endl;
	//2.ֱ��ͨ���������з���
	cout << Person::m_a << endl;


}

int main()
{
	test03();
}

//��̬��Ա����
class Person
{
public:
	static void fuc()
	{
		m_a = 20;
		/*m_b = 30;*/
		cout << "static void fuc" << endl;
	}

	//��̬��Ա����ֻ�ܵ��þ�̬��Ա����
	static int m_a;
	int m_b;
	
	
	//��̬��Ա����Ҳ�з���Ȩ������
private:
	static void fuc2()
	{
		cout << "static void fuc2 �ĺ�������" << endl;
	}
};

int Person::m_a = 10;


void test04()
{
	Person::fuc2();



	//���ַ��ʷ�ʽ
	//1.ͨ���������������ʺ���
	Person p;
	p.fuc();

	//2.ֱ���ù����������ʶ���
	Person::fuc();
}

int main()
{
	test04();
}