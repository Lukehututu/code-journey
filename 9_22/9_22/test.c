#define _CRT_SECURE_NO_WARNINGS 1


//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;
//	return 0;
//}
struct b
{
	int d;
	int f;
};
struct stu
{
	struct b sb;
	int a;
	int c;
};


int main()
{

	struct stu hh { {1,2}, 1,2 };


	return 0;
}