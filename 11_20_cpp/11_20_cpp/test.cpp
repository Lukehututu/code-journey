#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//继承方式

//公共继承

class Base1 //先写一个父类
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
		m_a = 10;//因为是父类中的公共成员，公共继承后还是公共成员
		m_b = 10;//因为是父类中的保护成员，公共继承后还是保护成员
		m_c = 100;//子类不可以访问父类中私有成员
	}

};

void fuc01()
{
	son1 s;
	s.m_a = 100;
	s.m_b = 120;//类中的保护成员类外访问不到

}


//保护继承
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
		m_a = 10;//因为是父类中的公共成员，保护继承后变为了保护成员
		m_b = 10;//因为是父类中的保护成员，保护继承后还是保护成员
		m_c = 100;//子类不可以访问父类中私有成员
	}

};

void fuc01()
{
	son1 s;
	s.m_a = 100;//也是类中的保护成员类外无法访问
	s.m_b = 120;//类中的保护成员类外访问不到

}


//私有继承
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
		m_a = 10;//因为是父类中的公共成员，保护继承后变为了私有成员
		m_b = 10;//因为是父类中的保护成员，保护继承后还是私有成员
		m_c = 100;//子类不可以访问父类中私有成员
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


//继承中的对象模型
class Base01
{
public:
	int m_A;
private:				//说明私有内容实际上也被继承过去了只是被隐藏了
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


//继承中构造和析构的顺序
class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son的构造函数" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数" << endl;
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
