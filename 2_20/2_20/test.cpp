#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>


//多态优点之一  ---  只创建一个父类指针就可以调用多种对象的函数

class Base
{
public:
	virtual void fuc() = 0;  //纯虚函数的格式 在虚函数后直接=0 不用{}
};                           //只要类中有一个纯虚函数那这个类就是一个抽象类
							 //抽象类不能实例化对象				
class Son :public Base
{
public:						 //	子类中一定要重写父类中的虚函数，否则该子类也是一个抽象类不能实例化对象				
	void fuc()
	{
		cout << "asdhu" << endl;
	}
};

//int main()
//{
//	Son s;
//	/*Base a*/;   //无法实例化对象
//	Base* p = new Son;
//	p->fuc();
//	Base& j = s;
//	j.fuc();
//}



class AbstractDrinking
{
public:
	virtual void boil() = 0;
	virtual void grew() = 0;
	virtual void pour() = 0;
	virtual void put() = 0;

	void makedrink()
	{
		boil();
		grew();
		pour();
		put();
	}
};

class Coffee:public AbstractDrinking
{
	virtual void boil()
	{
		cout << "加入开水" << endl;
	}
	virtual void grew()
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void pour()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void put()
	{
		cout << "加入sugar" << endl;
	}
};

class Tea :public AbstractDrinking
{
	virtual void boil()
	{
		cout << "加入温水" << endl;
	}
	virtual void grew()
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void pour()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void put()
	{
		cout << "加入柠檬" << endl;
	}
};

void dowork(AbstractDrinking* abs)
{
	abs->makedrink();
	delete abs;
	abs = NULL;
}


int main()
{
	dowork(new Tea);
	cout << "\n";
	dowork(new Coffee);

}

class Animal
{
public:
	virtual void speak() = 0;
	
	/*~Animal()
	{
		cout << "Animnal的析构函数" << endl; 
	}*/
	/*virtual ~Animal() 
	{
		cout << "Animal的虚析构" << endl;
	}*/
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal的纯虚析构" << endl;
}

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫说话" << endl;
	}
	Cat(string str)
	{
		m_name=new string(str);
		cout <<*m_name<< "的构造函数" << endl;
	}
	string* m_name;
	~Cat()
	{
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
		cout << "Cat的析构函数" << endl;
	}
};

//int main()
//{
//	Animal* s = new Cat("Tom");
//	s->speak();
//	delete s;
//}



//example 3--电脑组装

class CPU
{
public:
	virtual void cau() = 0;
};

class GPU
{
public:
	virtual void display() = 0;
};

class Mem
{
public:
	virtual void storage() = 0;
};

class AbsPC 
{
public:
	AbsPC(CPU* a,GPU* b,Mem* c)
	{
		C = a;
		G = b;
		M = c;
	}

	void work()
	{
		C->cau();
		G->display();
		M->storage();
	}
	
	~AbsPC()
	{
		if (C != NULL)
		{
			delete C;
			C = NULL;
		}
		if (G != NULL)
		{
			delete G;
			G = NULL;
		}
		if (M != NULL)
		{
			delete M;
			M = NULL;
		}
	}
private:
	CPU* C;
	GPU* G;
	Mem* M;
};


class IntelCPU :public CPU
{
public:
	void cau()
	{
		cout << "Intel--CPU" << endl;
	}
};

class IntelGPU :public GPU
{
public:
	void display()
	{
		cout << "Intel--GPU" << endl;
	}
}; 

class IntelMem :public Mem
{
public:
	void storage()
	{
		cout << "Intel--Mem" << endl;
	}
}; 

class LenovoCPU :public CPU
{
public:
	void cau()
	{
		cout << "Lenovo--CPU" << endl;
	}
};

class LenovoGPU :public GPU
{
public:
	void display()
	{
		cout << "Lenovo--GPU" << endl;
	}
};

class LenovoMem :public Mem
{
public:
	void storage()
	{
		cout << "Lenovo--Mem" << endl;
	}
};


//int main()
//{
//	CPU* Ic = new IntelCPU;
//	GPU* lg = new LenovoGPU;
//	Mem* im = new IntelMem;
//	AbsPC* p1=new AbsPC(Ic,lg,im);
//	p1->work();
//	delete p1;
//	p1 = NULL;
//
//}