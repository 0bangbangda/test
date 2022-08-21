#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//		
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr) / sizeof(*arr);
//	int i = 0;
//	BubbleSort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
#include<string.h>
#include<stdlib.h>
typedef struct stu
{
	 char name[20];
	 int age;
	 float score;

}stu;
//int cmp_str(const void* e1, const void* e2)
//{
//	return strcmp(((stu*)e1)->name, ((stu*)e2)->name);
//}
//void test1(stu s[], int sz)
//{
//
//	qsort(s, sz, sizeof(stu), cmp_str);
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return ((stu*)e1)->age - ((stu*)e2)->age;
//}
//void test2(stu s[], int sz)
//{
//	qsort(s, sz, sizeof(stu), cmp_int);
//}
int cmp_float(const void* e1, const void* e2)
{
	return (int)(((stu*)e1)->score - ((stu*)e2)->score);
}
void test3(stu s[],int sz)
{
	qsort(s, sz, sizeof(stu), cmp_float);
}
int main()
{
	stu s[3] = { { "zhangsan", 20, 90.0 }, { "lisi", 30, 85.5 }, { "wangwu", 40, 95.8 } };
	int sz = sizeof(s) / sizeof(s[0]);
	/*test1(s, sz);*/
	//test2(s, sz);
	test3(s, sz);
	return 0;
}