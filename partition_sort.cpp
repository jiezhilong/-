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
////	if (lo == hi)//�ݹ鵽����㣬��ӡ��ε����н��,Ȼ�󷵻���һ�����ѭ�������������������ݹ�
////	{
////		for (int j = 0; j <=hi; j++)
////		{
////			printf("%d", arr[j]);
////		}
////		printf("\n");
////	}
////
////	//������������죬���Ǵ�ӡ����һ��
////	//Perm(arr��lo+1,hi);
////	/*for (int i = lo+1; i <= hi; i++)
////	{
////		swap(&arr[i], &arr[lo]);//lo�ǹ̶����Ǹ�λ�ã�����һ��λ�ý�����
////		Perm(arr, lo + 1, hi);
////		swap(&arr[i],&arr[lo]); //�ָ���ǰ�Ľ�������ֹ����˳��ı�
////	}*/
////	for (int i = lo; i <= hi; i++)
////	{
////		swap(&arr[i], &arr[lo]);//lo�ǹ̶����Ǹ�λ�ã�����һ��λ�ý�����
////		Perm(arr, lo + 1, hi);
////		swap(&arr[i],&arr[lo]); //�ָ���ǰ�Ľ�������ֹ����˳��ı�
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