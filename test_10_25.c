//写一函数，将两个字符串连接
//123
//abc
//样例输出
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
//写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
//输入格式
//一行字符串
//输出格式
//顺序输出其中的元音字母（aeiou）
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
//写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
//样例输入
//1990
//样例输出
//1 9 9 0
//函数递归法
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