#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>


void test05()
{
	//����������
	vector<vector<int>> V;

	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//�ȸ�С������ֵ
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 5);
		v3.push_back(i + 9);
		v4.push_back(i + 13);
	}
	int i = 0;

	//��С�����ŵ���������
	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);
	//��������
	for (vector<vector<int>>::iterator it = V.begin(); it != V.end(); it++)
	{
		for (vector<int>::iterator ve = (*it).begin(); ve != (*it).end(); ve++)
		{
			cout << *ve << " " ;
		}
		cout << endl;
	}
}

int main()
{
	test05();
}