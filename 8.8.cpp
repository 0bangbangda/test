#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//由小到大的冒泡排序
int main()
{
	int arr[] = { 1, 3, 25, 6, 7, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
			break;
	}
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}