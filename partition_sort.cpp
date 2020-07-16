//#include<stdio.h>
//
////void swap(int* a, int* b)
////{
////	int tmp = *a;
////	*a = *b;
////	*b = tmp;
////}
////
////void Perm(int arr[],int lo,int hi)
////{
////	if (lo == hi)//递归到最深层，打印这次的排列结果,然后返回上一层进行循环，继续交换，继续递归
////	{
////		for (int j = 0; j <=hi; j++)
////		{
////			printf("%d", arr[j]);
////		}
////		printf("\n");
////	}
////
////	//改良，运算更快，但是打印会慢一点
////	//Perm(arr，lo+1,hi);
////	/*for (int i = lo+1; i <= hi; i++)
////	{
////		swap(&arr[i], &arr[lo]);//lo是固定的那个位置，与下一个位置交换。
////		Perm(arr, lo + 1, hi);
////		swap(&arr[i],&arr[lo]); //恢复先前的交换，防止数列顺序改变
////	}*/
////	for (int i = lo; i <= hi; i++)
////	{
////		swap(&arr[i], &arr[lo]);//lo是固定的那个位置，与下一个位置交换。
////		Perm(arr, lo + 1, hi);
////		swap(&arr[i],&arr[lo]); //恢复先前的交换，防止数列顺序改变
////	}
////
////
////}
//
//
//int main()
//{
//	int x = 11;
//	const char* s = "hello,world";
//	int* p=&x;
//	printf("%d", sizeof(s));
//	return 0;
//}