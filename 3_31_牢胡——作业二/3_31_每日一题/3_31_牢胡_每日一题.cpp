#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


class Soultion
{
public:

	void reverseSpelling(string& str)
	{
		for (char& c : str)
		{
			if (islower(c))
				c = toupper(c);
			else if(isupper(c))
				c = tolower(c);
		}
		cout << str;
	}
};

	int  main()
	{
		string str = "hELLO wORLD!";
		cout << str<<endl;

		Soultion S;
		S.reverseSpelling(str);

	}
