#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>


////c++�Ķ�̬�ڴ濪��
////new
//int main()
//{
//	int* p = new int(10);//��ʱ��������int ��ŵ�������10
//	int* ar = new int[10];//��ʱ�����ľ���10��int�����顣
//
//	delete p;
//	delete [] ar;//�ͷ������ʱ��Ҫ��[]
//}

//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << b<<'\t'<<a<<endl;
//	a = 15;
//	cout << a<<'\t'<<b<<endl;
//	int c = 1;
//}

//void swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void swap2(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void swap3(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "\ta=" << a << "b=" << b << endl;
//	swap1(a, b);
//	cout << "swap1��\ta=" << a << "b=" << b << endl;
//	swap2(&a, &b);
//	cout << "swap2��\ta=" << a << "b=" << b << endl;
//	swap3(a, b);
//	cout << "swap3��\ta=" << a << "b=" << b << endl;
//
//
//}

//int& test()
//{
//	static int a = 10;
//	return a;
//}
//
//
//int  main()
//{
//	int& ret = test();
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	test() = 1000;
//	cout << "ret=" << ret << endl;
//}


void value(const int& ret)
{
	ret = 1000;
	cout << ret << endl;

}


int main()
{
	int a = 10;
	value(a);


}