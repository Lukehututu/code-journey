#pragma once
using namespace std;
#include<iostream>
#include<string>
#include<fstream>

//变量声明

#define Init_Capa 3;
#define Inc_sz 2




class job
{
public:
	job()
	{	
		
	}
	string job_a;
	string job_b;
	string job_c;

};

//定义员工信息
class EmpInfo
{
public:
	int idnum;//员工编号
	string emp_name;//员工姓名
	string duty;//--员工职责
	string post;//--员工职位

};

//定义员工表
class EmpTable
{
public:

	//利用构造函数来初始化
	EmpTable()
	{
		capacity = Init_Capa;
		data = new EmpInfo[capacity];
		cur_sz = 0;
	}
	int capacity;
	int cur_sz;
	EmpInfo* data;
};

//类声明


//定义一个抽象虚基类
class BaseFuc
{
public:
	virtual void fuc(EmpTable& tab) = 0;

	//检测容量
	void CheckCap(EmpTable& tab)
	{
		if (tab.cur_sz == tab.capacity)
		{
			EmpInfo* tmp=nullptr;
			tmp = (EmpInfo* )realloc(tab.data, (tab.capacity + Inc_sz) * sizeof(EmpInfo));
			if (tmp == nullptr)
			{
				perror("Check");
				return;
			}
			tab.data = tmp;
			tab.capacity += Inc_sz;
		}
	}
};


//ADD增加职工信息
class ADD :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		int ipt = -1;
		do {
			CheckCap(tab);
			cout << "请输入员工编号:" << endl;
			cin >> tab.data[tab.cur_sz].idnum;
			cout << "请输入姓名:" << endl;
			cin >> tab.data[tab.cur_sz].emp_name;
			//cout << "请输入职工岗位编号(a.普通员工 b.经理 c.老板):" << endl;
			//cin >> tab.data[tab.cur_sz].post;
			tab.cur_sz++;
			cout << "要继续添加员工信息吗？1>继续 0>退出" << endl;
			cin >> ipt;
		} while (ipt);
		
		
	}
};



//显示所有员工信息
class SHOW :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "员工编号\t" << "员工姓名\t" << "员工职位\t" << "员工职责\t" << endl;

	}


};



//删除员工信息
class DELE :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "dele" << endl;

	}


};


//修改员工信息
class MOD :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "mod" << endl;

	}


};


//检索
class SEAR :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "add" << endl;

	}


};

//排序
class SORT :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "add" << endl;

	}


};


//清空所有文档
class CLR :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "add" << endl;

	}


};

//打印菜单
void menu();


void clear(BaseFuc* ptr);

void Final_store(EmpTable& tab);