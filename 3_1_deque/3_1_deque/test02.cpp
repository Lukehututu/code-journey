#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<deque>
#include<algorithm>


//deque删除和增加

void printdeque(const deque<int>& v);

void testa()
{
	deque<int> d1;
	
	//头插和尾插
	d1.push_back(10);
	d1.push_back(20);

	d1.push_front(100);
	d1.push_front(200);
	//200 100 10 20
	printdeque(d1);

	//头删尾删
	d1.pop_front();//100 10 20 
	d1.pop_back();//100 10
	printdeque(d1);

	//insert添加
	d1.insert(d1.begin(), 200);//200 100 10
	printdeque(d1);
	d1.insert(d1.begin(), 2, 50);//50 50 200 100 10
	printdeque(d1);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printdeque(d1);


	//erase删除
	d1.erase(d1.begin());
	printdeque(d1);

	d1.erase(d1.begin(), d1.begin() + 3);
	d2.push_back(1);
	printdeque(d1);

	//clear清空
	d1.clear();
	printdeque(d1);



}

//deque的数据存取
void testb()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(40);
	d.push_front(50);
	d.push_front(60);
	
	//用[]
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}

	cout << endl;
	//用at函数
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	//访问头尾元素
	cout << "头元素为：" << d.front() << endl;
	cout << "尾元素为：" << d.back() << endl;
}


//deque排序
void testc()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(40);
	d.push_front(50);
	d.push_front(60);

	printdeque(d);
	cout << "排序后：" << endl;
	sort(d.begin(), d.end());
	printdeque(d);



}

int main()
{
	//testa();
	//testb();
	testc();
}