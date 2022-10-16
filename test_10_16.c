//输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
//一行字符, 长度不超过200
//统计值
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//int main(void){
//	char arr[200];
//	int alpha = 0, digit = 0, blank = 0, other = 0;
//	gets_s(arr, 200);
//	for (int i = 0; i < 200; i++){
//		if (arr[i] == '\0')
//			break;
//		if (isalpha(arr[i]))
//			alpha++;
//		else if (isdigit(arr[i]))
//			digit++;
//		else if (isblank(arr[i]))
//			blank++;
//		else
//			other++;
//	}
//	printf("%d %d %d %d", alpha, digit, blank, other);
//	return EXIT_SUCCESS;
//}

//#include<math.h>
//double sum(int n);
//int main(void){
//	int n;
//	scanf("%d", &n);
//	printf("%d", (int)sum(n));
//	return EXIT_SUCCESS;
//}
//double sum(int n)
//{//函数递归两个条件：1.存在限制条件 2.不断逼近限制条件
//	if (n > 1)
//		return sum(n - 1) + pow((double)2, (double)n);//利用数列递归关系写出函数递归表达式
//	return 2;
//
//}//求Sn = a + aa + aaa + … + aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n = 5时 = 2 + 22 + 222 + 2222 + 22222，n由键盘输入。
#include<math.h>
int sum(int n);
double calculer(int n);
int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return EXIT_SUCCESS;
}
int sum(int n)
{
	if (n > 1)
		return sum(n - 1) + (int)calculer(n);
	return 2;
}
double calculer(int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += 2 * pow((double)10, (double)i);
	}
	return sum;
}