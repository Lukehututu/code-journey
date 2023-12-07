#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//传统的计算器
class Caculator
{
public:
	int num1;
	int num2;
	int Cauculate(string opre)
	{
		if (opre == "+")
			return num1 + num2;
		else if (opre == "-")
			return num1 - num2;
	}
};

void test01()
{
	Caculator c;
	c.num1 = 10;
	c.num2 = 5;
	cout << c.num1 << " + " << c.num2 << " = " << c.Cauculate("+") << endl;
	cout << c.num1 << " - " << c.num2 << " = " << c.Cauculate("-") << endl;
}

//利用多态来实现计算器
//先写一个抽象的计算器的基类 
class AbstractCaculator
{
public:
	int num1;
	int num2;
	virtual int AbcCau()
	{
		return 0;
	}
};

//加法功能
class Add:public AbstractCaculator
{
public:
	int AC()
	{
		return num1 + num2;
	}
};

//减法功能
class Mul:public AbstractCaculator
{
public:
	int MuC()
	{
		return num1 - num2;
	}
};


void test02()
{
	AbstractCaculator* abc = new Add;
	abc->num1 = 30;
	abc->num2 = 17;
	cout << abc->num1 << " + " << abc->num2 << " = " << abc->AbcCau() << endl;
	delete abc;

	abc = new Mul;
	abc->num1 = 18;
	abc->num2 = 9;
	cout << abc->num1 << " - " << abc->num2 << " - " << abc->AbcCau() << endl;
	delete abc;
}

int main()
{
	//test01();
	test02(); 
}