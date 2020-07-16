#include<stdio.h>

//��С��������
//����˼·:ѡ��һ����׼ֵ�����Ȼ�׼ֵ��ķ��ڻ�׼ֵ�ұߣ�С�ķ��ڻ�׼ֵ��ߡ�
void quick_sort(int arr[],int left,int right)
{
	int i = left, j = right, base = arr[left];
	if (i >= j)
		return;
	while (i<j)
	{
		while (base <= arr[j] && i < j)//�ȵ��ҵ��Ȼ�׼ֵС�Ľ���
			j--;
		while (base >= arr[i] && i < j) //�ȵ��Ȼ�׼ֵ��Ľ���
			i++;
		if (i < j) //����������С���ұ���������������λ�õ�ֵ
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	arr[left] = arr[i];//����󽻻�����ֵ���ڿ�ͷ
	arr[i] = base;//����׼ֵ������󽻻�����λ���ϣ����λ����߱Ȼ�׼ֵС���ұ߱Ȼ�׼ֵ��
	quick_sort(arr, left, i - 1);//�ֱ�Ի�׼ֵ��ߺ��ұ߽��еݹ�����
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