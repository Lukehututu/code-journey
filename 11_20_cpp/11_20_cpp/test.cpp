#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//�̳з�ʽ

//�����̳�

class Base1 //��дһ������
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 :public Base1
{
public:
	void fuc()
	{
		m_a = 10;//��Ϊ�Ǹ����еĹ�����Ա�������̳к��ǹ�����Ա
		m_b = 10;//��Ϊ�Ǹ����еı�����Ա�������̳к��Ǳ�����Ա
		m_c = 100;//���಻���Է��ʸ�����˽�г�Ա
	}

};

void fuc01()
{
	son1 s;
	s.m_a = 100;
	s.m_b = 120;//���еı�����Ա������ʲ���

}


//�����̳�
class Base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 :protected Base2
{
public:
	void fuc()
	{
		m_a = 10;//��Ϊ�Ǹ����еĹ�����Ա�������̳к��Ϊ�˱�����Ա
		m_b = 10;//��Ϊ�Ǹ����еı�����Ա�������̳к��Ǳ�����Ա
		m_c = 100;//���಻���Է��ʸ�����˽�г�Ա
	}

};

void fuc01()
{
	son1 s;
	s.m_a = 100;//Ҳ�����еı�����Ա�����޷�����
	s.m_b = 120;//���еı�����Ա������ʲ���

}


//˽�м̳�
class Base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son3 :private Base3
{
public:
	void fuc()
	{
		m_a = 10;//��Ϊ�Ǹ����еĹ�����Ա�������̳к��Ϊ��˽�г�Ա
		m_b = 10;//��Ϊ�Ǹ����еı�����Ա�������̳к���˽�г�Ա
		m_c = 100;//���಻���Է��ʸ�����˽�г�Ա
	}

};

class grandson :public son3
{
	void fuc()
	{
		m_a = 10;
		m_b = 10;
		m_c = 20;
	}



};


//�̳��еĶ���ģ��
class Base01
{
public:
	int m_A;
private:				//˵��˽������ʵ����Ҳ���̳й�ȥ��ֻ�Ǳ�������
	int m_B;
protected:
	int m_C;
};

class son:public Base01
{
	public:
		int m_D;
};

void test01()
{
	son s;
	cout << "sizeof s = " << sizeof(s) << endl;
}

int main()
{
	test01();
}


//�̳��й����������˳��
class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
	}
};

void test01()
{
	Son s;
}

int main()
{
	test01();
}
