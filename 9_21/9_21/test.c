#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算2进制上1的个数

//int find_one(int a)
//{
//	int count1 = 0;
//	while(a >0)
//	{
//		if ((a & 1) == 1)
//		{
//			count1++;
//			a=a >> 1;
//		}
//		else
//		a = a >> 1;
//	}
//	return count1;
//}
//
//
//
//int main()
//{
//	int c = 20;
//	int count=find_one(c);
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int b = 10;
//	printf("%d\n", sizeof(s=b-2));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;
//
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}



//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//	i = a++ || ++b || d++;
//	printf("%d %d %d %d", a, b, c, d);
//
//	return 0;
//}


//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	//2-3*4=-10
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}


//void Init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int right)
//{
//	int left = 0;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	/*Init(arr);*/
//	print(arr);
//	reverse(arr,right);
//	print(arr);
//	return 0;
//}



