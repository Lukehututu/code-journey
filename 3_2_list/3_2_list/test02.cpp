#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<list>
#include<algorithm>

void printlist(const list<int>& L);

void testa()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);
	
	cout << "队首元素为" << L.front() << endl;
	cout << "队尾元素为" << L.back() << endl;

	list<int>::iterator it = L.begin();
	it++;
	//it = it + 1;


}


//list的排序和反转
void testb()
{
	list<int>L;
	L.push_back(40);
	L.push_back(10);
	L.push_back(30);
	L.push_back(20);

	cout << "反转前:" << endl;
	printlist(L);
	cout << "反转后：" << endl;
	L.reverse();
	printlist(L);

}

bool m_compare(int v1, int v2)
{
	return v1 > v2;
}

void testc()
{
	list<int>L;
	L.push_back(40);
	L.push_back(10);
	L.push_back(30);
	L.push_back(20);

	cout << "排序前：" << endl;
	printlist(L);
	cout << "排序后：" << endl;
	L.sort();
	printlist(L);

	/*sort(L.begin(),L.end());
	printlist(L);*/

	//实现降序

	//1.直接反转
	L.reverse();
	printlist(L);

	L.reverse();
	printlist(L);

	//2.利用sort的重载版本
	L.sort(m_compare);
	printlist(L);



}

int main()
{
	//testa();
	//testb();
	testc();
}