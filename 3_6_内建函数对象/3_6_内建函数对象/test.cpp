#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<functional>

//内建函数对象

//1.算数仿函数

//一元仿函数
void test01()
{
	negate<int> n;
	cout << n(40) << endl;
}


//二元仿函数
void test02()
{
	plus<int> p;//虽然是二元仿函数，实际上指的是()的参数有两个，
	//plus的参数列表只能有一个，编译器默认两个相同类型的数进行操作
	cout << p(1, 2) << endl;
}


//int main()
//{
//	test01();
//	test02();
//}
