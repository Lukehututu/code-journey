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
	string m_name;//����
	int salary;//����
	int m_dept;//����

};

//����Ա����Ϣ
void CreatEmp(vector<Emp>& Company)
{
	string name = "ABCDEFGHIJ";
	for (int i = 0; i < 10; ++i)
	{
		Emp tmp;
		tmp.m_name = "Ա��";
		tmp.m_name += name[i];
		Company.push_back(tmp);
	}
}


//�������нˮ�Ͳ���
void rand_assign(vector<Emp> &Company)
{
	//�Ӹ�����
	srand((unsigned int)time(NULL));

	for (vector<Emp>::iterator it = Company.begin(); it != Company.end(); ++it)
	{
		int dept = rand() % 3;//�����0/1/2ָ����������
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
			cout <<"����Ϊ:�߻�����" ;
		}
		else if ((*it).first == 1)
		{
			cout << "����Ϊ:��������" ;
		}
		else
			cout << "����Ϊ:�з�����" ;
		cout << "\t" << it->second.m_name << "\t����Ϊ��" << it->second.salary << endl;

	}
}


void printMap_V2(multimap<int, Emp>& m)
{
	cout << "�߻�����" << endl;
	multimap<int, Emp>::iterator pos_ch = m.find(Planning_dept);
	int cnt = m.count(Planning_dept);
	for (;cnt>0;++pos_ch)
	{
		cout<<pos_ch->second.m_name<<"\t����Ϊ��"<<pos_ch->second.salary<<endl;
		--cnt;
	}
	//-------------------------------������������

}



