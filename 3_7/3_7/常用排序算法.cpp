#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

void printvec(int v)
{
	cout << v << " ";
}

void testa()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), printvec);
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), printvec);
	
}

//random_shuffle
void testb()
{
	srand((unsigned int)time(NULL));
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), printvec);
}

void testc()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+2);
	}
	//merge要合并有序序列
	vector<int>v3;
	//v3.reserve(v1.size() + v2.size());
	v3.resize(v1.size() + v2.size());//要提前给v3准备好容量
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), printvec);

}


//reverse
void testd()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);
	for_each(v.begin(), v.end(), printvec);
	cout << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), printvec);

}

//int main()
//{
//	//testa();
//	//testb();
//	//testc();
//	testd();
//}