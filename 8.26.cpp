#include<stdio.h>
#include<math.h>
//int main()
//{
//	//求水仙花数
//	
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//求位数
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//求每一位的n次方之和
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow((float)(tmp % 10), n);
//			tmp /= 10;
//		}
//		//判断
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 1; i <=line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 1; i <= line-1 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - i) - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}