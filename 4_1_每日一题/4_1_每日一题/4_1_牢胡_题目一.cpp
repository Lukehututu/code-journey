#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>



//题目一
class solution1
{
public:
	string& replace_str(string& S, const string& a,const string& b){
		int pos = 0;
		while (pos != -1)
		{
			pos = S.find(a, 0);
			S.replace(pos, a.length(), b);
			pos = S.find(a,pos);
		}
		return S;
	}


};


//题目二
class solution2 {

public:
	bool issafe(string& password) {
		int cnt = 0;

		//密码在8~16之间
		if (password.length() <= 16 && password.length() >= 8)
			++cnt;
		
		//开头必须是大写
		if (isupper(password[0]))
			++cnt;
	
		//密码最少包含一个小写字母，一个数字，一个特殊符号
		int cn = 0, nn = 0, sc = 0;
		string ref = "~!@#$%*";
		string num_ref = "123456789";
		for (char c : password)
		{
			if (islower(c) && cn == 0)
				++cn;
			if (num_ref.find(c) != -1 && nn ==0)
				++nn;
			if (ref.find(c) != -1 && sc == 0)
				++sc;
		}
		if (cn + nn + sc == 3)
			++cnt;
		if (cnt == 3)
			return true;
		return false;
	}
};



int main() {

	//string S = "把你的心，我的心，串一串";
	//string a = "心";
	//string b = "鸡翅";
	//solution1 m;
	//m.replace_str(S, a, b);
	//cout << S;

	string a = "Aa!!!!";
	cout << solution2().issafe(a);

}