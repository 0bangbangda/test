#include<stdio.h>
#include<stdlib.h>
int __stdcall Sub(int a, int b);
int main(void)
{
	int a = 1;
	int b = 2;
	printf("1-2=%d\n", Sub(1, 2));
	system("pause");
	return EXIT_SUCCESS;
}
int __stdcall Sub(int a, int b)
{
	return a - b;
}