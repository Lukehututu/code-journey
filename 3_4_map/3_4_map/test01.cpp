#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<map>

//map容器
//map中的所有元素都是pair<key,value>

void printmap(map<int,int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "key:" << (*it).first << " \tvalue:" << (*it).second << endl;
	}
	cout << endl;
}

void test()
{
	//默认构造
	map<int, int>m1;
	//插入时可以用构建pair的匿名对象的形式传入
	m1.insert(pair<int, int>(1, 10));//此处实际上就是传了一个pair的匿名对象
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	printmap(m1);

	//拷贝构造
	map<int, int>m2(m1);
	printmap(m2);

	//=赋值
	map<int, int>m3;
	m3 = m2;
	printmap(m3);
}


//map大小和交换
void test1()
{
	//默认构造
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 50));
	m2.insert(pair<int, int>(5, 60));
	m2.insert(pair<int, int>(6, 90));

	if (m1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器大小为：" << m1.size() << endl;
	}

	cout << "交换前" << endl;
	printmap(m1);
	printmap(m2);
	cout << "交换后" << endl;
	m1.swap(m2);
	printmap(m1);
	printmap(m2);

}

//map的插入和删除
void test2()
{
	//四种插入
	//1.pair<>方式
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));

	//2.make_pair方式
	m.insert(make_pair(2, 20));

	//3.map<int,int>::value_type()方式
	m.insert(map<int, int>::value_type(3, 30));

	//4.[]方式插入（但不推荐），[]适合用来访问
	m[4] = (4, 40);

	/*cout << m[5] << endl;*/
	printmap(m);

	//1.删除指定迭代器位置
	m.erase(m.begin());
	printmap(m);

	//2.删除指定key值的元素
	m.erase(2);
	printmap(m);
	
	//3.删除指定迭代器区间
	m.erase(m.begin(), ++m.begin() );
	printmap(m);

	//clear清空
	m.clear();
	printmap(m);




}


//map的查找和统计
void test3()
{
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "找到了" << endl;
		cout << "key = " << pos->first << "\tval = " << pos->second << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}

	cout << "key = 3的元素有：" << m.count(3) << endl;

}


class MyCom
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}

};

//map容器排序
void test4()
{
	map<int, int,MyCom>m;
	m.insert(make_pair(2, 20));
	m.insert(make_pair(1, 10));
	m.insert(make_pair(3, 30));
	for (map<int, int,MyCom>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "key = " << (*it).first << "\tval = " << (*it).second << endl;
	}
}

int main()
{
	//test();
	//test1();
	//test2();
	//test3();
	test4();
}