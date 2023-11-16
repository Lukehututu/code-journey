#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//折半查找 k是待查数据
int Binary_search(int arr[], int k,int len)
{
	int left = 0;
	int right = len - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (k == arr[mid])
			return mid;
		else if (k < arr[mid])
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else //当被查树大于中间值的时候，更新左边界
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
	}
	if (left > right)
		return -1;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int k = 10;
	int ret = Binary_search(arr, k, len);
	if (ret == -1)
		cout << "没找到" << endl;
	else
		cout << "找到了，下标为：" << ret << endl;
}