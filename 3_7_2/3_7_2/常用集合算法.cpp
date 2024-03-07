#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<algorithm>
#include<vector>

void myprint(int v)
{
	cout << v << " ";
}

//set_intersection 取交集
void testa()
{
	vector<int>s1;
	vector<int>s2;
	for (int i = 0; i < 10; ++i)
	{
		s1.push_back(i);//0-9
		s2.push_back(i+5);//5-14
	}
	//该函数的两个参数必须是有序集合
	vector<int>s_target;
	s_target.resize(min(s1.size(), s2.size()));
	vector<int>::iterator it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), s_target.begin());
	//for_each(s_target.begin(), it, myprint);
	for_each(s_target.begin(), s_target.end(), myprint);
	//此处的结束迭代器是返回的it而非s_target.end()因为一开始resize可能扩展大了，end()不一定是
	//交集的最后一个迭代器，但it一定是，就不会取出多余的元素。

}



//set_union 取并集
void testb()
{
	vector<int>s1;
	vector<int>s2;
	for (int i = 0; i < 10; ++i)
	{
		s1.push_back(i);//0-9
		s2.push_back(i + 5);//5-14
	}
	//该函数的两个参数必须是有序集合
	vector<int>s_target;
	s_target.resize(s1.size()+ s2.size());
	vector<int>::iterator it = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), s_target.begin());
	for_each(s_target.begin(), it, myprint);


}

//set_difference 取差集
void testc()
{
	vector<int>s1;
	vector<int>s2;
	for (int i = 0; i < 10; ++i)
	{
		s1.push_back(i);//0-9
		s2.push_back(i + 5);//5-14
	}
	//该函数的两个参数必须是有序集合
	vector<int>s_target1;
	vector<int>s_target2;
	//s1-s2
	s_target1.resize(s1.size());//极端情况就是两个集合没有交集那大小就是自身大小
	vector<int>::iterator it1 = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), s_target1.begin());
	for_each(s_target1.begin(), it1, myprint);
	cout << endl;
	//s2-s1
	s_target2.resize(s2.size());
	vector<int>::iterator it2 = set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), s_target2.begin());
	for_each(s_target2.begin(), it2, myprint);

}


int main()
{
	//testa();
	//testb();
	testc();
}