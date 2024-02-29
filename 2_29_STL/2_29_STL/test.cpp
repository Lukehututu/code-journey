#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>

//初识STL（Stander Template Libary）
//STL从广义上分为：容器(Container) 算法（Algorithm） 迭代器（iterator）



void myPrint(int i)
{
	cout << i << endl;
}

void test()
{
	//创建对象
	vector<int> m;

	//放数据
	m.push_back(1);
	m.push_back(2);
	m.push_back(3);
	m.push_back(4);

	//三种迭代方式
	//建立迭代器
	vector<int>::iterator itBegin = m.begin();//起始迭代器->指向容器中第一个元素
	vector<int>::iterator itEnd = m.end();//终止迭代器->指向容器中最后一个元素的后一个元素

	//方式1：
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	itBegin = m.begin();
	cout << endl;
	//方式2：
	for (; itBegin != itEnd; itBegin++)
	{
		cout << *itBegin << endl;
	}

	itBegin = m.begin();
	cout << endl;
	
	
	//方式3：
	for_each(itBegin, itEnd, myPrint);
	

}
//int main()
//{
//	test();
//
//
//}

//vector存放自定义数据类型
