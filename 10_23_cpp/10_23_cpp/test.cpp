#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>


////c++的动态内存开辟
////new
//int main()
//{
//	int* p = new int(10);//此时创建的是int 存放的数据是10
//	int* ar = new int[10];//此时创建的就是10个int的数组。
//
//	delete p;
//	delete [] ar;//释放数组的时候要加[]
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
//	cout << "swap1后\ta=" << a << "b=" << b << endl;
//	swap2(&a, &b);
//	cout << "swap2后\ta=" << a << "b=" << b << endl;
//	swap3(a, b);
//	cout << "swap3后\ta=" << a << "b=" << b << endl;
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