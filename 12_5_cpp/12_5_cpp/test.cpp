#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Animal
{
public:
	void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

void dospeak(Animal& animal)
{
	animal.speak();
}

void test02()
{
	cout << "sizeof(Animal)=" << sizeof(Animal);
}

void test01()
{
	Cat cat;
	dospeak(cat);
	
	Dog dog;
	dospeak(dog);
}


int main()
{
	//test01();
	test02();
}