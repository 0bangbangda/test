#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt((float)i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt((float)i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double a = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum =sum1 - sum2;
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			a = 1 / (double)i;
//			sum1 = sum1 + a;
//		}
//		else
//		{
//			a = 1 / (double)i;
//			sum2 = sum2 + a;
//		}
//
//		sum = sum1 - sum2;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {12,23,7,43,46,23,15,68,32,14 };
//	int max = 0;
//	if (arr[0] > arr[1])
//	{
//		max = arr[0];
//	}
//	else
//		max = arr[1];
//	for (i = 2; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int tmp = i*j;
//			printf("%d*%d = %-2d ", i, j, tmp);//%2d��ʾ�����λ����������λ�������ÿո���棩��Ŀ�����Ҷ��롣%-2dĿ��������롣
//		}
//		printf("\n");
//	}
//	return 0;
////}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 0;
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid]<k)
		{
			left = mid + 1;
		}
		else if (arr[mid]=k)
		{
			printf("�±꣺%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
