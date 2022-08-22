#include<stdio.h>
//void print(char arr[],int sz)
//{
//	int mid = sz / 2;
//	int j = 0;
//	for (j = 0; j <= sz / 2; j++)
//	{
//		arr[mid + j] = '*';
//		arr[mid - j] = '*';
//		printf("%s\n", arr);
//	}
//	for (j = 0; j < sz / 2; j++)
//	{
//		arr[mid + sz / 2 - j] = ' ';
//		arr[mid - sz / 2 + j] = ' ';
//		printf("%s\n", arr);
//	}
//	
//}
//int main()
//{
//	char arr[14] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0' };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	print(arr, sz);
//
//	return 0;
//}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char*e1, char*e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
void my_qsort(void* base, int sz, int width, int(*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
		}
	}
}
void test1()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
int main()
{
	test1();
	return 0;
}