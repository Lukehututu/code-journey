#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<algorithm>
#include<vector>

void myprint(int v)
{
	cout << v << " ";
}

//set_intersection ȡ����
void testa()
{
	vector<int>s1;
	vector<int>s2;
	for (int i = 0; i < 10; ++i)
	{
		s1.push_back(i);//0-9
		s2.push_back(i+5);//5-14
	}
	//�ú����������������������򼯺�
	vector<int>s_target;
	s_target.resize(min(s1.size(), s2.size()));
	vector<int>::iterator it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), s_target.begin());
	//for_each(s_target.begin(), it, myprint);
	for_each(s_target.begin(), s_target.end(), myprint);
	//�˴��Ľ����������Ƿ��ص�it����s_target.end()��Ϊһ��ʼresize������չ���ˣ�end()��һ����
	//���������һ������������itһ���ǣ��Ͳ���ȡ�������Ԫ�ء�

}



//set_union ȡ����
void testb()
{
	vector<int>s1;
	vector<int>s2;
	for (int i = 0; i < 10; ++i)
	{
		s1.push_back(i);//0-9
		s2.push_back(i + 5);//5-14
	}
	//�ú����������������������򼯺�
	vector<int>s_target;
	s_target.resize(s1.size()+ s2.size());
	vector<int>::iterator it = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), s_target.begin());
	for_each(s_target.begin(), it, myprint);


}

//set_difference ȡ�
void testc()
{
	vector<int>s1;
	vector<int>s2;
	for (int i = 0; i < 10; ++i)
	{
		s1.push_back(i);//0-9
		s2.push_back(i + 5);//5-14
	}
	//�ú����������������������򼯺�
	vector<int>s_target1;
	vector<int>s_target2;
	//s1-s2
	s_target1.resize(s1.size());//�������������������û�н����Ǵ�С���������С
	vector<int>::iterator it1 = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), s_target1.begin());
	for_each(s_target1.begin(), it1, myprint);
	cout << endl;
	//s2-s1
	s_target2.resize(s2.size());
	vector<int>::iterator it2 = set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), s_target2.begin());
	for_each(s_target2.begin(), it2, myprint);

}


int main()
{
	//testa();
	//testb();
	testc();
}