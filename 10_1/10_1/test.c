#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
////strcmp�Ƚ��ַ����ĺ��� �ӵ�һ����ĸ��ǰ����Ƚϣ���һ��ascllֵ��ȾͱȽϵڶ���������
////�Ƚϳ���ʹ��strlen.
//
//int main()
//{
//
//	//void qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ    void*������޾�������ָ�루��Ϊ��֪������Ҫ�������ʲô���͵����ݣ�
//	//	       int num, //Ԫ�ظ���
//	//	       int size,//ÿһ��Ԫ�ش�С����ΪҪ�ҵ������Ԫ�أ����Ե�֪��һ���߶೤�����ҵ���һ��Ԫ��
//	//	       int (*fcmp)(const void*, const void*)  �ܹ��Ƚ�����element�Ĵ�С�ĺ���
//	//           );
//
//
//	int arr[10] = { 1,5,3,6,8,7,9,4,0,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int on = sizeof(arr[0]);
//	qsort(arr, sz,on, cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//�Խṹ���������

//void swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp =*(buf1+i);
//		*(buf1+i) = *(buf2+i);
//		*(buf2+i) = tmp;
//	}
//}
//
//
//void bubble_sort(void* base,
//	int size,
//	int width,
//	int (*cmp)(const void*, const void*))//��Ϊ��ֻ����Ƚϲ���Ҫ�ı�˭��ֵ�����Լ�һ��const ���Ӱ�ȫ��
//{
//	int i = 0;
//	for (i = 0; i < size-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < size - 1; j++)
//		{
//			if (cmp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
//			{
//				swap((char*)base + width * j, (char*)base + width * (j + 1),width);
//			}
//		}
//	}
//}
//
//int cmp(const void* e1, const void* e2)
//{
//
//	return  *(int*)e1 - *(int*)e2;
//
//}
//int main()
//{
//	int arr[] = { 1,5,6,7,9,8 };
//	int	sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp);
//	return 0;
//}
// 
// 
// 
// 
// 
// 
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));// 4/8  //�˴�Ϊarr+c����ʽ ��˴˴�arr��ʾ���ǵ�һ��Ԫ�صĵ�ַ ��0ʵ���ϻ���һ����ַ ����Ǽ���һ����ַ�Ĵ�С
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//  4/8
//	printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//  16�� ��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ����˻��� 4/8
//	printf("%d\n", sizeof(*&a));//  16  //&a ��������int(*p)[4]  ʵ�����Ǹ�һ������ָ�������->�ҵ�һ�����������16
//	printf("%d\n", sizeof(&a + 1));// 4/8  
//	printf("%d\n", sizeof(&a[0]));//  4/8
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));   //7�� �������û��\0�������ַ��������6����������
//	printf("%d\n", sizeof(arr + 0)); //4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr)); //4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	printf("\n");
//	printf("%d\n", strlen(arr));//6��  û��\0���������ֵ
//	printf("%d\n", strlen(arr + 0));//1��     ͬ��
//	printf("%d\n", strlen(*arr));//1  ��  ����strlenӦ����һ��ָ�루char*�������err
//	printf("%d\n", strlen(arr[1]));//1 ��  ͬ��
//	printf("%d\n", strlen(&arr));//8������ȡ����������ĵ�ַ ������strlen��ͱ�ת��Ϊchar*�� ��˽��䵱�������ַ��ĵ�ַ����˵õ��Ľ��Ҳ��һ�����ֵ
//	printf("%d\n", strlen(&arr + 1));//��  ���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//8 ���ֵ
//
//	char arr[] = "abcdef";//����һ��\0
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));// 4/8
//	printf("%d\n", sizeof(&p + 1));// 4/8
//	printf("%d\n", sizeof(&p[0] + 1));// 4/8
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));// 6 ��    //���ֵ ��Ϊ��p�ĵ�ַ ��p�ĵ�ַ������ʲô�������֪��
//	printf("%d\n", strlen(&p + 1));//   ���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5 
//
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4   
//	printf("%d\n", sizeof(a[0]));//16      a[0]�Ϳ������Ϊ��һ�е������� ��һ������arr
//	printf("%d\n", sizeof(a[0] + 1));// 4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//16��    //4 ��һ�еڶ���Ԫ�صĵ�ַ������ ����һ�����;���4
//	printf("%d\n", sizeof(a + 1));// 4   //a�˴���ʾ��Ԫ�صĵ�ַ��ʵ���Ͼ��ǵ�һ�еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));// 16  //          *��a+1��<=>a[1]   !!!!!!!
//	printf("%d\n", sizeof(&a[0] + 1));//4/8       &a[0]+1 <=> a+1   !!!!!
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//err �� //16  
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1); //err �� 0x100001  ʵ���Ͼ��Ǳ�Ϊ������Ȼ��+1  
//	printf("%p\n", (unsigned int*)p + 0x1); //0x100004
//	//��Ҫ����ָ��ļӷ��Ӷ���ȡ����ָ�������  
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//ʵ������һ�����ű��ʽ ���������ʼ��{{0��1}������}
//	int* p;//����ʵ��������ֻ��{1��3��5��0��0��0}
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char* *pa = a;
//	pa++;
//	printf("%s\n", *pa);  
//	return 0;
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//  ER
//	printf("%s\n", *cpp[-2] + 3);// ST
//	printf("%s\n", cpp[-1][-1] + 1);// EW
//	return 0;
//}