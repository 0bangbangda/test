#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//int main(void){
//	char arr[81]; int count = 1;
//	scanf("%[^\n]", arr);//scanf中的%s遇到回车符，空格符均会停止读取，剩下的留在缓冲区。因此不能用%s输入带有空格的字符串
//	for (size_t i = 0; i < strlen(arr) - 1; i++){
//		if (isblank(arr[i]))
//			count++;
//	}
//	printf("%d", count);
//	return EXIT_SUCCESS;
//}
void PrintChar(char c);
void PrintLine();
int main(void){
	char a = 'X';
	char b = ' ';
	char c = 'O';
	PrintChar(a);
	printf("\n\n");
	PrintLine();
	printf("\n\n");
	PrintChar(b);
	printf("\n\n");
	PrintLine();
	printf("\n\n");
	PrintChar(c);
	return EXIT_SUCCESS;
}
void PrintChar(char c)
{
	for (int i = 0; i < 3; i++){
		printf(" %c ", c);
		if (i < 2)
			printf("|");
	}
}
void PrintLine()
{
	for (int i = 0; i < 3; i++){
		printf("---");
		if (i < 2)
			printf("+");
	}
}