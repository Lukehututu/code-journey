#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include"test.h"





//�˵�
void menu()
{
	cout << "*************************************" << endl;
	cout << "******** ��ӭʹ��ְ������ϵͳ *******" << endl;
	cout << "*********** 0.�˳�������� **********" << endl;
	cout << "*********** 1.����ְ����Ϣ **********" << endl;
	cout << "*********** 2.��ʾְ����Ϣ **********" << endl;
	cout << "*********** 3.ɾ����ְ��Ϣ **********" << endl;
	cout << "*********** 4.ɾ��ְ����Ϣ **********" << endl;
	cout << "*********** 5.����ְ����Ϣ **********" << endl;
	cout << "*********** 6.���ձ������ **********" << endl;
	cout << "*********** 7.��������ĵ� **********" << endl;
	cout << "*************************************" << endl;
}


//�ͷſռ�
void clear(BaseFuc* ptr)
{
	delete ptr;
	ptr = nullptr;
}


//��������
void Final_store(EmpTable& tab)
{
	ofstream ofs;
	ofs.open("data.txt", ios::out);
	//д����
	ofs << tab.data;
	ofs.close();
}


