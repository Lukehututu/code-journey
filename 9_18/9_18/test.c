#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��дһ����ӡ���������˷��ھ���ĺ���
//void print_table(int a)
//{
//	//˼· ���������Ϳ�������
//	int i = 1;
//	for (i = 1; i <= a; i++)
//	{
//		int c = 1;
//		for (c = 1; c <= i; c++)
//		{
//			printf("%2d*%2d=", i, c);
//			printf("%2d ",i*c);
//			//printf("%d*%d=%d", i, c, i * c);ǰ���������ֱ������д
//		}
//		printf("\n");
//
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}


//int main()
//{
//    int i, d;
//    int arr[] = { 2,5,5,11 };
//    int c = sizeof(arr) / sizeof(arr[0]);
//    int target = 10;
//    for (i = 0; i <= c - 2; i++)
//    {
//        int b = arr[i];
//        for (d = i + 1; d <= c; d++)
//        {
//            if (arr[i] + arr[d] == target)
//            {
//                printf("���������±�Ϊ��%d,%d", i, d);
//            }
//
//        }
//    }
//    return 0;
//}


//class Solution
//{
//public:
//    vector<int> twoSum(vector<int>& nums, int target)
//    {
//        int i, d;
//        int c = nums.size();
//        for (i = 0; i < c; i++)
//        {
//            for (d = i + 1; d <= c; d++)
//            {
//                if (nums[i] + nums[d] == target)
//                {
//                    return { i,d };
//                }
//            }
//        }
//        return {};
//    }
//};

//��һ���ַ�����������
//���� arr[]="abcdef"

//int my_strlen(char* str)
//{
//	int count=0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//	while (left < right)
//	{
//		char tmp = str[right];
//		str[right] = str[left];
//		str[left] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//


//дһ����������ӡ����������ÿһλ֮��

//int diginum(int a)
//{
//	
//	if (a / 10 != 0)
//	{
//		return a % 10 + diginum(a / 10);
//	}
//	else
//	{
//		return a;
//	}
//}
//
//
//int main()
//{
//	int num = 1729;
//	int sum = diginum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//��ά����

//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr + 1);
	return 0;
}