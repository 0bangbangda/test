#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main(void)
{
	char arr[100] = { 0 };
	FILE* fp = fopen("test.txt", "r");
	if (fp == NULL){
		printf("%s\n", strerror(errno));
		return EXIT_FAILURE;
	}
	/*fputc('b', fp);
	fputc('i', fp);
	fputc('t', fp);*/
	/*fputc('b', stdout);
	fputc('i', stdout);
	fputc('t', stdout);
	fputc('\n', stdout);*/
	/*printf("%c", fgetc(fp));
	printf("%c", fgetc(fp));*/
	/*int ch = fgetc(fp);
	printf("%c", ch);*/
	//fputs("hello world", fp);
	fgets(arr, 10, stdin);
	printf("%s\n", arr);
	fclose(fp);
	fp = NULL;
	return EXIT_SUCCESS;
}