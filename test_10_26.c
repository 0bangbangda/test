//��дһ��������ʵ�δ���һ���ַ�����ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ��������������������ַ����Լ������������� 
//ֻҪ����������ʲô��ʾ��Ϣ��
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void count(char arr[], int*p1, int*p2, int*p3, int*p4);
int main(void){
	char arr[50];
	gets_s(arr, 40);
	int num1, num2, num3, num4;
	count(arr, &num1, &num2, &num3, &num4);
	printf("%d %d %d %d", num1, num2, num3, num4);
	return EXIT_SUCCESS;
}
void count(char arr[], int*p1, int*p2, int*p3, int*p4)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		if (isalpha(arr[i]))
			num1++;
		else if (isdigit(arr[i]))
			num2++;
		else if (isblank(arr[i]))
			num3++;
		else
			num4++;
		i++;
	}
	*p1 = num1; *p2 = num2; *p3 = num3; *p4 = num4;
}