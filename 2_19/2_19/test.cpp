#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//��Ԫ
//1.��������Ԫ
//class building
//{
//	friend void visit();
//public:
//	building()
//	{
//		m_bedroom = "����";
//		m_livingroom = "����";
//	}
//	string m_bedroom;
//private:
//	string m_livingroom;
//
//};
//
//void visit()
//{
//	building b;
//	cout << b.m_bedroom << endl;
//	cout << b.m_livingroom << endl;
//}
////
////int main()
////{
////	visit();
////
////}
//
//
////2.������Ԫ
//class build;
//
//class gay
//{
//public:
//	build* b;
//	gay()
//	{
//		b = new build;
//	}
//	void visit();
//};
//
//
//
//
//
//class build
//{
//	friend gay;
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//
//};
//
//build::build()
//{
//	m_bedroom = "����";
//	m_sittingroom = "����";
//}
//
//void gay::visit()
//{
//	cout << b->m_sittingroom << endl;
//	cout << b->m_bedroom << endl;
//
//}

//��Ա��������Ԫ �����ַ�ʽ---
//1.ֻ�øó�Ա����Ϊ��Ԫ friend void fuc();
//2.�øó�Ա�������������Ϊ��Ԫ friend class classname ;


//���������
class Person
{
public:
	int m_a;
	int m_b;
	/*Person operator+(Person& x)
	{
		Person tmp;
		tmp.m_a = m_a + x.m_a;
		tmp.m_b = m_b + x.m_b;
		return tmp;
	}*/
	Person operator+(int q)
	{
		Person tmp;
		tmp.m_a = m_a + q;
		tmp.m_b = m_b;
		return tmp;
	}
};

Person operator+(Person& x,Person& y)
{
	Person tmp;
	tmp.m_a = y.m_a + x.m_a;
	tmp.m_b = y.m_b + x.m_b;
	return tmp;
}

//int main()
//{
//	Person a;
//	Person b;
//	a.m_a = 10;
//	a.m_b = 20;
//	b.m_a = 15;
//	b.m_b = 7;
//	Person c = a + b;
//	cout << c.m_a << endl;
//	cout << c.m_b << endl;
//	Person d = a + 10;
//	cout << d.m_a << endl;
//	cout << d.m_b << endl;
//}


ostream& operator<<(ostream& cout,Person & p)
{
	cout << p.m_a << "----" << p.m_b ;
	return cout;
}

//int main()
//{
//	Person p;
//	p.m_a = 10;
//	p.m_b = 20;
//	cout << p << "1111";
//}


//class Per
//{
//public:
//	int* m_a;
//	Per(int x)
//	{
//		m_a = new int(x);
//	}
//	~Per()
//	{
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//	}
//	void operator=(Per& p)
//	{
//		if (this->m_a != NULL)
//			delete m_a;
//		m_a = new int(*p.m_a);
//	}
//};
//
//int main()
//{
//	Per a(1);
//	Per b(2);
//	a = b;
//	cout << endl;
//}


//class A
//{
//public:
//	int i;
//	A()
//	{
//		cout << "�޲ι���" << endl;
//	}
//	A(int j)
//	{
//		i = j;
//		cout << "���캯��" << endl;
//	}
//	~A()
//	{
//		cout << "��������" << endl;
//	}
//	
//};
//
//int main()
//{
//	A a;
//	a = A(11);
//
//}



class basepage
{
public:
	void header()
	{
		cout << "ѧϰ���ϡ���Ƶ���ļ�����" << endl;
	}
	void footer()
	{
		cout << "վ�ڵ�������ȫ����ϵ����" << endl;
	}
protected:
	void search()
	{
		cout << "��������***********" << endl;
	}
};

class Java:protected basepage
{
public:

	void content()
	{
		cout << "Java����" << endl;
	}
};

class Python:public basepage
{
public:
	Python()
	{
		cout << "���캯��" << endl;
	}
	void content()
	{
		cout << "Python����" << endl;
	}
	~Python()
	{
		cout << "��������" << endl;
	}
};

//int main()
//{
//	Java a;
//	Python b;
//	a.footer();
//	a.search();
//	a.content();
//	a.header();
//	cout << endl;
//	b.footer();
//	b.content();
//	b.header();
//}

//int main()
//{
//	Python().content();
//
//
//}



//��̬������
class AbstractCacu
{
public:
	int op1;
	int op2;
	virtual int Cau()
	{
		return 0;
	}
};


class Add:public AbstractCacu
{
public:
	int Cau()
	{
		return op1 + op2;
	}
};

class Mul :public AbstractCacu
{
public:
	int Cau()
	{
		return op1 - op2;
	}
};

int main()
{
	AbstractCacu* ptr = new Add;
	ptr->op1 = 10;
	ptr->op2 = 6;
	cout << ptr->op1 << " + " << ptr->op2 << " = " << ptr->Cau() << endl;
	delete ptr;
	ptr = new Mul;
	ptr->op1 = 48;
	ptr->op2 = 16;
	cout << ptr->op1 << " - " << ptr->op2 << " = " << ptr->Cau() << endl;
	delete ptr;
	ptr = NULL;
}