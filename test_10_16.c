//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
//һ���ַ�, ���Ȳ�����200
//ͳ��ֵ
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void){
	char arr[200];
	int alpha = 0, digit = 0, blank = 0, other = 0;
	gets_s(arr, 200);
	for (int i = 0; i < 200; i++){
		if (arr[i] == '\0')
			break;
		if (isalpha(arr[i]))
			alpha++;
		else if (isdigit(arr[i]))
			digit++;
		else if (isblank(arr[i]))
			blank++;
		else
			other++;
	}
	printf("%d %d %d %d", alpha, digit, blank, other);
	return EXIT_SUCCESS;
}