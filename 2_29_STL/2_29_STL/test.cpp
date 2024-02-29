#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>

//��ʶSTL��Stander Template Libary��
//STL�ӹ����Ϸ�Ϊ������(Container) �㷨��Algorithm�� ��������iterator��



void myPrint(int i)
{
	cout << i << endl;
}

void test()
{
	//��������
	vector<int> m;

	//������
	m.push_back(1);
	m.push_back(2);
	m.push_back(3);
	m.push_back(4);

	//���ֵ�����ʽ
	//����������
	vector<int>::iterator itBegin = m.begin();//��ʼ������->ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = m.end();//��ֹ������->ָ�����������һ��Ԫ�صĺ�һ��Ԫ��

	//��ʽ1��
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	itBegin = m.begin();
	cout << endl;
	//��ʽ2��
	for (; itBegin != itEnd; itBegin++)
	{
		cout << *itBegin << endl;
	}

	itBegin = m.begin();
	cout << endl;
	
	
	//��ʽ3��
	for_each(itBegin, itEnd, myPrint);
	

}
//int main()
//{
//	test();
//
//
//}

//vector����Զ�����������
