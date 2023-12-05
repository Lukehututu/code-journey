#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Animal
{
public:
	void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
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