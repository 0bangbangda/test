#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[8] - &arr[2]);
//	return 0;
//}
//利用指针运算的意义自定义求字符串长度的函数

//int my_strlen(char* str)//函数实现
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//		end++;
//	return end - start;
//}
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int*p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
int main()
{
	char a = '1';
	char b = '2';
    char c = '3';
	int i = 0;
	char *arr[] = { &a, &b, &c };
	//char** p = arr;
	for (i = 0; i < 3; i++)
	{
		printf("%c ", *(arr[i]));
	}
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}