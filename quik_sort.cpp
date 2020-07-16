#include<stdio.h>

//从小到大排序
//快排思路:选定一个基准值，将比基准值大的放在基准值右边，小的放在基准值左边。
void quick_sort(int arr[],int left,int right)
{
	int i = left, j = right, base = arr[left];
	if (i >= j)
		return;
	while (i<j)
	{
		while (base <= arr[j] && i < j)//等到找到比基准值小的结束
			j--;
		while (base >= arr[i] && i < j) //等到比基准值大的结束
			i++;
		if (i < j) //如果左边索引小于右边索引，交换两个位置的值
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	arr[left] = arr[i];//将最后交换过的值放在开头
	arr[i] = base;//将基准值放在最后交换过的位置上，这个位置左边比基准值小，右边比基准值大
	quick_sort(arr, left, i - 1);//分别对基准值左边和右边进行递归排序。
	quick_sort(arr, i + 1, right);
}

int main()
{
	int arr[] = { 1 ,5,9,5,6,7 };
	quick_sort(arr, 0, 5);
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}