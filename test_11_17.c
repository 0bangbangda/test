#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//int main(void){
//	char arr[81]; int count = 1;
//	scanf("%[^\n]", arr);//scanf�е�%s�����س������ո������ֹͣ��ȡ��ʣ�µ����ڻ���������˲�����%s������пո���ַ���
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