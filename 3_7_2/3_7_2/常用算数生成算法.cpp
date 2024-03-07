#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<numeric>
#include<vector>

void test1()
{
	vector<int>v;
	for (int i = 1; i < 101; i++)
	{
		v.push_back(i);
	}

	int sum = accumulate(v.begin(), v.end(), 1000);
	cout << sum << endl;
}

//fill
void test2()
{
	vector<int>v;
	v.resize(10);
	fill(v.begin(), v.end(), 10);
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
}

//int main()
//{
//	//test1();
//	test2();
//}
