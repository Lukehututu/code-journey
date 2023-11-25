#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//������ heap sort
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
		a[0] = a[k];//�Ƚ���ʱ�ĸ��ڵ��ֵ��������
		if (i < length && a[i] < a[i + 1])
			i++;//��ȷ��iʼ��ָ����ǽϴ���Ǹ��ӽ��
		if (a[i] > a[0])//����ϴ���Ǹ�����ֵ���ڸ��ڵ�ͽ�������
		{
			a[k] = a[i];
			k = i;
			a[k] = a[0];
		}
		else
			break;//���������������Ҿ�����
	}

}


void HeapSort(int a[], int len)
{
	BuildMaxHeap(a, len);//���������
	for (int i = len; i > 1; i--)//�����iʵ����ָ�������һ��Ԫ�ص��±�
	{
		a[0] = a[1];//���Ѷ�Ԫ�ر���
		a[1] = a[i];//��Ϊa[0]�ǲ���ҵ�����ݵ����ʵ����len��ֵ�Ǹ����һ��Ԫ�ص��±�һһ��Ӧ��
		a[i - 1] = a[0];//����ͷβԪ��
		HeapAdjust(a, 1, i-1);//��ʱ�Ѿ�����������˱���Ϊi-1
	}
}


//�鲢����]

#define n 999
int* b = (int*)malloc(n * sizeof(int));
//����һ��ȫ�ֱ�������Ϊ���ǿ���һ����Ŀռ�ֻ�����˲�ͬ��λ��

void Merge(int a[], int low, int mid, int high)
//lowָ��������ĵ�һλ midָ������������һλ highָ������������һλ
{
	int i, j, k;
	//�ȴ���һ���洢�������ݴ�����
	for (i = low; i <= high; i++)
		b[i] = a[i];//�������ȿ�����ȥ

	//�ٽ�����������
	for (i = low, j = mid + 1, k = low; i <= mid && j <= high; k++)
	{
		if (b[i] >= b[j])
			a[k] = b[i++];
		else
			a[k] = b[j++];
	}

	//��Ϊ�������鳤�ȿ��ܲ�һ�£����Ե�һ����������һ����һ���������ˣ����Ҫע�⴦�����������������Ԫ��
	while (i <= mid)
		a[k++] = b[i++];
	while (j <= high)
		a[k++] = b[j++];
}

void MergeSort(int a[], int low,int high)
{
	//��low<highʱ����Ҫ��������
	if (low < high)
	{
		int mid = (low + high) / 2;
		MergeSort(a, low, mid);//����벿�ֽ�������
		MergeSort(a, mid+1, high);//���Ұ벿�ֽ�������
		Merge(a, low, mid, high);//�����Ҷ������ʼ�鲢
	}
}

//�������� Radix Sort
typedef struct
{
	int data;//�������������͵�����
	LinkNode* next;//ָ��ָ����һ������
}LinkNode,*LinkList;

//���������е�Ԫ�أ�ÿ��Ԫ�ض���һ�����У�
typedef struct
{
	LinkNode* front, * rear;//��ͷ�Ͷ�βָ��
}LinkQueue;

#define r 10
LinkQueue List[r];//������������