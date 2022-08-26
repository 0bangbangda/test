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
//汽水的属性
//单价  换一瓶汽水所需的空瓶数
//struct water
//{
//	int price;
//	int blank;
//};
//int main()
//{
//	//喝汽水问题
//	struct water s = { 1, 2 };
//	int money = 0; 
//	scanf("%d", &money);
//	int num = money/(s.price);
//	int empty = num;
//	while (empty / 2)
//	{
//		num += empty / (s.blank);
//		empty = empty / (s.blank) + empty % (s.blank);
//	}
//	printf("%d\n", num);
//	return 0;
//
//}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//趟数
	int i = 0;
	for (i = 0; i < sz/2+1; i++)
	{
		//判断奇偶
		int j = 0; 
		int flag = 1;
		for (j = 0; j < sz - 1; j++)
		{
			
			if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 1)
				//交换位置
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			
		}
		if (flag == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}