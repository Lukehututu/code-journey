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

//折半插入排序
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
			//此时low>high
			//要将low-i-1的位置全部后移
			for (int j = i - 1; j >= low; j--)
				A[j + 1] = A[j];
			A[low] = tmp;
		}
	}
}


//希尔排序 Shell Sort
void ShellSort(int a[], int n)
{
	int i = 1, j;
	int d;//增量d
	//
	for (d = 4; d >= 1; d /= 2)
	{
		for (i = 1; i < n+1-d; i++)
		{
			if (a[i + d] < a[i])//如果后面的数比前面的小就调换位置
			{
				a[0] = a[i + d];
				for (j = i; j > 0 && a[j] > a[0]; j -= d)
						a[j + d] = a[j];//只要这个数比a[i+d]大，就往后挪一位
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


//冒泡排序 Bubble Sort

void BubbleSort(int a[], int n)
{
	bool tag;
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1 ; i++)//每一趟让一个元素到他该去的位置但当n-1个元素都来到了正确的位置，那最后一个元素也应该有序了因此是i<n-1
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

//计算枢轴的位置
int partition(int a[],int low,int high)
{
	int pivot = a[low];//将第一个元素视为枢轴
	while (low < high)
	{
		while (a[high] >= pivot)
			high--;
		a[low] = a[high];
		while (low < high && a[low] <= pivot) //此时要同时满足左小于右因为high--后有可能使得左右相等
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
		int pivotpos =partition(a,low,high);//得到一个新的枢轴的位置
		QuickSort(a, low, pivotpos - 1); //划分左子表
		QuickSort(a, pivotpos + 1, high); //划分右子表
	}

}


void selectsort(int a[], int n)
{
//每次都将最小的放在最前面
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


