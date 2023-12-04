#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>



class base
{
public:
	int m_a;
	base()
	{
		m_a = 200;
	}
};

class son :public base
{
public:
	int m_a;
	son()
	{
		m_a = 100;
	}

};

//����͸�����ͬ����Ա�ķ���
void test()
{
	son s1;
	cout <<"son�µ�m_a " << s1.m_a << endl;
	cout << "base�µ�m_a " << s1.base::m_a << endl;
}

int main()
{
	test();
}


class base
{
public:
	void fuc()
	{
		cout << "base �µ�fuc()" << endl;
	}
	void fuc(int a)
	{
		cout<<"base �µ�fuc(int a)"<<endl;
	}
};

class son :public base
{
public:
	void fuc()
	{
		cout << "son �µ�fuc()" << endl;
	}

};

void test01()
{
	son s;
	s.fuc();
	s.base::fuc();
	//�������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	//������ʸ����е�ͬ����������ʹ������һ��(������������)Ҳ��Ҫ��������
	s.base::fuc(100);

}

int main()
{
	test01();
}



class Base
{
public:

	static int m_b;
	static void fuc()
	{
		cout << "Base �µ�static fuc()" << endl;
	}
	static void fuc(int a)
	{
		cout << "Base �µ�static fuc(int a)" << endl;
	}
};
int Base::m_b = 200;


class Son :public Base
{
public:
	static int m_b;
	static void fuc()
	{
		cout << "Son �µ�static fuc()" << endl;
	}

};

int Son::m_b = 100;

void test03()
{
	cout << "ͨ��������Ա���������þ�̬��Ա" << endl;
	Son s;
	cout << "Son �µ� m_b " << s.m_b << endl;
	cout << "Base �µ� m_b " << s.Base::m_b << endl;
	cout << "ͨ��������Ա���������þ�̬��Ա" << endl;
	cout << "Son �µ� m_b " << Son::m_b << endl;
	//��һ��::��ָ���������ʾ�̬��Ա���ڶ���::��ָBase��������
	cout << "Base �µ� m_b " << Son::Base::m_b << endl;
}


void test02()
{
	Son s;
	cout << "ͨ��������Ա���������þ�̬����" << endl;
	s.fuc();
	s.Base::fuc();
	s.Base::fuc(100);
	cout << "ͨ���������þ�̬����" << endl;
	Son::fuc();
	Son::Base::fuc();
	Son::Base::fuc(100);

}

int main()
{
	//test02();
	test03();
}


class Base1
{
public:
	int m_a;
	Base1()
	{
		m_a = 100;
	}


};

class Base2
{
public:
	int m_a;
	Base2()
	{
		m_a = 200;
	}
};

class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;
};

void test05()
{
	Son s;
	cout << "Base1 �µ�m_a " << s.m_a<< endl;
	cout << "Base2 �µ�m_b " << s.m_a<< endl;

}




void test04()
{
	//Q1:Son������ж��
	Son s;
	cout << "sizeof(Son) = " << sizeof(s) << endl;
	

}

int main()
{
	//test04();
	test05();
}


 //������̳н�����μ̳�virtual
//��̳е����Ļ���������

//�̳�����ָ�� ͨ��ƫ����ָ��ͬһ������

class animal
{
public:
	int age;
};

class sheep :virtual public animal {};
class camel :virtual public animal {};

class yangtuo :public sheep, public camel {};

void test06()
{
	yangtuo yt;
	yt.sheep::age = 17;
	yt.camel::age = 27;
	cout << "sheep::age=" << yt.sheep::age << endl;
	cout << "camel::age=" << yt.camel::age << endl;
	cout << "yt.age=" << yt.age << endl;
}

int main()
{
	test06();
}