#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<deque>


void printdeque(const deque<int> &v)
{
	for (deque<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		//可能错误--只想打印但错误的修改了*it的值
		//*it=100;

		cout << *it << " ";
	}
	cout << endl;

}

//deque的构造函数
void test01()
{
	

	//无参构造
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	//区间构造
	deque<int> d2(d1.begin(), d1.end());
	printdeque(d2);

	//填数构造
	deque<int> d3(10, 100);
	printdeque(d3);

	//拷贝构造
	deque<int> d4(d3);
	printdeque(d4);



}

void test02()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	//1.等号赋值
	deque<int> d2;
	d2 = d1;
	printdeque(d2);

	//assign区间赋值
	deque<int> d3;
	d3.assign(d2.begin(), d2.begin() + 2);
	printdeque(d3);


	//assign--n个x的方式赋值
	deque<int> d4;
	d4.assign(5, 10);
	printdeque(d4);



}


//deque的大小操作
void test03()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;
	}

	d1.resize(15);
	printdeque(d1);

	d1.resize(20, 5);
	printdeque(d1);

	d1.resize(5);
	printdeque(d1);



}


//int main()
//{
//	//test01();
//	//test02();
//	test03();
//}