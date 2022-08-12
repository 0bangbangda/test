#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		int b = a >> i;
//		if ((b & 1) == 1)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//打印整数的二进制的奇数位和偶数位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = 1;
//	printf("偶数位: ");
//	for (n = 1; n < 17; n++)
//	{
//		int i = 2 * n - 1;
//		int b = (a >> i) & 1;
//		
//		printf("%d ", b);
//	}
//	printf("\n");
//	printf("奇数位: ");
//	for (n = 1; n < 17; n++)
//	{
//		int i = 2 * (n - 1);
//		int b = (a >> i) & 1;
//		
//		printf("%d ", b);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = 1;
//	printf("偶数位: ");
//	for (n = 31; n >= 1;n-=2)
//	{
//		
//		int b = (a >> n) & 1;
//
//		printf("%d ", b);
//	}
//	printf("\n");
//	printf("奇数位: ");
//	for (n = 30; n >= 0;n-=2)
//	{
//		
//		int b = (a >> n) & 1;
//
//		printf("%d ", b);
//	}
//	printf("\n");
//	return 0;
//}
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}