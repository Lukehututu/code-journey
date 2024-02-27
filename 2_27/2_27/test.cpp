#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//提高阶段 主要针对 c++泛型编程 和 STL技术
//两种模板机制 --1.函数模板 2.类模板

//函数模板


template<typename T> //声明紧跟着的函数是模板函数
void mySWAP(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//1.自动类型推导
//	mySWAP(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << endl;
//	//2.显示指定类型
//	mySWAP<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//

//实现类型参数化


//函数模板的注意事项
//1.自动类型推到，必须推出一致的数据类型T才能使用
//2.模板必须要确定出T的数据类型才能使用

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}



template<typename T>
void fuc()
{
	cout << "fuc的调用" << endl;
}

//void test01()
//{
//	fuc<int>();
//}
//
//int main()
//{
//	test01();
//
//
//	/*int a = 10;
//	char b = '20';
//	swap(a, b);*/
//
//}‘




//数组排序函数模板
//以降序为例
template<typename T>
void orderArr(T arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] < arr[j])
				mySWAP(arr[i], arr[j]);
		}
	}
}


template<typename T>
void PrintArr(T arr[],int len)
{
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
}

void test01()
{
	int intarr[] = { 5,3,8,4,6,1,9,2 };
	int len = sizeof(intarr) / sizeof(int);
	orderArr(intarr, len);
	PrintArr(intarr, len);
}

void test02()
{
	char charr[] = { 'a','f','b','e','d' };
	int len = sizeof(charr) / sizeof(char);
	orderArr(charr, len);
	PrintArr(charr, len);
}

//int main()
//{
//	test01();
//	cout << endl;
//	test02();
//
//
//}


//普通函数与函数模板的区别

int add01(int a, int b)
{
	return a + b;
}

template<typename T>
T add02(T a,T b)
{
	return a + b;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << add01(a, c) << endl;
//	//1.采用自动推导
//	//cout << add02(a, c) << endl;
//	//2.采用显示数据类型
//	cout << add02<int>(a, c) << endl;
//
//}


//普通函数与函数模板的调用规则
//1.如果普通函数和模板都能实现，那优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.数模板也可以发生重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板。

void Print(int a, int b)
{
	cout << "普通函数调用" << endl;
}

template<class T>
void Print(T a,T b)
{
	cout << "模板调用" << endl;
}

template<class T>
void Print(T a, T b, T c)
{
	cout << "重载模板调用" << endl;
}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c = '0';
//	char d = '5';
//	Print(c, d);
//	//Print(a, b, 100);
//}


class Person
{
public:
	Person(string name, int age)
	{
		my_name = name;
		my_age = age;
	}
	string my_name;
	int my_age;
};

template<class T>
bool my_Comp(T a, T b)
{
	if (a == b)
		return true;
	else
		return false;
}

template<> bool my_Comp(Person a, Person b)
{
	if (a.my_age == b.my_age && a.my_name == b.my_name)
		return true;
	else
		return false;

}

void testa()
{
	Person a("Tom", 10);
	Person b("Tom", 10);
	bool ret = my_Comp(a, b);
	if (ret)
		cout << "a==b" << endl;
	else
		cout << "a!=b" << endl;
}

int main()
{
	testa();
}