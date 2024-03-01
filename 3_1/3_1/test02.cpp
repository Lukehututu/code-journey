#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>



void printvector(vector<int>& v1);


//数据的存取
void testa()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	
	//[]访问元素
	for (unsigned int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	//at
	for (unsigned int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;


	//访问第一个元素
	cout << "第一个元素为：" << v1.front() << endl;

	//访问最后一个元素
	cout << "最后一个元素为:" << v1.back() << endl;
}

//vector容器互换
void testb()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int> v2;
	for (int i = 9; i >= 0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);
	
	v1.swap(v2);
	cout << endl;
	
	printvector(v1);
	printvector(v2);
	


}

//实际用途
void rel_mem()
{
	vector<int> v1;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
	cout << "v1的容量为:" << v1.capacity() << endl << "v1的大小为：" << v1.size() << endl;
	cout << endl;

	v1.resize(3);
	cout << "v1的容量为:" << v1.capacity() << endl << "v1的大小为：" << v1.size() << endl;
	cout << endl;

	vector<int>(v1).swap(v1); //实际上此处是拷贝构造的一个匿名对象，在本行创建本行销毁，因此系统自动就释放了容量空间
	cout << "v1的容量为:" << v1.capacity() << endl << "v1的大小为：" << v1.size() << endl;



}

//预留空间-reserve
void testc()
{
	vector<int> v;
	int* p = nullptr;
	int cnt = 0;//记录开辟次数

	//如果事先知道数据量，可以利用reserve先预留好空间，这样就可以减少开辟空间的此处
	v.reserve(100000);
	
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		//记录有多少次开辟空间
		if (p != &v[0])
		{
			p = &v[0];
			cnt++;
		}

		//这种方式少了1次
		/*if (v.size() == v.capacity())
		{
			cnt++;
		}*/
	}
	cout << cnt << endl;



}

int main()
{
	//testa();
	//testb();
	//rel_mem();
	testc();
}