#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<functional>

//�ڽ���������

//1.�����º���

//һԪ�º���
void test01()
{
	negate<int> n;
	cout << n(40) << endl;
}


//��Ԫ�º���
void test02()
{
	plus<int> p;//��Ȼ�Ƕ�Ԫ�º�����ʵ����ָ����()�Ĳ�����������
	//plus�Ĳ����б�ֻ����һ����������Ĭ��������ͬ���͵������в���
	cout << p(1, 2) << endl;
}


//int main()
//{
//	test01();
//	test02();
//}
