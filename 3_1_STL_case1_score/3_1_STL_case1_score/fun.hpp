#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>

class Contestants
{
public:

	//��ʼ��
	Contestants(char id )
	{
		m_id = id;
	}

	//�ṩһ���޲ε����ذ汾
	//Contestants()
	//{
	//	;
	//}

	//��ȡ��ѡ�ֵ����շ���
	void get_score(deque<double> &a)
	{
		//��ѡ�ֳɼ�����
		sort(a.begin(), a.end());
		//ȥ����߷ֺ���ͷ�
		a.pop_front();
		a.pop_back();
		
		//��ƽ��ֵ
		double sum = 0;
		for (deque<double>::iterator it=a.begin();it!=a.end();it++)
		{
			sum +=*it;
		}
		
		double avg = sum / 8.0;
		m_score = avg;
	}


	char m_id;
	double m_score;


};



//��ӡ�ɼ�����
void show_score(vector<Contestants>& a,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << "ѡ��" << a[i].m_id << "�ĳɼ�Ϊ" << a[i].m_score << endl;
	}
}