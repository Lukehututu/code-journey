#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>


//�߼��º���

void test1()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<bool>v2;
	v2.resize(v.size());//Ҫ�ȸ�v2Ԥ���ռ��ٴ����� �˴�Ҳ������reserve

	transform(v.begin(),v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;


}

int main()
{
	test1();

}