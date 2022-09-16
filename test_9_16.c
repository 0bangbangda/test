#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct S1
{
	char a;
	int i;
	double d;
};
#pragma pack()
#include<stddef.h>
int main(void)
{
	struct S1 s = { 0 };
	printf("%d\n", offsetof(struct S1, a));
	printf("%d\n", offsetof(struct S1, i));
	printf("%d\n", offsetof(struct S1, d));
	return EXIT_SUCCESS;
}