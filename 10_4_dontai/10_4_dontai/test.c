#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//int main()
//{
//	int arr[10] = { 0 };//在栈区上开辟的
//	//动态开辟空间
//	int* p = (int*)malloc(10 * sizeof(int));//在堆区上申请的
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	
//	//回收空间
//	free(p);
//	p = NULL;//手动把p置为NULL
//	
//	return 0;
//}

//int main()
//{
//
//	int* p = (int*)calloc(10,  sizeof(int));
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//
//	int* p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	int* ptr = (int*)realloc(p , 2000*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	return 0;
//}



//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//int main()
//{
//	Test();
//	
//	return 0;
//}

//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);//堆空间
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");//为什么它后面的空间还能用？？
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//#define INT_PTR int*
//INT_PTR c, d;
//typedef int* int_ptr;
//int_ptr a, b;



//打印图案
//多组输入，一个整数（2-20），表示输入的行数，也表示组成x的
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    { 
//        char arr[20][20] = { 0 };
//        for (int i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a; j++)
//            {
//                arr[i][j] = ' ';
//            }
//        }
//        for (int i = 0; i < a; i++)
//        {
//            arr[i][i] = '*';
//            arr[i][a -1- i] = '*';
//        }
//        for (int i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a; j++)
//            {
//                printf("%c", arr[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main() {
//    int a,b,c,d,e,f,g;
//    while (scanf("%d %d %d %d %d %d %d", &a, &b ,&c, &d, &e, &f, &g ) != EOF)
//    {
//        int max = a;
//        int arr[7] = { 0 };
//        arr[0] = a;
//        arr[1] = b;
//        arr[2] = c;
//        arr[3] = d;
//        arr[4] = e;
//        arr[5] = f;
//        arr[6] = g;
//        for (int i = 0; i < 7; i++)
//        {
//            if (arr[i] > max)
//            {
//                int tmp = max;
//                max = arr[i];
//                arr[i] = tmp;
//            }
//        }
//        
//        max=arr[0];
//
//        arr[0] = a;
//        arr[1] = b;
//        arr[2] = c;
//        arr[3] = d;
//        arr[4] = e;
//        arr[5] = f;
//        arr[6] = g;
//        int min = a;
//        for (int i = 0; i < 7; i++)
//        {
//            if (arr[i] > min)
//            {
//                int tmp = min;
//                min = arr[i];
//                arr[i] = tmp;
//            }
//        }
//        min = arr[0];
//        printf("%d", (a + b + c + d + e + f + g - max - min) / 5);
//    }
//    return 0;
//}

int main() {
    int score = 0;
    int sum = 0;
    int i = 0;
    int max = 0;
    int min = 100;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &score);
        sum += score;
        if (max < score)
        {
            max = score;
        }
        if (min > score)
        {
            min = score;
        }
    }
    float ret = (sum - max - min) / 5.0;
    printf("%.3f", ret);
    return 0;
}