#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<string.h>

//char* str_cpy(char* dest, const char* src)
//{
//	assert(*src != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	str_cpy(arr1, arr2);
//	printf("%s\n", str_cpy(arr1, arr2));
//
//
//	return 0;
//}




//ģ��ʵ��strlen
// const    assert

//size_t�޷�������     int���з��ŵ�

//int my_strlen(const char* arry)//��������ΪMyStrlen  �������ʷֱ�����ĸ��д�����߾�������Сд����_������
//{
//	int count = 0;
//	//assert(*arry != NULL);
//	assert(arry != NULL);         //Ӧ���Ƕ���ָ�벻���ڿ�ָ�룬�����ǽ����ú�ġ�
//	//assert(arry);   //����дҲ���ԣ�arry����\0��Ϊ����Ҳ�ᱨ��
//	while (*arry++)
//	{
//		//arry++;
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcndesda";
//	/*my_strlen(arr);*/
//	printf("%d\n", strlen(arr));
//	return 0;
//}





//�����������������Ʋ�ͬλ�ĸ���
//int cau_dif(int x, int y)
//{
//	int count = 0;
//	int z = x ^ y;
//	while (z)
//	{
//		if (z % 2 == 1)
//		{
//			count++;
//		}
//		z=z >> 1;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	printf("%d", cau_dif(a, b));
//	return 0;
//}





//��ӡ���������Ƶ�����λ��ż��λ

//void print_odd(int x)
//{
//	printf("����λ���У�");
//	int arr[16] = {5};
//	int i = 0;
//	while (x)
//	{
//		if (x & 1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//		i++;
//		x = x >> 2;
//	}
//	for(i = 15; i >=0; i--)
//    {
//		if(arr[i]==1 ||arr[i]==0)
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void print_even(int y)
//{
//	y = y >> 1;
//	printf("ż��λ���У�");
//	int arr[15] = { 5 };
//	int i = 0;
//	while (y)
//	{
//		if (y&1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//		y = y >> 2;
//	}
//	for (i = 31; i >= 0; i--)
//	{
//		if (arr[i] == 1 || arr[i] == 0)
//			printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//
//	int a = 0;
//	printf("������һ��������");
//	scanf("%d", &a);
//	print_odd(a);
//	print_even(a);
//	return 0;
//}








//����һ����������λ�м���1

//int Numberof1(int x)
//{
//	int count = 0;
//	int i = 1;
//	while (x)
//	{
//		x = x & (x - 1);  //�ص� �·�������������������������������������������
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int a = 10;
//	printf("%d", Numberof1(a));
//	return 0;
//}


int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);



	return 0;
}