#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<map>

enum dept
{
	Planning_dept,
	Fine_Arts_dept,
	RD_dept
};


class Emp
{
public:
	string m_name;//姓名
	int salary;//工资
	int m_dept;//部门

};

//创建员工信息
void CreatEmp(vector<Emp>& Company)
{
	string name = "ABCDEFGHIJ";
	for (int i = 0; i < 10; ++i)
	{
		Emp tmp;
		tmp.m_name = "员工";
		tmp.m_name += name[i];
		Company.push_back(tmp);
	}
}


//随机分配薪水和部门
void rand_assign(vector<Emp> &Company)
{
	//加个种子
	srand((unsigned int)time(NULL));

	for (vector<Emp>::iterator it = Company.begin(); it != Company.end(); ++it)
	{
		int dept = rand() % 3;//随机成0/1/2指代三个部门
		switch (dept)
		{
		case Planning_dept:
			it->m_dept = Planning_dept;
			it->salary = rand() % 7000 + 3000;
			break;
		case Fine_Arts_dept:
			it->m_dept = Fine_Arts_dept;
			it->salary = rand() % 7000 + 2000;
			break;
		case RD_dept:
			it->m_dept = RD_dept;
			it->salary = rand() % 7000 + 5000;
			break;
		}
	}
}





void printMap_V1(multimap<int, Emp>& m)
{
	for (multimap<int, Emp>::iterator it = m.begin(); it != m.end(); ++it)
	{
		if ((*it).first == 0)
		{
			cout <<"部门为:策划部门" ;
		}
		else if ((*it).first == 1)
		{
			cout << "部门为:美术部门" ;
		}
		else
			cout << "部门为:研发部门" ;
		cout << "\t" << it->second.m_name << "\t工资为：" << it->second.salary << endl;

	}
}


void printMap_V2(multimap<int, Emp>& m)
{
	cout << "策划部门" << endl;
	multimap<int, Emp>::iterator pos_ch = m.find(Planning_dept);
	int cnt = m.count(Planning_dept);
	for (;cnt>0;++pos_ch)
	{
		cout<<pos_ch->second.m_name<<"\t工资为："<<pos_ch->second.salary<<endl;
		--cnt;
	}
	//-------------------------------复用下来就行

}



