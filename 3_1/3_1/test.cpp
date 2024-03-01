#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>

//vector容器

void printvector(vector<int> &v1)
{
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//赋值操作
	//1.=赋值
	vector<int> v2;
	v2 = v1;
	printvector(v2);

	//2.assign赋值--给一个指针区间，左闭右开
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printvector(v3);

	//3.assign赋值--n个x赋值
	vector<int> v4;
	v4.assign(10, 100);
	printvector(v4);
}

//vector的构造函数
void test02()
{
	//默认构造/无参构造
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//通过区间构造
	vector<int> v2(v1.begin(), v1.end());
	printvector(v2);

	//n个elm方式构造
	vector<int> v3(10, 100);
	printvector(v3);


	//拷贝构造
	vector<int> v4(v3);
	printvector(v4);

}


//vector的容量和大小
void test03()
{
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//empty()判断容器是否为空 为空则返回1，不为空则返回0
	if (v1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "不为空" << endl
			 << "且大小为：" << v1.size() << "容量为：" << v1.capacity() << endl;
	}

	//resize重新指定大小
	v1.resize(10);
	printvector(v1);//未指定填充参数则默认填充0

	v1.resize(15, 10);
	printvector(v1);

	v1.resize(5);
	printvector(v1);



}

//vector的插入和删除
void test04()
{

	//push_back插入
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//insert插入
	v1.insert(v1.begin(), 100);//在pos的位置插入一个x
	printvector(v1);

	v1.insert(v1.begin() + 1, 2, 1000);//在pos的位置插入n个x
	printvector(v1);

	//pop_back删除
	v1.pop_back();
	printvector(v1);

	//erase删除
	v1.erase(v1.begin());//删除迭代器指向的元素
	printvector(v1);

	v1.erase(v1.begin(),v1.begin()+2);//删除迭代器指向的区间的元素-->左闭右开
	printvector(v1);


	//清空容器
	v1.clear();
	printvector(v1);


}

//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//}