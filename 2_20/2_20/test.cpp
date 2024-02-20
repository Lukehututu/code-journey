#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>


//��̬�ŵ�֮һ  ---  ֻ����һ������ָ��Ϳ��Ե��ö��ֶ���ĺ���

class Base
{
public:
	virtual void fuc() = 0;  //���麯���ĸ�ʽ ���麯����ֱ��=0 ����{}
};                           //ֻҪ������һ�����麯������������һ��������
							 //�����಻��ʵ��������				
class Son :public Base
{
public:						 //	������һ��Ҫ��д�����е��麯�������������Ҳ��һ�������಻��ʵ��������				
	void fuc()
	{
		cout << "asdhu" << endl;
	}
};

//int main()
//{
//	Son s;
//	/*Base a*/;   //�޷�ʵ��������
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
		cout << "���뿪ˮ" << endl;
	}
	virtual void grew()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void pour()
	{
		cout << "���뱭��" << endl;
	}
	virtual void put()
	{
		cout << "����sugar" << endl;
	}
};

class Tea :public AbstractDrinking
{
	virtual void boil()
	{
		cout << "������ˮ" << endl;
	}
	virtual void grew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void pour()
	{
		cout << "���뱭��" << endl;
	}
	virtual void put()
	{
		cout << "��������" << endl;
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
		cout << "Animnal����������" << endl; 
	}*/
	/*virtual ~Animal() 
	{
		cout << "Animal��������" << endl;
	}*/
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal�Ĵ�������" << endl;
}

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè˵��" << endl;
	}
	Cat(string str)
	{
		m_name=new string(str);
		cout <<*m_name<< "�Ĺ��캯��" << endl;
	}
	string* m_name;
	~Cat()
	{
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
		cout << "Cat����������" << endl;
	}
};

//int main()
//{
//	Animal* s = new Cat("Tom");
//	s->speak();
//	delete s;
//}



//example 3--������װ

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