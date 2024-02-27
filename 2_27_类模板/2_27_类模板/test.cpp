#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//类模板

//template<class NameType,class AgeType = int>
//class person
//{
//public:
//	NameType my_name;
//	AgeType my_age;
//	person(NameType name,AgeType age)
//	{
//		my_name = name;
//		my_age = age;
//	}
//	void Print()
//	{
//		cout << "name = " << my_name << " age = " << my_age << endl;
//	
//	}
//
//};
//
//void test01()
//{
//	//person<string, int> p("孙悟空", 999);
//	person<string> p("猪八戒", 1000);
//	p.Print();
//}
//
////int main()
////{
////	test01();
////}
//
////类模板和函数模板的区别
//
//
//
////函数模板不行只有类模板可以
//
//
////类模板中成员函数的创建时机
//
//class person1
//{
//public:
//	void fuc()
//	{
//		cout << "person1的成员函数" << endl;
//	}
//};
//
//class person2
//{
//public:
//	void fuc()
//	{
//		cout << "person2的成员函数" << endl;
//	}
//};
//
//template<class T>
//class cla
//{
//public:
//	T obj;
//	void fuc1()
//	{
//		obj.person1();
//	}
//	void fuc2()
//	{
//		obj.person2();
//	}
//};
//
////int main()
////{
////	cla<person1> a;
////	a.fuc1();
////	a.fuc2();
////
////
////}
//
//
////类模板对象做函数参数
//
////template<class T1,class T2>
////class Person
////{
////public:
////	T1 my_name;
////	T2 my_age;
////	Person(T1 name,T2 age)
////	{
////		my_name = name;
////		my_age = age;
////	}
////	void show()
////	{
////		cout << "name = " << my_name << " age = " << my_age << endl;
////	}
////};
//
//
////1.指定传入类型调用类模板对象--直接显示对象的数据类型
////void print(Person<string,int> &p)
////{
////	p.show();
////}
//
//
////2.参数模板化 --将对象中的参数变成模板进行传递
////template<class T,class M>
////void print(Person<T,M> &p)
////{
////	p.show();
////	cout << "T的类型是：" << typeid(T).name() << endl;
////	cout << "M的类型是：" << typeid(M).name() << endl;
////
////}
//
////void testb()
////{
////	Person<string, int> p("猪八戒", 100);
////	print(p);
////}
////
////
////void testa()
////{
////	Person<string,int> p("孙悟空", 99);
////	print(p);
////}
//
//
////3.整个类模板化--将对象类型模板化进行传递
//template<class T>
//void print(T &p)
//{
//	p.show();
//	cout << "T的类型是：" << typeid(T).name() << endl;
//}
//
////void testc()
////{
////	Person<string, int> p("唐僧", 30);
////	print(p);
////}
//
////int main()
////{
////	//testa();
////	//testb();
////	testc();
////}
//
////类模板与继承
//template<class T>
//class base
//{
//public:
//	T m;
//};
//
//template<class T1,class T2>
//class son :public base<T1>
//{
//public:
//	T2 a;
//};
//
//
//template<class T>
//class Pe
//{
//public:
//	Pe(T& v);
//	T a;
//	void print();
//};
//
//template<class T>
//Pe<T>::Pe(T &v)
//{
//	this->a = v;
//}
//
//template<class T>
//void Pe<T>::print()
//{
//	cout << this->a << endl;
//}
//
//
////类模板成员函数分文件编写
//#include"Person.hpp"
//void test()
//{
//	Person<char> a('o');
//	a.printw();
//
//}
//
////int main()
////{
////	test();
////
////}
//

