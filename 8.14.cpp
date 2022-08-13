#include<stdio.h>
#include<math.h>
//打印100-200之间的素数
//int Judge(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt((double)i); j++)
//	{
//		if (0 == i%j)
//			return 0;
//	}
//	if (j > sqrt(double(i)))
//		return 1;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = Judge(i);
//		if (1 == ret)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//打印指定大小的乘法口诀表
//void multiply_print(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%-2d*%-2d=%-3d ", i, j, i*j);
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	
//	scanf("%d", &a);
//	multiply_print(a);
//	return 0;
//}
//打印整数的每一位
//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//	
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//非函数递归法求阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d!= %d\n", n, sum);
//	return 0;
//}
//函数递归法求阶乘
int Fun(int n)
{
	if (1 == n)
		return 1;
	else
		return n*Fun(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fun(n);
	printf("%d! = %d\n", n, ret);
	return 0;
}