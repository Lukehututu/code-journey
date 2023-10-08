#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



union Un
{
	int i;
	char c;
};
//
//
//
//int main()
//{
//	union Un sb = {10};
//	printf("%d\n", sizeof(sb));
//	printf("%p\n", &sb);
//	printf("%p\n", &sb.c);
//	printf("%p\n", &sb.i);
//
//
//	return 0;
//}

int main()
{
	union Un s ={1};
	char* p = (char*)&s;
	printf("%d\n", *(p+1));
	return 0;
}