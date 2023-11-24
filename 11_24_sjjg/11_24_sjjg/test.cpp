#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


void InsertSort(int A[], int n)
{
	int i=0, j=0, tmp=0;
	for (i = 0; i < n; i++)
	{
		if (A[i] < A[i - 1])
			tmp = A[i];
		for (j = i - 1; j >= 0 && A[j] > tmp; j--)
			A[j+1] = A[j];
		A[j+1] = tmp;
	}

}

//�۰��������
void BinaryInsertSort(int A[], int n)
{
	int i = 0,tmp = 0;
	int low = 0, high = 0 , mid = 0;
	for (i = 1; i < n; i++)
	{
		if (A[i] < A[i - 1])
		{
			tmp = A[i];
			low = 1;
			high = i - 1;
			while (!(low > high))
			{
				mid = (low + high) / 2;
				if (A[i] > A[mid])
					low = mid + 1;
				else
					high = mid - 1;
			}
			//��ʱlow>high
			//Ҫ��low-i-1��λ��ȫ������
			for (int j = i - 1; j >= low; j--)
				A[j + 1] = A[j];
			A[low] = tmp;
		}
	}
}


//ϣ������ Shell Sort
void ShellSort(int a[], int n)
{
	int i = 1, j;
	int d;//����d
	//
	for (d = 4; d >= 1; d /= 2)
	{
		for (i = 1; i < n+1-d; i++)
		{
			if (a[i + d] < a[i])//������������ǰ���С�͵���λ��
			{
				a[0] = a[i + d];
				for (j = i; j > 0 && a[j] > a[0]; j -= d)
						a[j + d] = a[j];//ֻҪ�������a[i+d]�󣬾�����Ųһλ
				a[j + d] = a[0];
			}
		}
	}
}

void BubbleSort(int a[], int n);

int main()
{
	int a[] = { 0,8,7,6,5,4,1,2,3 };
	//ShellSort(a, 8);
	BubbleSort(a, 9);
	for (int i = 1; i < 9; i++)
	{
		cout << a[i] << ",";
	}

}


//ð������ Bubble Sort

void BubbleSort(int a[], int n)
{
	bool tag;
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1 ; i++)//ÿһ����һ��Ԫ�ص�����ȥ��λ�õ���n-1��Ԫ�ض���������ȷ��λ�ã������һ��Ԫ��ҲӦ�������������i<n-1
	{
		tag = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j + 1] < a[j])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				tag = true;
			}
		}
		if (tag == false)
			break;
	}
}

//���������λ��
int partition(int a[],int low,int high)
{
	int pivot = a[low];//����һ��Ԫ����Ϊ����
	while (low < high)
	{
		while (a[high] >= pivot)
			high--;
		a[low] = a[high];
		while (low < high && a[low] <= pivot) //��ʱҪͬʱ������С������Ϊhigh--���п���ʹ���������
			low++;
		a[high] = a[low];
	}
	a[low] = pivot;
	return low;
}



void QuickSort(int a[], int low, int high)
{
	if (low < high)
	{
		int pivotpos =partition(a,low,high);//�õ�һ���µ������λ��
		QuickSort(a, low, pivotpos - 1); //�������ӱ�
		QuickSort(a, pivotpos + 1, high); //�������ӱ�
	}

}


void selectsort(int a[], int n)
{
//ÿ�ζ�����С�ķ�����ǰ��
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		int min = i;
		for (j = i; j < n; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		if (min != i)
		{
			int tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
}


