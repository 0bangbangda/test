#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a = 10;
	int b = 20;
	*(a < b ? &a : &b) = 100;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return EXIT_SUCCESS;
}