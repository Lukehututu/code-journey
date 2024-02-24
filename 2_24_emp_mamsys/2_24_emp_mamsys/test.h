#pragma once
using namespace std;
#include<iostream>
#include<string>
#include<fstream>

//��������

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

//����Ա����Ϣ
class EmpInfo
{
public:
	int idnum;//Ա�����
	string emp_name;//Ա������
	string duty;//--Ա��ְ��
	string post;//--Ա��ְλ

};

//����Ա����
class EmpTable
{
public:

	//���ù��캯������ʼ��
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

//������


//����һ�����������
class BaseFuc
{
public:
	virtual void fuc(EmpTable& tab) = 0;

	//�������
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


//ADD����ְ����Ϣ
class ADD :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		int ipt = -1;
		do {
			CheckCap(tab);
			cout << "������Ա�����:" << endl;
			cin >> tab.data[tab.cur_sz].idnum;
			cout << "����������:" << endl;
			cin >> tab.data[tab.cur_sz].emp_name;
			//cout << "������ְ����λ���(a.��ͨԱ�� b.���� c.�ϰ�):" << endl;
			//cin >> tab.data[tab.cur_sz].post;
			tab.cur_sz++;
			cout << "Ҫ�������Ա����Ϣ��1>���� 0>�˳�" << endl;
			cin >> ipt;
		} while (ipt);
		
		
	}
};



//��ʾ����Ա����Ϣ
class SHOW :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "Ա�����\t" << "Ա������\t" << "Ա��ְλ\t" << "Ա��ְ��\t" << endl;

	}


};



//ɾ��Ա����Ϣ
class DELE :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "dele" << endl;

	}


};


//�޸�Ա����Ϣ
class MOD :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "mod" << endl;

	}


};


//����
class SEAR :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "add" << endl;

	}


};

//����
class SORT :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "add" << endl;

	}


};


//��������ĵ�
class CLR :public BaseFuc
{
public:
	void fuc(EmpTable& tab)
	{
		cout << "add" << endl;

	}


};

//��ӡ�˵�
void menu();


void clear(BaseFuc* ptr);

void Final_store(EmpTable& tab);