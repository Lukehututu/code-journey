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

//子类和父类中同名成员的访问
void test()
{
	son s1;
	cout <<"son下的m_a " << s1.m_a << endl;
	cout << "base下的m_a " << s1.base::m_a << endl;
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
		cout << "base 下的fuc()" << endl;
	}
	void fuc(int a)
	{
		cout<<"base 下的fuc(int a)"<<endl;
	}
};

class son :public base
{
public:
	void fuc()
	{
		cout << "son 下的fuc()" << endl;
	}

};

void test01()
{
	son s;
	s.fuc();
	s.base::fuc();
	//当子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	//即想访问父类中的同名函数，即使参数不一样(即发生了重载)也需要加作用域
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
		cout << "Base 下的static fuc()" << endl;
	}
	static void fuc(int a)
	{
		cout << "Base 下的static fuc(int a)" << endl;
	}
};
int Base::m_b = 200;


class Son :public Base
{
public:
	static int m_b;
	static void fuc()
	{
		cout << "Son 下的static fuc()" << endl;
	}

};

int Son::m_b = 100;

void test03()
{
	cout << "通过创建成员变量来调用静态成员" << endl;
	Son s;
	cout << "Son 下的 m_b " << s.m_b << endl;
	cout << "Base 下的 m_b " << s.Base::m_b << endl;
	cout << "通过创建成员变量来调用静态成员" << endl;
	cout << "Son 下的 m_b " << Son::m_b << endl;
	//第一个::是指用类名访问静态成员，第二个::是指Base作用域下
	cout << "Base 下的 m_b " << Son::Base::m_b << endl;
}


void test02()
{
	Son s;
	cout << "通过创建成员变量来调用静态函数" << endl;
	s.fuc();
	s.Base::fuc();
	s.Base::fuc(100);
	cout << "通过类名调用静态函数" << endl;
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
	cout << "Base1 下的m_a " << s.m_a<< endl;
	cout << "Base2 下的m_b " << s.m_a<< endl;

}




void test04()
{
	//Q1:Son这个类有多大
	Son s;
	cout << "sizeof(Son) = " << sizeof(s) << endl;
	

}

int main()
{
	//test04();
	test05();
}


 //利用虚继承解决菱形继承virtual
//虚继承的最大的基类叫虚基类

//继承两个指针 通过偏移量指向同一个数据

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