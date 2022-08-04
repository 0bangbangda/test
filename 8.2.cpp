#include<stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 1; i < sz - 1; i++)
//	{
//		for (j = 0;j<sz; j++)
//		{
//			if (a[j] == a[i]&&j!=i)
//				break;
//		}
//		if (j == sz)
//			printf("%d\n", a[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (1 == count)
//			printf("单身狗:%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("单身狗是：%d\n", ret);
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在一分钟后关机，如果输入：我是猪，则取消关机\n");
	scanf("%s", &input);
	if (0 == strcmp(input, "我是猪"))
		system("shutdown -a");
	else
		goto again;
	return 0;
}