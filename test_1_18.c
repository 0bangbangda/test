#include<stdio.h>
#include<stdlib.h>
//指针数组
int main(void){
	/*int a = 10, b = 20, c = 30;
	int* arr[] = { &a, &b, &c };
	int **parr = arr;
	printf("%d %d %d\n", *arr[0], *arr[1], *arr[2]);
	printf("%d %d %d\n",**(parr+0),**(parr+1),**(parr+2));
*/
	//指针数组和字符串结合
	/*char* str[] = { "abdcef", "12345", "abcdef12345" };
	printf("%s\t%s\t%s\n", str[0], str[1], str[2]);*/
	char *str1 = "abcdef";
	char *str2 = "12345";
	char *str3 = "abcdef12345";
	char* str[] = { str1, str2, str3 };
	printf("%s\t%s\t%s\n", str[0], str[1], str[2]);
	return EXIT_SUCCESS;
}