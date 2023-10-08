#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
////strcmp比较字符串的函数 从第一个字母从前往后比较，第一个ascll值相等就比较第二个……。
////比较长度使用strlen.
//
//int main()
//{
//
//	//void qsort(void* base,//base中存放的是待排序数据中第一个对象的地址    void*这个是无具体类型指针（因为不知道具体要排序的是什么类型的数据）
//	//	       int num, //元素个数
//	//	       int size,//每一个元素大小，因为要找到后面的元素，所以得知道一步走多长才能找到下一个元素
//	//	       int (*fcmp)(const void*, const void*)  能够比较两种element的大小的函数
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


//对结构体进行排序

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
//	int (*cmp)(const void*, const void*))//因为我只是想比较不需要改变谁的值，所以加一个const 更加安全。
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
//	printf("%d\n", sizeof(a + 0));// 4/8  //此处为arr+c的形式 因此此处arr表示的是第一个元素的地址 加0实际上还是一个地址 因此是计算一个地址的大小
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//  4/8
//	printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//  16× 虽然是数组的地址但是也是地址，因此还是 4/8
//	printf("%d\n", sizeof(*&a));//  16  //&a 的类型是int(*p)[4]  实际上是给一个数组指针解引用->找到一个数组因此是16
//	printf("%d\n", sizeof(&a + 1));// 4/8  
//	printf("%d\n", sizeof(&a[0]));//  4/8
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));   //7× 这个里面没有\0，不是字符串因此是6！！！！！
//	printf("%d\n", sizeof(arr + 0)); //4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr)); //4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	printf("\n");
//	printf("%d\n", strlen(arr));//6×  没有\0所以是随机值
//	printf("%d\n", strlen(arr + 0));//1×     同上
//	printf("%d\n", strlen(*arr));//1  ×  传给strlen应当是一个指针（char*）因此是err
//	printf("%d\n", strlen(arr[1]));//1 ×  同上
//	printf("%d\n", strlen(&arr));//8？本来取出的是数组的地址 但传进strlen后就被转化为char*了 因此将其当成了首字符的地址，因此得到的结果也是一个随机值
//	printf("%d\n", strlen(&arr + 1));//？  随机值
//	printf("%d\n", strlen(&arr[0] + 1));//8 随机值
//
//	char arr[] = "abcdef";//多了一个\0
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
//	printf("%d\n", strlen(&arr + 1));//随机值
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
//	printf("%d\n", strlen(&p));// 6 ×    //随机值 因为是p的地址 但p的地址往后数什么情况都不知道
//	printf("%d\n", strlen(&p + 1));//   随机值
//	printf("%d\n", strlen(&p[0] + 1));//5 
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4   
//	printf("%d\n", sizeof(a[0]));//16      a[0]就可以理解为第一行的数组名 整一个看作arr
//	printf("%d\n", sizeof(a[0] + 1));// 4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//16×    //4 第一行第二个元素的地址解引用 就是一个整型就是4
//	printf("%d\n", sizeof(a + 1));// 4   //a此处表示首元素的地址，实际上就是第一行的地址
//	printf("%d\n", sizeof(*(a + 1)));// 16  //          *（a+1）<=>a[1]   !!!!!!!
//	printf("%d\n", sizeof(&a[0] + 1));//4/8       &a[0]+1 <=> a+1   !!!!!
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//err × //16  
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1); //err × 0x100001  实际上就是变为数字了然后+1  
//	printf("%p\n", (unsigned int*)p + 0x1); //0x100004
//	//主要考察指针的加法加多少取决于指针的类型  
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
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//实际上是一个逗号表达式 正常数组初始是{{0，1}，……}
//	int* p;//所以实际上里面只有{1，3，5，0，0，0}
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