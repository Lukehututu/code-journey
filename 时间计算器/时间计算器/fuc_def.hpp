#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<sstream>
#include<string>
#include<algorithm>
#include<iostream>



class TimeCau
{
public:
	void caculate()
	{
		int cnt = 0;//������ٸ���Ƶ
		cout << "������ʱ��" << endl;
		double sumdec = 0;//���Ӻ�
		int sumsec = 0;//���
		string input;//ÿ����Ƶ��ʱ��
		for (int i = 1; input != "ok"; i++)
		{
			cout << "��" << i << "����Ƶ��ʱ��:" << endl;
			cin >> input;
			int pos = input.find('.');

			//ʮ���Ʋ���
			string retdec = input.substr(0, pos);
			stringstream geek1(retdec);
			int dec = 0;
			geek1 >> dec;
			sumdec += dec;
			
			//60���Ʋ���
			string retsec = input.substr(pos + 1, input.size() - pos - 1);
			stringstream geek2(retsec);
			int sec = 0;
			geek2 >> sec;
			sumsec += sec;

		}
		int sumtime = sumdec + sumsec / 60;
		cout << "�ۿ���ʱ��Ϊ��" <<sumtime/60 <<"Сʱ" << sumtime % 60 << "��" << sumsec % 60 << "��" << endl;
	}
};