//дһ�������������ַ�������
//123
//abc
//�������
//123abc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main(void){
//	char arr1[100];
//	char arr2[20];
//	gets_s(arr1, 10);
//	gets_s(arr2, 10);
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return EXIT_SUCCESS;
//}
//дһ��������һ���ַ����е�Ԫ����ĸ���Ƶ���һ���ַ�����Ȼ�������
//�����ʽ
//һ���ַ���
//�����ʽ
//˳��������е�Ԫ����ĸ��aeiou��
//int main(void){
//	char arr[100];
//	gets_s(arr, 20);
//	int i = 0;
//	while (arr[i]){
//		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
//			printf("%c", arr[i]);
//		i++;
//	}
//	return EXIT_SUCCESS;
//}
//дһ����������һ����λ���֣�Ҫ��������ĸ������ַ�����ÿ�������ּ�ո�������1990��Ӧ���"1 9 9 0"��
//��������
//1990
//�������
//1 9 9 0
//�����ݹ鷨
//#include<assert.h>
//void print(int n);
//int main(void){
//	int n;
//	scanf("%d", &n);
//	assert(n > 999 && n < 10000);
//	print(n);
//	return EXIT_SUCCESS;
//}
//void print(int n)
//{
//	if (n>9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
int main(void){
	char arr[5];
	scanf("%s", arr);
	for (int i = 0; i < 4; i++)
	{
		printf("%c", arr[i]);
		printf(" ");
	}
	return EXIT_SUCCESS;
}