#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//�������������
class Person
{
public:


	//û�з���ֵ���Բ�дvoid
	Person()//�ǿ��������������ص�
	{
		cout << "Person �Ĺ��캯��" << endl;
	}

	~Person()//��û�к������������Բ�������������
	{
		cout << "Person ����������" << endl;
	}
};

//void test01()
//{
//	Person p;
//}

int main()
{

	//test01();
	Person p;
	system("pause");
}

//���캯���ķ���͵���