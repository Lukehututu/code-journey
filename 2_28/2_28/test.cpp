#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include"MyArray.hpp"



void test()
{
	MyArray<int> p(3);
	p.Add_Tail(1);
	p.Add_Tail(2);
	p.Add_Tail(3);
	int a = 0;
	int b = 0;
	p.get(a, b);
	cout << p[1] << endl;
	cout << "Ԫ�ظ���Ϊ:" << a << "����Ϊ��" << b << endl;
	p.Dele_Tail();
	p.Dele_Tail();
	p.Dele_Tail();
	p.Dele_Tail();
	p.get(a, b);
	cout << "Ԫ�ظ���Ϊ:" << a << "����Ϊ��" << b << endl;
}


int main()
{
	test();

}