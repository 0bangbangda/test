#include<stdio.h>
#include<string.h>
int main()
{
	unsigned int len = strlen("abc") - strlen("abcdef");
	printf("%u\n", len);
	return 0;
}