#include<stdio.h>
#include<stdlib.h>
//�õݹ鷨��һ�����������ַ����У��������ţ��罫483��ų�384
//#include<string.h>
//#define N 10
//void display(int n, char *p, int i);
//int main(void){
//	int n, i = 0;
//	char arr[N] = { 0 };
//	scanf("%d", &n);
//	display(n, arr, i);
//	for (int j = strlen(arr) - 1; j >= 0; j--)
//		printf("%d", arr[j]);
//	return EXIT_SUCCESS;
//}
//void display(int n, char *p, int i)
//{
//	if (n > 9){
//		p[i] = n % 10;
//		i++;
//		display(n / 10, p, i);
//	}
//	else
//		p[i] = n;
//}
//�������Ӹ�λ����λ����
//void convert(char *p, int num);
//int main(void){
//	int num;
//	char str[10] = "";
//	scanf("%d", &num);
//	convert(str, num);
//	puts(str);
//	return EXIT_SUCCESS;
//}
//void convert(char *p, int num)
//{
//	if ((num / 10) != 0)
//		convert(p + 1, num / 10);
//	*p = num % 10 + '0';
//}
//��ָ����Ϊ�����ķ���ֵ
//#include<string.h>
//char* strlong(char *str1, char *str2);
//int main(void){
//	char str1[30] = "", str2[30] = "", *str;
//	gets_s(str1, 30);
//	gets_s(str2, 30);
//	str = strlong(str1, str2);
//	printf("%s\n", str);
//	return EXIT_SUCCESS;
//}
//char* strlong(char *str1,char *str2)
//{
//	if (strlen(str1) > strlen(str2))
//		return str1;
//	else
//		return str2;
//}
//�������ܷ��غ����ڲ��ֲ������ĵ�ַ�������������ʧȥ����ռ�ڴ��ʹ��Ȩ�ޣ�������û����ʧ������ԭ�����ڴ�顣���֮��д���������룬�ǿ��ڴ��ᱻ�������ݸ���
int* func(void);
int main(void){
	int *a;
	a = func();
	printf("abcdef\n");
	printf("%d", *a);
	return EXIT_SUCCESS;
}
int* func(void)
{
	int n = 100;
	return &n;
}