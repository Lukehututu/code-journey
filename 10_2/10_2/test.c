#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<string.h>
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�����Ƿ����
//

//int find_num (int arr[3][3], int* px, int* py,int k)
//{
//	while (*px < 3 && *py >=0)
//	{
//		if (arr[*px][*py] < k)
//		{
//			(*px)++;
//		}
//		else if (arr[*px][*py] > k)
//			(*py)--;
//		else if (arr[*px][*py] == k)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{   //O(1)ָ�Ҳ��ҵĴ����ǳ����Σ���n�޹ء�
//	///���ҵĸ�������������N�Σ�����ĸ���������n�ı�����
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	int x = 0;
//	int y = 2;
//	int k = 17;
//	int ret=find_num(arr, &x, &y,k);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±�Ϊ��%d��%d\n",x,y);
//	}
//	else if(ret==0)
//	{
//		printf("û�ҵ�");
//	}
//
//	return 0;
//}

//�ַ�������
//ʵ��һ�����������������ַ�����k���ַ�
//���磺
//ABCD����ת1���ַ��õ�BCDA
//ABCD����ת2���ַ��õ�CDAB

//void left_roll(char p[], int k,int right)
//{
//	int i = 0;
//	
//	for (int j = 0; j < k; j++)
//	{
//		char tmp = *p;
//		for (i =0; i < right; i++)
//		{
//			p[i] = p[i + 1];
//		}
//		p[right] = tmp;
//	}
//}
//
//
//
//
//int main()
//{
//	char p[]="ABCD";
//	int k = 3;
//	int sz = strlen(p)-1;
//	left_roll(p, k,sz);
//
//
//	return 0;
//}


//��������������ת�������巭ת�ķ�����������ұ߿������巴ת�ķ�����

//д��һ���ж�һ���ַ����Ƿ�����һ����֪���ַ�����ת�ĵõ��ĺ�����

//strcat(des,string)�ַ���׷�Ӻ���
//strncat(des,string,num)����ѡ��׷�Ӷ��ٸ�
//strstr(const str,const str)�ж�һ���ַ����Ƿ�����һ���ַ������Ӵ���������ҵ��ˣ��ͻ᷵���Ǹ����ַ���ָ�룬����ͷ��ؿ�ָ�룩

//������


//int is_string_rotate(char* str1, char* str2)
//{
//	if (strlen(str1) == strlen(str2))
//	{
//		strcat(str1, str2);
//		char* p = strstr(str1, str2);
//		return p != NULL;
//	}
//	else
//		return 0;
//}
//
//
//
//int main()
//{
//	char p1[20] = "AABCD";
//	char p2[] = "BCDA";
//	int ret=is_string_rotate(p1,p2);
//	if (ret == 1)
//	{
//		printf("ture\n");
//	}
//	else
//		printf("false\n");
//
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1122;
//
//
//	return 0;
//}




