#include<stdio.h>
//void print(int x)
//{
//	if (x > 9)
//		print(x/10);
//	printf("%d ", x%10);
//}
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}
#include<string.h>
//int my_strlen(char* p)
//{
//	if (*p!='\0')
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] ="abc";
//	printf("%d\n", my_strlen(arr));
//}
//int Fac1(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return n*Fac1(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	if (n > 2)
	{
		for (i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Fib(n));
	return 0;
}