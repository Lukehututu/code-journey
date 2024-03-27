#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<list>
#include<algorithm>

//���һ������, ������������N, �Լ�N������Ni.����������ȥ�غ��ӡ
//(1 < N < 100, 0 <= Ni <= MAX_INT)
//	��������:
//10
//1 3 2 6 2 6 4 8 2 6
//������� :
//	1 3 2 6 4 8


class Solution
{
public:

	bool isDuplicate(list<int>&L,list<int>::iterator it )
	{
		if (it == L.begin())
			return false;
		//û�ҵ�����it
		if (find(L.begin(), it, *it) == it)
			return false;
		else
			return true;
	}
	
	void EliminateDuplication(int& n,list<int>& L)
	{
		list<int>::iterator it = L.begin();
		//���ż�������ظ���
		for (it; it != L.end(); it++)
		{
			//û���ظ��ʹ�ӡ������������false
			if (!isDuplicate(L, it))
				cout << *it << ' ';
		}
	}
};


int main()
{
	int num = 0;
	int input = 0;
	cout << "���������" << endl;
	cin >> num;
	list<int>L;
	int emp_num = num;
	cout << "������Ҫ���������" << endl;
	while (emp_num--)
	{
		cin >> input;
		L.push_back(input);
	}
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << ' ';
	}
	Solution S;
	cout << endl;
	S.EliminateDuplication(num, L);

}




