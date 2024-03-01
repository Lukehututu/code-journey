#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>

class Contestants
{
public:

	//初始化
	Contestants(char id )
	{
		m_id = id;
	}

	//提供一个无参的重载版本
	//Contestants()
	//{
	//	;
	//}

	//获取该选手的最终分数
	void get_score(deque<double> &a)
	{
		//给选手成绩排序
		sort(a.begin(), a.end());
		//去除最高分和最低分
		a.pop_front();
		a.pop_back();
		
		//求平均值
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



//打印成绩函数
void show_score(vector<Contestants>& a,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << "选手" << a[i].m_id << "的成绩为" << a[i].m_score << endl;
	}
}