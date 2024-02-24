#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include"test.h"





//菜单
void menu()
{
	cout << "*************************************" << endl;
	cout << "******** 欢迎使用职工管理系统 *******" << endl;
	cout << "*********** 0.退出管理程序 **********" << endl;
	cout << "*********** 1.增加职工信息 **********" << endl;
	cout << "*********** 2.显示职工信息 **********" << endl;
	cout << "*********** 3.删除离职信息 **********" << endl;
	cout << "*********** 4.删改职工信息 **********" << endl;
	cout << "*********** 5.查找职工信息 **********" << endl;
	cout << "*********** 6.按照编号排序 **********" << endl;
	cout << "*********** 7.清空所有文档 **********" << endl;
	cout << "*************************************" << endl;
}


//释放空间
void clear(BaseFuc* ptr)
{
	delete ptr;
	ptr = nullptr;
}


//储存数据
void Final_store(EmpTable& tab)
{
	ofstream ofs;
	ofs.open("data.txt", ios::out);
	//写数据
	ofs << tab.data;
	ofs.close();
}


