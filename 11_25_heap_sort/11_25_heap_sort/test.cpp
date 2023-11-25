#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//堆排序 heap sort
void BuildMaxHeap(int a[], int length)
{
	int i = 0;
	for (i = length / 2; i > 0; i--)
		HeapAdjust(a, i, length);
}

void HeapAdjust(int a[], int k, int length)
{
	int i = 0;
	for (i = 2*k; i < length; i = 2*k)
	{
		a[0] = a[k];//先将此时的根节点的值保存起来
		if (i < length && a[i] < a[i + 1])
			i++;//来确保i始终指向的是较大的那个子结点
		if (a[i] > a[0])//如果较大的那个结点的值大于根节点就交换数据
		{
			a[k] = a[i];
			k = i;
			a[k] = a[0];
		}
		else
			break;//如果满足根大于左右就跳出
	}

}


void HeapSort(int a[], int len)
{
	BuildMaxHeap(a, len);//建立大根堆
	for (int i = len; i > 1; i--)//这里的i实际上指的是最后一个元素的下标
	{
		a[0] = a[1];//将堆顶元素保存
		a[1] = a[i];//因为a[0]是不放业务数据的因此实际上len的值是跟最后一个元素的下标一一对应的
		a[i - 1] = a[0];//交换头尾元素
		HeapAdjust(a, 1, i-1);//此时已经交换完了因此表长变为i-1
	}
}


//归并排序]

#define n 999
int* b = (int*)malloc(n * sizeof(int));
//创建一个全局变量，因为都是开辟一样大的空间只是用了不同的位置

void Merge(int a[], int low, int mid, int high)
//low指向左数组的第一位 mid指向左数组的最后一位 high指向右数组的最后一位
{
	int i, j, k;
	//先创建一个存储数组来暂存数据
	for (i = low; i <= high; i++)
		b[i] = a[i];//将数据先拷贝过去

	//再进行整合排序
	for (i = low, j = mid + 1, k = low; i <= mid && j <= high; k++)
	{
		if (b[i] >= b[j])
			a[k] = b[i++];
		else
			a[k] = b[j++];
	}

	//因为左右数组长度可能不一致，所以当一个处理完另一个不一定处理完了，因此要注意处理完左右数组的所有元素
	while (i <= mid)
		a[k++] = b[i++];
	while (j <= high)
		a[k++] = b[j++];
}

void MergeSort(int a[], int low,int high)
{
	//当low<high时才需要左右排序
	if (low < high)
	{
		int mid = (low + high) / 2;
		MergeSort(a, low, mid);//对左半部分进行排序
		MergeSort(a, mid+1, high);//对右半部分进行排序
		Merge(a, low, mid, high);//当左右都有序后开始归并
	}
}

//基数排序 Radix Sort
typedef struct
{
	int data;//可以是任意类型的数据
	LinkNode* next;//指针指向下一个数据
}LinkNode,*LinkList;

//定义数列中的元素（每个元素都是一个队列）
typedef struct
{
	LinkNode* front, * rear;//队头和队尾指针
}LinkQueue;

#define r 10
LinkQueue List[r];//创建队列数组