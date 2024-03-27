#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<list>
#include<algorithm>

//设计一个程序, 输入数据数量N, 以及N个整数Ni.将该组数据去重后打印
//(1 < N < 100, 0 <= Ni <= MAX_INT)
//	样例输入:
//10
//1 3 2 6 2 6 4 8 2 6
//样例输出 :
//	1 3 2 6 4 8


class Solution
{
public:

	bool isDuplicate(list<int>&L,list<int>::iterator it )
	{
		if (it == L.begin())
			return false;
		//没找到返回it
		if (find(L.begin(), it, *it) == it)
			return false;
		else
			return true;
	}
	
	void EliminateDuplication(int& n,list<int>& L)
	{
		list<int>::iterator it = L.begin();
		//倒着检查有无重复的
		for (it; it != L.end(); it++)
		{
			//没有重复就打印，即函数返回false
			if (!isDuplicate(L, it))
				cout << *it << ' ';
		}
	}
};


int main()
{
	int num = 0;
	int input = 0;
	cout << "请输入个数" << endl;
	cin >> num;
	list<int>L;
	int emp_num = num;
	cout << "请输入要插入的数据" << endl;
	while (emp_num--)
	{
		cin >> input;
		L.push_back(input);
	}
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << ' ';
	}
	Solution S;
	cout << endl;
	S.EliminateDuplication(num, L);

}




