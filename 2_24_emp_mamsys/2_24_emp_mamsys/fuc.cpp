#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include"test.h"

enum Option
{
	ext,
	add,
	show,
	dele,
	mod,
	sear,
	sort,
	clr
};



int main()
{
	EmpTable tab;


	//����һ������ָ�뷽������ö�̬
	BaseFuc* ptr = nullptr;
	menu();
	cout << "����������ѡ��" << endl;
	int input = -1;
	do
	{
		cin >> input;
		switch (input)
		{
		case ext:
			break;
		case add:
			ptr = new ADD;
			ptr->fuc(tab);
			clear(ptr);
			break;
		case show:
			ptr = new SHOW;
			ptr->fuc(tab);
			clear(ptr);
			break;
		case dele:
			ptr = new DELE;
			ptr->fuc(tab);
			clear(ptr);
			break;
		case mod:
			ptr = new MOD;
			ptr->fuc(tab);
			clear(ptr);
			break;
		case sear:
			ptr = new SEAR;
			ptr->fuc(tab);
			clear(ptr);
			break;
		case sort:
			ptr = new SORT;
			ptr->fuc(tab);
			clear(ptr);
			break;
		case clr:
			ptr = new CLR;
			ptr->fuc(tab);
			clear(ptr);
			break;
		default:
			cout << "����Ƿ�����������" << endl;
			break;
		}
		menu();
		cout << "����������ѡ��" << endl;
	} while (input);

	//�����ʽ���ʱ������д�������
	Final_store(tab);


}