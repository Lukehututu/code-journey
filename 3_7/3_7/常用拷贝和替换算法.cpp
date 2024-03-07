#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

void printvec(int v);


void test1()
{
	vector<int>v;
	for (int i = 0; i < 5; ++i)
	{
		v.push_back(i);
	}
	vector<int>v2;
	v2.resize(v.size());
	copy(v.begin(), v.end(), v2.begin());
	for_each(v2.begin(), v2.end(),printvec);

}

//replace
void test2()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	for_each(v.begin(), v.end(), printvec);
	cout << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), printvec);

}


class greater30
{
public:
	bool operator()(const int v)
	{
		return v >= 30;
	}

	
};

//replace_if
void test3()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	for_each(v.begin(), v.end(), printvec);
	cout << endl;
	replace_if(v.begin(), v.end(), greater30(), 3000);
	for_each(v.begin(), v.end(), printvec);
	
}

void test4()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 5; ++i)
	{
		v1.push_back(i);
		v2.push_back(i+100);
	}
	cout << "交换前" << endl;
	for_each(v1.begin(), v1.end(), printvec);
	cout << endl;
	for_each(v2.begin(), v2.end(), printvec);
	cout << endl;
	cout << "---------------------" << endl;
	cout << "交换后" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), printvec);
	cout << endl;
	for_each(v2.begin(), v2.end(), printvec);

}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
}