#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>




class circle
{
//����Ȩ�� ---public private protected  --Ȩ������ʹ�ø���ʱ��ʹ���������Ժͺ�����Ȩ�޻��м̳еȶ������Ժͺ�����ʹ��Ȩ��
//����Ȩ��public ��Ա ���ڿ��Է��� ������Է���
//����Ȩ��protected ��Ա ���ڿ��Է��� ���ⲻ�ܷ��� ������Է��ʸ����еı�������
//˽��Ȩ��private ��Ա ���ڿ��Է��� ���ⲻ�ܷ���  ���಻�ܷ��ʸ����е�˽������
public:
//���ԡ���������public�¾��ǹ�������
	int r;
	void print(string a)
	{
		cout << a << endl;
	}
	void setr(int a)
	{
		a=10;
		this->r = a;
	}
};

void test()
{
	//������Ķ���
	circle a;
	//����������Ը�ֵ
	a.r = 10;
	a.print("hzx");
	cout << a.r << endl;
}

//���캯��--��ʼ��
//��������--����


class person
{
public:
	person()
	{
		cout << "person�Ĺ��캯��" << endl;
	}
	~person()
	{
		cout << "person����������" << endl;
	}
};

void test01()
{
	person a;//��ʱa����ջ�������� ���test01ִ����a�������� ��˻��������������
}


//���캯��������
class son
{
public:
	//���캯���ǿ������ص�
	son()
	{
		cout << "son���޲ι���" << endl;
	}
	son(int a)
	{
		cout << "son���вι���" << endl;
	}
	son(const son& p)//��ϣ���������Ķ����޸���˼�const
	{
		cout << "son�Ŀ�������" << endl;
	}
};

void test02()
{
	son a;
	son b(10);
	son c(b);
}

//���ڶ����ֵ���ݵ���ʵ�����ں������ǿ�������
void t3(son a)
{

}

//��������ĵ���ʱ��
//1.����һ���Ѵ����Ķ�������ʼ��һ���¶���
//2.����Ĵ�ֵ����
//3.ֵ��ʽ���ؾֲ�����

class num
{
public:
	int a;

};


//���캯�����ù���
//1.����û������вι��캯����c++�����ṩĬ���޲ι��죬�������ṩ�������캯��
//2.����û����忽�����캯����c++�����ṩ�������캯��

//int main()
/*{
	//test01();
	//test();
	//person b;//b���ڶ������������Ҫ�ȳ�������Ż�ִ����������
	//system("pause");
	//test02();
	//son a;
	//son* p = &a;
	//cout << p << endl;
	//t3(a);
	num p;
	p.a = 10;
	num c(p);
	cout << c.a << endl;
}*/

//�����ǳ����
//

//��ʼ���б�
class abc
{
public:
	int m_a;
	int m_b;
	int m_c;
	/*abc(int a,int b,int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}*/
	/*abc(int a, int b, int c) :m_a(a),m_b(b),m_c(c)
	{
	;
	}*/
	abc() :m_a(10), m_b(20), m_c(30)
	{
		;
	}
};

class word
{
public:
	static int ah;//��̬��Ա����--�������� �����ʼ��
};

int word::ah = 100;

//int main()
//{
//	/*abc a;
//	cout<<a.m_a<<a.m_b<<a.m_c<<endl;*/
//	word a;
//	word b;
//	int* pa = &a.ah;
//	int* pb = &b.ah;
//	//cout << "a.ah = " << a.ah << " b.ah = " << b.ah << endl;
//	cout << pa << "\t" << pb << endl;
//	//���ʾ�̬��Ա���������ַ�ʽ
//	cout << a.ah << endl;//1.ͨ����������������
//	cout << word::ah << endl;//2.ֱ��ͨ������������
//	//������þ�̬��������private��protected���������ǲ��ܷ��ʵ�
//
//}

class ho
{
public:
	int a;
	ho(int b)
	{
		a = b;
	}
	ho& fuc(ho& j)
	{
		this->a += j.a;
		return *this;
	}

};

int main()
{
	ho a(10);
	ho b(5);
	b.fuc(a).fuc(a);
	cout << b.a << endl;
}