#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//对没有权限的地址空间进行读写
void func(int **p)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	*p = arr;
}
void func2(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(void)
{
	/*char *str=0X1000;
	gets(str);
	puts(str);*/
	int *p = (int*)malloc(10 * sizeof(int));
	for (int i = 0; i < 10; i++)
		p[i] = i;
	free(p);
	//已经释放掉的内存不能再进行读写
	//释放掉以后必须及时将指向该空间的指针置NULL、
	p = NULL;
	/*for (int i = 0; i < 10; i++)
		p[i] = i;
	for (int i = 0; i < 10; i++)
		printf("%d ", p[i]);*/
	//printf("\n");
	//函数外部的指针指向函数内部的变量或局部数组
	func(&p);
	int a = 1, b = 2;
	func2(&a, &b);
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}
