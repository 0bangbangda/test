#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��û��Ȩ�޵ĵ�ַ�ռ���ж�д
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
	//�Ѿ��ͷŵ����ڴ治���ٽ��ж�д
	//�ͷŵ��Ժ���뼰ʱ��ָ��ÿռ��ָ����NULL��
	p = NULL;
	/*for (int i = 0; i < 10; i++)
		p[i] = i;
	for (int i = 0; i < 10; i++)
		printf("%d ", p[i]);*/
	//printf("\n");
	//�����ⲿ��ָ��ָ�����ڲ��ı�����ֲ�����
	func(&p);
	int a = 1, b = 2;
	func2(&a, &b);
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}
