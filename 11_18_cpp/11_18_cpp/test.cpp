#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//�̳�
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע�ᡭ��" << endl;
	}

	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
	}


};

class Java:public BasePage
{
public:

	void content()
	{
		cout << "Javaѧϰ·�ߡ���" << endl;
	}

};


class Python:public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧϰ·�ߡ���" << endl;
	}
};

void test()
{
	Java jv;
	Python py;
	jv.header();
	jv.footer();
	jv.content();
	cout << "***********************************" << endl;
	py.header();
	py.footer();
	py.content();

}

int main()
{
	test();
	system("pause");
}