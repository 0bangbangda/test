#include<stdio.h>
int count = 0;
void Add()
{
	count++;
}
int main()
{
	Add();
	Add();
	Add();
	printf("count = %d\n", count);
	return 0;
}