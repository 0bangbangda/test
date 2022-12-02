#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	int line, n;
//	scanf("%d %d", &line, &n);
//	for (int i = 1; i <= line; i++){
//		for (int m = 0; m < n + line - i; m++)
//			printf(" ");
//		for (int j = 0; j < 2 * i - 1; j++)
//			printf("*");
//		for (int p = 0; p < n; p++)
//			printf(" ");
//		for (int q = 0; q < 2 * line - 2 * i + 1; q++)
//			printf("*");
//		printf("\n");
//	}
//	return EXIT_SUCCESS;
//}
#include<errno.h>
#include<string.h>
//int main(void){
//	char str[20];
//	printf("请输入字符串:");
//	fgets(str, 10, stdin);
//	printf("%s\n", str);
//	return EXIT_SUCCESS;
//}
int main(void){
	FILE* fp;
	//fp = fopen("D:\\Word文档:\\21022100011-彭华东.docx", "r");
	/*fp = fopen("Ifile.txt", "w+");
	fprintf(fp, "%s", "We are in 2020");
	printf("%p\n", fp);*/
	char arr[20];
	/*fgets(arr, 20, stdin);
	printf("%s\n", arr);*/
	fp = fopen("D:/TEMP/file.txt", "w+");
	printf("%p\n", fp);
	if (fp == NULL)
		printf("errno=%d,raison=%s", errno, strerror(errno));
	fprintf(fp, "%s", "abcdef ");
	//fclose(fp);
	fscanf(fp, "%[^ ]", arr);
	printf("%s\n",arr);
	return EXIT_SUCCESS;
}