#include<stdio.h>
//用函数递归求一个整数的各位之和
//int DigitSum(int a)
//{
//	if (a > 9)
//		return a % 10 + DigitSum(a / 10);
//	else
//		return a % 10;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = DigitSum(a);
//	printf("%d\n", ret);
//	return 0;
//}
//用函数递归求n的k次幂
//double Sum(int num,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k < 0)
//		return (1.0 / Sum(num, -k));
//	else
//		return num*Sum(num, k - 1);
//}
//int main()
//{
//	int num = 0;
//	int k = 0;
//	scanf("%d%d", &num,&k);
//	double ret = Sum(num,k);
//	printf("%lf\n", ret);
//	return 0;
//}
//函数递归求第n个斐波那契数
//int Fibo(int n)
//{
//	if (n > 2)
//		return Fibo(n - 1) + Fibo(n - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fibo(n);
//	printf("%d\n", ret);
//	return 0;
//}
//循环法求第n个斐波那契数
//int Fibo(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n > 2)
//	{
//		for (i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fibo(n);
//	printf("%d\n", ret);
//	return 0;
//}
//打印水仙花数
//int Sum(int num, int count)
//{
//	if (count >= 1)
//	{
//		return num*Sum(num, count - 1);
//	}
//	else
//		return 1;
//}
//int Pow(int num, int count)
//{
//	if (num > 9)
//	{
//		return Pow(num / 10, count) + Sum(num % 10, count);
//	}
//	else if (0 == num)
//		return 0;
//	else
//		return Sum(num % 10, count);
//}
//int Count(int num)
//{
//	int count = 1;
//	while ((num / 10) != 0)
//	{
//		count++;
//		num = num / 10;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	for (num = 0; num <= 100000; num++)
//	{
//		int count = Count(num);
//		int ret = Pow(num, count);
//		if (ret == num)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}
//打印菱形图案
