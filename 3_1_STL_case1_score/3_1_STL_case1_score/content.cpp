#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include"fun.hpp"

void test()
{
	//��ʼ������ѡ��
	/*for (char c = 'a'; c < 'f'; c++)
	{
		cout << "������" << c << "ѡ�ֵ�����" << endl;
		deque

	}*/

	//deque<int> a;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "������Aѡ�ֵ�����" << endl;
	//	int tmp = 0;
	//	cin >> tmp;
	//	a.push_back(tmp);
	//}
	/*vector<Contestants> Cons;
	Cons.reserve(5);
	char ID = 'A';
	int sz = 0;
	cout << "������ѡ�ָ���" << endl;
	cin >> sz;
	for (int i = 0; i < sz; i++)
	{
		deque<int> a;
		cout << "������"<<ID<<"ѡ�ֵ�����" << endl;
		for (int i = 0; i < 10; i++)
		{
			int tmp = 0;
			cin >> tmp;
			a.push_back(tmp);
		}
		Cons[i].m_id=ID;
		ID++;
		Cons[i].m_score = a;
		Cons[i].get_score();
	}

	show_score(Cons, sz);*/

	//����5��ѡ��
	//�����ǷŽ�vector��
	srand((unsigned int)time(NULL));
	vector<Contestants> Cons;
	for (char id = 'A'; id < 'F'; id++) 
	{
		Contestants a(id);
		Cons.push_back(a);
	}

	char ID = 'A';
	int input = 0;
	for (int i = 0; i < 5; i++)
	{
		deque<double> temp;
		for (int j = 0; j < 10; j++)
		{
			input = rand() % 41 + 60;
			temp.push_back(input);
		}
		Cons[i].get_score(temp);
		Cons[i].m_id = ID;
		cout << "ѡ��" << ID << "��������Ϊ" <<Cons[i].m_score << endl;
		ID++;
	}

}


int main()
{
	test();
	system("pause");

}