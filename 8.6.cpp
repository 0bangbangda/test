#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i);
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* pa = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(pa+i));
		*(pa + i) = 1;
		printf("%d ", *(pa+i));
	}
	
	/*int* pa = &a;
	*pa = 0;*/
	/*char* pc = &a;
	*pc = 0;*/
	/*int* pa = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);*/
	return 0;
}