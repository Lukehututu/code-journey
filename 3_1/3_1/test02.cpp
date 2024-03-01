#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>



void printvector(vector<int>& v1);


//���ݵĴ�ȡ
void testa()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	
	//[]����Ԫ��
	for (unsigned int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	//at
	for (unsigned int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;


	//���ʵ�һ��Ԫ��
	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;

	//�������һ��Ԫ��
	cout << "���һ��Ԫ��Ϊ:" << v1.back() << endl;
}

//vector��������
void testb()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int> v2;
	for (int i = 9; i >= 0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);
	
	v1.swap(v2);
	cout << endl;
	
	printvector(v1);
	printvector(v2);
	


}

//ʵ����;
void rel_mem()
{
	vector<int> v1;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
	cout << "v1������Ϊ:" << v1.capacity() << endl << "v1�Ĵ�СΪ��" << v1.size() << endl;
	cout << endl;

	v1.resize(3);
	cout << "v1������Ϊ:" << v1.capacity() << endl << "v1�Ĵ�СΪ��" << v1.size() << endl;
	cout << endl;

	vector<int>(v1).swap(v1); //ʵ���ϴ˴��ǿ��������һ�����������ڱ��д����������٣����ϵͳ�Զ����ͷ��������ռ�
	cout << "v1������Ϊ:" << v1.capacity() << endl << "v1�Ĵ�СΪ��" << v1.size() << endl;



}

//Ԥ���ռ�-reserve
void testc()
{
	vector<int> v;
	int* p = nullptr;
	int cnt = 0;//��¼���ٴ���

	//�������֪������������������reserve��Ԥ���ÿռ䣬�����Ϳ��Լ��ٿ��ٿռ�Ĵ˴�
	v.reserve(100000);
	
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		//��¼�ж��ٴο��ٿռ�
		if (p != &v[0])
		{
			p = &v[0];
			cnt++;
		}

		//���ַ�ʽ����1��
		/*if (v.size() == v.capacity())
		{
			cnt++;
		}*/
	}
	cout << cnt << endl;



}

int main()
{
	//testa();
	//testb();
	//rel_mem();
	testc();
}