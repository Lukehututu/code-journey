#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>

//vector����

void printvector(vector<int> &v1)
{
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//��ֵ����
	//1.=��ֵ
	vector<int> v2;
	v2 = v1;
	printvector(v2);

	//2.assign��ֵ--��һ��ָ�����䣬����ҿ�
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printvector(v3);

	//3.assign��ֵ--n��x��ֵ
	vector<int> v4;
	v4.assign(10, 100);
	printvector(v4);
}

//vector�Ĺ��캯��
void test02()
{
	//Ĭ�Ϲ���/�޲ι���
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//ͨ�����乹��
	vector<int> v2(v1.begin(), v1.end());
	printvector(v2);

	//n��elm��ʽ����
	vector<int> v3(10, 100);
	printvector(v3);


	//��������
	vector<int> v4(v3);
	printvector(v4);

}


//vector�������ʹ�С
void test03()
{
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//empty()�ж������Ƿ�Ϊ�� Ϊ���򷵻�1����Ϊ���򷵻�0
	if (v1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "��Ϊ��" << endl
			 << "�Ҵ�СΪ��" << v1.size() << "����Ϊ��" << v1.capacity() << endl;
	}

	//resize����ָ����С
	v1.resize(10);
	printvector(v1);//δָ����������Ĭ�����0

	v1.resize(15, 10);
	printvector(v1);

	v1.resize(5);
	printvector(v1);



}

//vector�Ĳ����ɾ��
void test04()
{

	//push_back����
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//insert����
	v1.insert(v1.begin(), 100);//��pos��λ�ò���һ��x
	printvector(v1);

	v1.insert(v1.begin() + 1, 2, 1000);//��pos��λ�ò���n��x
	printvector(v1);

	//pop_backɾ��
	v1.pop_back();
	printvector(v1);

	//eraseɾ��
	v1.erase(v1.begin());//ɾ��������ָ���Ԫ��
	printvector(v1);

	v1.erase(v1.begin(),v1.begin()+2);//ɾ��������ָ��������Ԫ��-->����ҿ�
	printvector(v1);


	//�������
	v1.clear();
	printvector(v1);


}

//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//}