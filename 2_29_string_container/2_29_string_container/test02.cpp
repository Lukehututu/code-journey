#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>
#include<algorithm>



//�ַ������Һ��滻

void testa()
{
	//����
	string str1 = "abcdefgde";
	int index = str1.find("de");
	if (index == EOF)
	{
		cout << "δ�ҵ��Ӵ�" << endl;
	}
	else
		cout << "�ҵ��ˣ�pos = " << index << endl;

	//rfind�Ǵ��������ң������ص�pos���Ǵ������ҵ�λ��
	cout << "rfine = " << str1.rfind("de") << endl;



}


void testb()
{
	//�滻
	string str2 = "abcdefg";
	str2.replace(1, 3, "1111");
	cout << "str2 = " << str2 << endl;
	str2.replace(1, 3, "1");
	cout << "str2 = " << str2 << endl;
}


void testc()
{
	string str3 = "hello";
	string str4 = "hello";
	if (str3.compare(str4) == 0)
	{
		cout << "str3 = str4" << endl;
	}
	else if(str3.compare(str4) > 0)
	{
		cout << "str3 > str4" << endl;
	}
	else if (str3.compare(str4) < 0)
	{
		cout << "str3 < str4" << endl;
	}
}

//string �ַ���ȡ����
void testd()
{
	string str = "hello";
	
	//���ַ��������ַ�
	//1.��[]�ķ�ʽ
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//2.��at()�ķ�ʽ����
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	//Ҳ�����������ַ�ʽ���޸��ַ�
	//1.
	str[0] = 'x';
	cout <<"str = "<< str << endl;

	//2.
	str.at(1) = 'x';
	cout << "str = " << str << endl;
}

//�ַ����Ĳ����ɾ��
void teste()
{
	//����
	string s = "hello";
	s.insert(1, "111");
	cout << "s = " << s << endl;

	//ɾ��
	s.erase(1, 3);
	cout << "s = " << s << endl;
}



//��ȡ�Ӵ�
void testf()
{
	string str = "abcdef";
	string retstr = str.substr(1, 3);
	cout << retstr << endl;
	

}

//��;֮һ--��ȡ�������û�����Ϣ
void get_ID()
{
	string email = "zhangsan@163.com";
	int pos = email.find('@');
	string ret = email.substr(0, pos);
	cout << ret << endl;
}

int main()
{
	//testa();
	//testb();
	//testc();
	//testd();
	//teste();
	//testf();
	get_ID();
}