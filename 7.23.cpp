#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int c = 0;
//	for (i = 1, a = 1; i <= 10; i++, a = c)
//	{
//		c = a*i;
//		printf("%d\n", c);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int mid = (left + right) / 2;
	int k = 0;
	scanf("%d", &k);
	while (left<=right)
	{
		mid = (left+right)/2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else if (arr[mid] == k)
		{
			printf("找到了,下标是：%d\n",mid);
			break;
		}

		
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}