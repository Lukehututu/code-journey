#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<deque>


void printdeque(const deque<int> &v)
{
	for (deque<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		//���ܴ���--ֻ���ӡ��������޸���*it��ֵ
		//*it=100;

		cout << *it << " ";
	}
	cout << endl;

}

//deque�Ĺ��캯��
void test01()
{
	

	//�޲ι���
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	//���乹��
	deque<int> d2(d1.begin(), d1.end());
	printdeque(d2);

	//��������
	deque<int> d3(10, 100);
	printdeque(d3);

	//��������
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

	//1.�ȺŸ�ֵ
	deque<int> d2;
	d2 = d1;
	printdeque(d2);

	//assign���丳ֵ
	deque<int> d3;
	d3.assign(d2.begin(), d2.begin() + 2);
	printdeque(d3);


	//assign--n��x�ķ�ʽ��ֵ
	deque<int> d4;
	d4.assign(5, 10);
	printdeque(d4);



}


//deque�Ĵ�С����
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
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
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