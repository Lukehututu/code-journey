#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<set>

void printset(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

}

void test01()
{
	//普通构造
	set<int> s;
	
	//insert
	s.insert(1);
	s.insert(4);
	s.insert(2);
	s.insert(5);
	s.insert(4);

	//所有元素插入会自动排序
	//不允许相同元素存在（不报错但插不进去）
	printset(s);


	//拷贝构造
	set<int> s2(s);
	printset(s2);
}


//set大小和交换
void test02()
{
	set<int> s1;
	s1.insert(1);
	s1.insert(3);
	s1.insert(2);
	s1.insert(4);
	printset(s1);

	if (s1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "此时容器的大小为:" << s1.size() << endl;
	}

	set<int>s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);

	cout << "交换前" << endl;
	printset(s1);
	printset(s2);

	cout << "交换后" << endl;
	s1.swap(s2);
	printset(s1);
	printset(s2);
}


//set的插入和删除
void test03()
{
	//插入
	set<int>s1;

	s1.insert(1);
	s1.insert(3);
	s1.insert(4);
	s1.insert(2);
	printset(s1);

	//删除--erase
	//1.删除迭代器指向的位置
	s1.erase(s1.begin());//此处的begin指向的就是排序过后的第一位，跟插入顺序无关！！
	printset(s1);

	//2.删除指定数值的元素
	s1.erase(2);
	printset(s1);

	//3.删除迭代器指定的区间
	s1.erase(s1.begin(), s1.end());
	printset(s1);

	////清空所有元素clear
	//s1.clear();

}


//set的查找与统计
void test04()
{
	set<int>s;
	s.insert(1);
	s.insert(3);
	s.insert(5);
	s.insert(4);

	//find()成员函数，返回一个迭代器，如果找到了该元素那返回该元素的迭代器对应的位置
	//如果没找到则返回end()
	if (s.find(3) != s.end())
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	//统计个数--count()--又因为set中不允许有重复的元素因此count结果只能是0或1
	cout << "s中1的个数为:" << s.count(1) << endl;

}


//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//
//
//}