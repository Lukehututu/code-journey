#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include"fuc.hpp"
#include<map>



int main()
{
	vector<Emp>Company;

	//����10��Ա��
	CreatEmp(Company);

	//��Ա���������нˮ�Ͳ���
	rand_assign(Company);

	//�������ٷŽ�multimap��
	multimap<int, Emp> m;
	for (int i = 0; i < 10; ++i)
	{
		m.insert(make_pair(Company[i].m_dept, Company[i]));
	}

	//��ӡԱ����Ϣ
	//printMap_V1(m);

	printMap_V2(m);

	system("pause");
}