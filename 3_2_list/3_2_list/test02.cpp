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
	
	cout << "����Ԫ��Ϊ" << L.front() << endl;
	cout << "��βԪ��Ϊ" << L.back() << endl;

	list<int>::iterator it = L.begin();
	it++;
	//it = it + 1;


}


//list������ͷ�ת
void testb()
{
	list<int>L;
	L.push_back(40);
	L.push_back(10);
	L.push_back(30);
	L.push_back(20);

	cout << "��תǰ:" << endl;
	printlist(L);
	cout << "��ת��" << endl;
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

	cout << "����ǰ��" << endl;
	printlist(L);
	cout << "�����" << endl;
	L.sort();
	printlist(L);

	/*sort(L.begin(),L.end());
	printlist(L);*/

	//ʵ�ֽ���

	//1.ֱ�ӷ�ת
	L.reverse();
	printlist(L);

	L.reverse();
	printlist(L);

	//2.����sort�����ذ汾
	L.sort(m_compare);
	printlist(L);



}

int main()
{
	//testa();
	//testb();
	testc();
}