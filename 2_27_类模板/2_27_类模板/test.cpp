#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//��ģ��

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
//	//person<string, int> p("�����", 999);
//	person<string> p("��˽�", 1000);
//	p.Print();
//}
//
////int main()
////{
////	test01();
////}
//
////��ģ��ͺ���ģ�������
//
//
//
////����ģ�岻��ֻ����ģ�����
//
//
////��ģ���г�Ա�����Ĵ���ʱ��
//
//class person1
//{
//public:
//	void fuc()
//	{
//		cout << "person1�ĳ�Ա����" << endl;
//	}
//};
//
//class person2
//{
//public:
//	void fuc()
//	{
//		cout << "person2�ĳ�Ա����" << endl;
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
////��ģ���������������
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
////1.ָ���������͵�����ģ�����--ֱ����ʾ�������������
////void print(Person<string,int> &p)
////{
////	p.show();
////}
//
//
////2.����ģ�廯 --�������еĲ������ģ����д���
////template<class T,class M>
////void print(Person<T,M> &p)
////{
////	p.show();
////	cout << "T�������ǣ�" << typeid(T).name() << endl;
////	cout << "M�������ǣ�" << typeid(M).name() << endl;
////
////}
//
////void testb()
////{
////	Person<string, int> p("��˽�", 100);
////	print(p);
////}
////
////
////void testa()
////{
////	Person<string,int> p("�����", 99);
////	print(p);
////}
//
//
////3.������ģ�廯--����������ģ�廯���д���
//template<class T>
//void print(T &p)
//{
//	p.show();
//	cout << "T�������ǣ�" << typeid(T).name() << endl;
//}
//
////void testc()
////{
////	Person<string, int> p("��ɮ", 30);
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
////��ģ����̳�
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
////��ģ���Ա�������ļ���д
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

