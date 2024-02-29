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
		int cnt = 0;//计算多少个视频
		cout << "请输入时间" << endl;
		double sumdec = 0;//分钟和
		int sumsec = 0;//秒和
		string input;//每个视频的时间
		for (int i = 1; input != "ok"; i++)
		{
			cout << "第" << i << "个视频的时常:" << endl;
			cin >> input;
			int pos = input.find('.');

			//十进制部分
			string retdec = input.substr(0, pos);
			stringstream geek1(retdec);
			int dec = 0;
			geek1 >> dec;
			sumdec += dec;
			
			//60进制部分
			string retsec = input.substr(pos + 1, input.size() - pos - 1);
			stringstream geek2(retsec);
			int sec = 0;
			geek2 >> sec;
			sumsec += sec;

		}
		int sumtime = sumdec + sumsec / 60;
		cout << "观看总时间为：" <<sumtime/60 <<"小时" << sumtime % 60 << "分" << sumsec % 60 << "秒" << endl;
	}
};