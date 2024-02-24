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


	//创建一个父类指针方便后面用多态
	BaseFuc* ptr = nullptr;
	menu();
	cout << "请输入您的选择" << endl;
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
			cout << "输入非法请重新输入" << endl;
			break;
		}
		menu();
		cout << "请输入您的选择" << endl;
	} while (input);

	//当访问结束时将内容写进外存中
	Final_store(tab);


}