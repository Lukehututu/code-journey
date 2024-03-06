#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>


void testa()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//int main()
//{
//	testa();
//
//}