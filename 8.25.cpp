#include<stdio.h>
#include<math.h>
//float get_max(int a, int n)
//{
//	if (n >= 0)
//		return a*pow((float)10, n) + get_max(a, n - 1);
//	else
//		return 0;
//}
//int Sum(int max)
//{
//	if (max > 0)
//		return max + Sum(max / 10);
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int max = (int)get_max(a, n-1);
//	int ret = Sum(max);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}
int Num(int i,int count)
{
	if (i > 9)
	{
		count++;
	    Num(i / 10,count);
	}
	return count;
}
float Sum(int i, int count)
{
	if (i > 9)
		return Sum(i / 10, count) + pow((float)(i % 10), count);
	else
		return pow((float)i, count);
}
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		int count = 1;
		count = Num(i,count);
		int sum = (int)Sum(i, count);
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}