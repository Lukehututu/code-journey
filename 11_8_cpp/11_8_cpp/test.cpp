#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//构造和析构函数
class Person
{
public:


	//没有返回值可以不写void
	Person()//是可以允许函数的重载的
	{
		cout << "Person 的构造函数" << endl;
	}

	~Person()//是没有函数参数的所以不允许函数的重载
	{
		cout << "Person 的析构函数" << endl;
	}
};

//void test01()
//{
//	Person p;
//}

int main()
{

	//test01();
	Person p;
	system("pause");
}

//构造函数的分类和调用