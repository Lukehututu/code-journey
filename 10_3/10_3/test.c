#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<errno.h>
#include<ctype.h>
//int main()
//{
//	/*char arr[] = "huzixi.edu";
//	strtok(arr, "\0");
//	printf("%s\n", arr);*/
//
//
//
//	char arr1[5] = "abd";
//	char arr2[] = "sdbau";
//	strncat(arr1, arr2, 3);
//
//	return 0;
//}

//�ڴ溯��
//int main()
//{
//	FILE* pf=fopen("test.txt", "r");//�᷵��һ��FILE*�ε�ָ��
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//	
//	}	
//	perror("1");
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//
//	char c = '$';
//	int ret = isalnum(c);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int arr1[20] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//
//
//	return 0;
//}

void* my_memcpy(void* dest,const void* sour, size_t num)
{
	void* ret = dest;
	if (dest < sour) {
		while (num--)
		{
			*(char*)dest = *(char*)sour;
			dest = (char*)dest + 1;
			sour = (char*)sour + 1;
			/*	*((char*)dest)++ = *((char*)sour)++;*/
				//��ǰ��󿽱����ǴӺ���ǰ
		}
	}
	else
	{
	
		while (num--)
		{
			*((char*)dest+num) = *((char*)sour+num);
		}
	}

	return ret;
}


//int main()
//{
//   int  arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*char arr1[] = "abcdefghijlmno";*/
//   int  arr2[20] = { 0 };
// /*  my_memcpy(arr1+2, arr1, 5);*/
//   memmove(arr1 + 3,arr1, 20);
//   for (int i = 0; i < 5; i++)
//   {
//	   printf("%d ", arr1[i]);
//   }
//	return 0;
//}
//
//


//int main()
//{
//	int  arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int  arr2[20] = { 0 };
//	memcpy(arr1 + 2, arr1, 20);
//
//	return 0;
//}


//memcmp

//memset
int main()
{
	int arr[20] = { 0 };
	memset(arr, 1, 20);

	return 0;
}