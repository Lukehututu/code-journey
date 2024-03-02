#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<queue>

void test02()
{
	queue<int> q;
	q.push(40);
	q.push(30);
	q.push(20);
	q.push(10);
	cout << "此时队列的大小为" << q.size() << endl;

	while (!q.empty())
	{
		cout << "此时队头元素为" << q.front() << endl;
		cout << "此时队尾元素为" << q.back() << endl;
		q.pop();
		cout << endl;
	}
	cout << "此时队列的大小为" << q.size() << endl;

}

int main()
{
	test02();

}