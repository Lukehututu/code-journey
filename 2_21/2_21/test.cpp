#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
//1.���ö�Ӧ��ͷ�ļ�
#include<fstream>
#include<string>


void test01()
{
	//2.����������
	ofstream ost;
	//3.���ļ�
	ost.open("test01.txt",ios::out);
	//4.д����
	ost << "����" << endl;
	ost << "18��" << endl;
	//5.�ر��ļ�
	ost.close();

}

//int main()
//{
//	test01();
//	system("pause");
//}


//���ļ�


//���ַ���
//ֱ�������buf
//����getline
//����ȫ��getline
//����getchar

void test02()
{
	
	//2.����������
	ifstream ifs;

	//3.���ļ�
	ifs.open("test01.txt",ios::in);
	//��Ҫ�ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.���ļ�

	////case1--���ļ�����ֱ��д��buf[]��
	char buf[1024] = { 0 };
	int x = 0;
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	//case2--����fstream_getline��������ʽfstream.getline(char* str,streamsize_Count)
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}

	//case3--����ȫ��getline����
	string buf;

	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//case4--����getһ���ַ�һ���ַ���
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	char buf[1024] = { 0 };
	ifs >> buf;
	cout << buf;
	ifs >> buf;
	cout << buf;


	ifs.getline(buf, sizeof(buf));
	cout << buf;

	//5.�ر��ļ�
	ifs.close();
}

class Person
{
public:
	char name[64];
	int m_age;
};

	
void test03()
{
	//2.����������
	ofstream ofs;
	//3.���ļ�
	ofs.open("Person.txt", ios::out | ios::binary);//  |  λ�����������ʾͬʱ
  	//���߿��Խ�ϳ�һ����ofstream������и����캯�� ofstream ofs("Person.txt",) ios::out | ios::binary);

	Person a = { "����",18 };

	//4.д�ļ�
	ofs.write((const char*)&a, sizeof(Person));
	//5.�ر��ļ�
	ofs.close();
}

void test04()
{
	//2.����������
	ifstream ifs;
	
	//3.���ļ����ж��Ƿ�򿪳ɹ�
	ifs.open("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������ " << p.name << "\t����Ϊ�� " << p.m_age << endl;
	
	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	/*test02();*/
	//test03();
	test04();
}