#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>
#include<string.h>
int main(void)
{
	char arr[6];
	//scanf("%s", arr);
	char *arr2 = "abcdefgh";
	strcpy(arr, arr2);
	system("pause");
	return EXIT_SUCCESS;
}