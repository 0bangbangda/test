#include<stdio.h>
#include<math.h>
//int main()
//{
//	//��ˮ�ɻ���
//	
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//��λ��
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//��ÿһλ��n�η�֮��
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow((float)(tmp % 10), n);
//			tmp /= 10;
//		}
//		//�ж�
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
//	//��ӡ�ϰ벿��
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
//	//��ӡ�°벿��
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