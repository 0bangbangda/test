#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit !!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码 >:");
//		scanf("%s", password);
//		system("cls");
//		if (strcmp(password, "123456") == 0)//==不能用于比较两个字符是否相等
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//			Sleep(1000);
//			system("cls");
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a > b&&a > c)
//	{
//		if (b > c)
//			printf("%d %d %d\n",a,b,c);
//		else
//			printf("%d %d %d\n",a,c,b);
//	}
//	else if (b > a&&b > c)
//	{
//		if (a > c)
//			printf("%d %d %d\n",b,a,c);
//		else
//			printf("%d %d %d\n",b,c,a);
//	}
//	else if (c > a&&c > b)
//	{
//		if (a > b)
//			printf("%d %d %d\n",c,a,b);
//		else
//			printf("%d %d %d\n",c,b,a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b);
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int a = i % 3;
//		if (0 == a)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	if (b > a)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	for (i = b; i >= 1; i--)
//	{
//		if (0 == a%i && 0 == b%i)
//		{
//			printf("最大公约数是：%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//
//求两个数的最大公约数，用辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000 && i >= 1000; i++)
//	{
//		if (0 == i % 4 && 0 != i % 100)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000 && i >= 1000; i++)
	{
		if ((0 == i % 4) && (0 != i % 100) || (0 == i % 400))
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("\ncount=%d\n", count);
	return 0;
}