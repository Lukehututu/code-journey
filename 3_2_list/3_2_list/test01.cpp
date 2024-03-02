#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<list>

void printlist(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}


//list构造函数
void test01()
{
	//1.默认构造
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printlist(L1);

	//2.迭代器区间构造
	list<int>L2(L1.begin(), L1.end());
	printlist(L2);

	//3.拷贝构造
	list<int>L3(L2);
	printlist(L3);

	//4.n个elem构造
	list<int>L4(4, 10);
	printlist(L4);


}

//list的赋值和交换
void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printlist(L1);

	//assign(迭代器区间)
	list<int>L2;
	L2.assign(L1.begin(), L1.end());
	printlist(L2);

	//assign(n,elem)
	list<int>L3;
	L3.assign(3, 5);
	printlist(L3);

	//=赋值
	list<int>L4;
	L4 = L3;
	printlist(L4);

	//swap交换容器
	cout << "交换前" << endl;
	printlist(L2);
	printlist(L3);

	cout << "交换后" << endl;
	L2.swap(L3);
	printlist(L2);
	printlist(L3);

}

//list的大小操作
void test03()
{
	list<int>L1 = {1,2,3,4};

	printlist(L1);

	cout << "此时容器的大小为：" << L1.size() << endl;
	if (L1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "此时容器的大小为：" << L1.size() << endl;
	}

	L1.resize(10);
	printlist(L1);

	L1.resize(15, 5);
	printlist(L1);


}

//list容器的插入和删除
//*push_back(elem);//在容器尾部加入一个元素
//*pop_back();//删除容器中最后一个元素
//*push_front(elem);//在容器开头插入一个元素
//*pop_front();//从容器开头移除第一个元素
//*insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//*insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
//*insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//*clear();//移除容器的所有数据
//*erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//*erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//*remove(elem);//删除容器中所有与elem值匹配的元素。

void test04()
{
	list<int> L;
	//头插尾插
	L.push_back(10);
	L.push_back(20);
	L.push_front(200);
	L.push_front(100);
	printlist(L);
	//头删尾删
	L.pop_back();
	L.pop_front();
	printlist(L);
	//insert
	list<int>::iterator it = L.begin();
	L.insert(it, 500);
	L.insert(it, 6, 600);
	printlist(L);

	//erase
	//此时这个it还是指向原始的第一位
	L.erase(it);//这行之后这个原始的第一位就没了，因此it成了野迭代器
	printlist(L);

	//如果之后再执行下面的代码那就会变成非法访问
	//L.erase(it, ++it);
	//printlist(L);
	//因此要重新赋值迭代器
	list<int>::iterator ite = L.begin();
	L.erase(ite,++ite);
	printlist(L);

	//remove;
	L.remove(600);
	printlist(L);

	//clear
	L.clear();





}




//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//}