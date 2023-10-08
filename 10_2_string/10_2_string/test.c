#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	char arr1[20] = "hello\0#####";
//		strcat(arr1, "world");
//
//	return 0;
//}


//int my_strcmp(char arr1[], char arr2[])
//{
//	assert(arr1 && arr2);
//	while (*arr1++ == *arr2++)
//	{
//		;
//	}
//
//	return *(arr1-1) - *(arr2-1);
//}
//
//
//
//int main()
//{
//	char arr1[] = "abcc";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//	return 0;
//
//}
//
//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[] = "ef";
//	strcat(arr1, "ef");
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1!=0)
//	{
//		char* p2 = str2;
//		while (*str1 != *str2)
//		{
//			str1++;
//		}
//		char* p = str1;
//		while (*p2)
//		{
//			if (*str1 == *p2)
//			{
//				str1++;
//				p2++;
//			}
//			else if (*str1 != *p2)
//			{
//				break;
//			}
//			if (*p2 == 0)
//			{
//				return p;
//			}
//		}
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[10] = "bcbcdbcds";
//	char arr2[] = "bcd";
//	char* pt = my_strstr(arr1, arr2);
//	printf("%s\n", pt);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "huzixi@edu.cn";
//	char* ret=strtok(arr1, "@.");
//	printf("%s\n", ret);
//	while (ret != 0)
//	{
//		ret = strtok(NULL, "@.");
//		if(ret!=0)
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//#include <errno.h>//必须包含的头文件
//int main()
//{
//		FILE * pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	return 0;
//}