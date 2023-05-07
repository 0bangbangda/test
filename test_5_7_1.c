#include<stdio.h>
#include<stdlib.h>
//int main(void)
//{
//	int res;
//	for (int i = 1; i <= 100; i++)
//	{
//		res = sum(i);
//	}
//	printf("1+2+3+4+...+99+100 = %d\n", res);
//	system("pause");
//	return EXIT_SUCCESS;
//}
//int sum(int i)
//{
//	static int res = 0;
//	res += i;
//	return res;
//}
int main(void)
{
	register int i;
	double sign = 1.0;
	double ad, res = 0;
	for (i = 1; i <= 100000000; i++)
	{
		ad = sign / (2 * i - 1);
		res += ad;
		sign = -sign;
	}
	res *= 4;
	printf("pi = %lf\n", res);
	system("pause");
	return EXIT_SUCCESS;
}