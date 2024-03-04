#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include"fuc.hpp"
#include<map>



int main()
{
	vector<Emp>Company;

	//创建10名员工
	CreatEmp(Company);

	//给员工随机分配薪水和部门
	rand_assign(Company);

	//分配完再放进multimap中
	multimap<int, Emp> m;
	for (int i = 0; i < 10; ++i)
	{
		m.insert(make_pair(Company[i].m_dept, Company[i]));
	}

	//打印员工信息
	//printMap_V1(m);

	printMap_V2(m);

	system("pause");
}