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
	cout << "��ʱ���еĴ�СΪ" << q.size() << endl;

	while (!q.empty())
	{
		cout << "��ʱ��ͷԪ��Ϊ" << q.front() << endl;
		cout << "��ʱ��βԪ��Ϊ" << q.back() << endl;
		q.pop();
		cout << endl;
	}
	cout << "��ʱ���еĴ�СΪ" << q.size() << endl;

}

int main()
{
	test02();

}