#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>


//1.* 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//2.* 函数对象超出普通函数的概念，函数对象可以有自己的状态
//3.* 函数对象可以作为参数传递



class MyAdd
{
public:
	int operator()(int &v1, int &v2) const
	{
		return v1 + v2;
	}

};

class Myprint
{
public:
	int mycnt;

	Myprint()
	{
		mycnt = 0;
	}

	void operator()(string line) 
	{
		cout << line << endl;
		mycnt++;
	}
	

};

void test()
{
	MyAdd a;
	int v1 = 1;
	int v2 = 2;
	cout << a(v1,v2) << endl;
}

void test02()
{
	Myprint p;
	p("hello c");
	p("hello c");
	p("hello c");
	p("hello c");
	cout << p.mycnt << endl;

}

void doprint(Myprint p, string line)
{
	p(line);
}

void test03()
{
	Myprint p;
	doprint(p, "hello python");

}

//返回的是bool类型的仿函数成为谓词
//operator()接受一个参数是一元谓词
//operator()接受两个参数是二元谓词

class Comp5
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}

};


void test04()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}

	//找容器中大于五的数
	Comp5 c;
	vector<int>::iterator it = find_if(v.begin(), v.end(),c );//跟find一样返回迭代器
	//或者直接用匿名对象
	//find_id(v.begin(), v.end(),Comp5());

	if (it == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了" << endl;
		cout << "数据为：" << *it << endl;
	}

}

class MyCom
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};


void test05()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end();++it)
	{
		cout << *it << ' ';
	}
	cout << endl;

	sort(v.begin(), v.end(), MyCom());
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;

}

int main()
{
	/*cout << "test01" << endl;
	test();
	cout << "test02" << endl;
	test02();
	cout << "test03" << endl;
	test03();*/
	//test04();
	test05();
}