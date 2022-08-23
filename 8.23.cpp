#include<stdio.h>
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
int main()
{
	/*p = (struct Test*)0x100000;
	printf("%p\n", (unsigned long)p + 0x2);*/
	/*int a = 0x100000;
	printf("%p\n", a);*/
	int a = 1;
	printf("%p\n", a);
	return 0;
}