#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>



//��Ŀһ
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


//��Ŀ��
class solution2 {

public:
	bool issafe(string& password) {
		int cnt = 0;

		//������8~16֮��
		if (password.length() <= 16 && password.length() >= 8)
			++cnt;
		
		//��ͷ�����Ǵ�д
		if (isupper(password[0]))
			++cnt;
	
		//�������ٰ���һ��Сд��ĸ��һ�����֣�һ���������
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

	//string S = "������ģ��ҵ��ģ���һ��";
	//string a = "��";
	//string b = "����";
	//solution1 m;
	//m.replace_str(S, a, b);
	//cout << S;

	string a = "Aa!!!!";
	cout << solution2().issafe(a);

}