#include<stdio.h>
//int main()
//{
//	/*char arr[] = "abcdef";
//	char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	printf("%s\n", arr);*/
//	/*char* p = "abcdef";
//	*(p+1) = 'w';
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;*/
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;
//	return 0;
//}
//void print1(int arr[5], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void print2(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	print1(arr1, 5);
//	print2(arr1, 5);
//	return 0;
//}
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			/*printf("%d ", *(*(p + i) + j));*/
			/*printf("%d ", (*(p + i))[j]);*/
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}