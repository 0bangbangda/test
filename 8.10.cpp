//#include<stdio.h>
//void Init(int arr[10], int sz)
//{
//	int i = 0;
//	for (i - 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	return 0;
//}
#include<stdio.h>
//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//ÄæÖÃº¯Êı
//void Reverse(int arr[10], int sz)
//{
//	int i = 0;
//	int j = 0;
//	double mid = (sz - 1) / 2.0;
//	for (i = 0, j = sz - 1; i<mid,j>mid; i++, j--)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int arr2[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; i < 10, j < 10; i++, j++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[j];
//		arr2[j] = tmp;
//	}
//	return 0;
//}
void Exchange(int* p1, int* p2, int sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		int tmp = *(p1 + i);
		*(p1 + i) = *(p2 + i);
		*(p2 + i) = tmp;
	}
}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int arr2[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Exchange(arr1, arr2, sz);
	return 0;
}