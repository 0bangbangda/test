//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
//һ���ַ�, ���Ȳ�����200
//ͳ��ֵ
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
//{//�����ݹ�����������1.������������ 2.���ϱƽ���������
//	if (n > 1)
//		return sum(n - 1) + pow((double)2, (double)n);//�������еݹ��ϵд�������ݹ���ʽ
//	return 2;
//
//}//��Sn = a + aa + aaa + �� + aa��aaa����n��a��ֵ֮������a��һ�����֣�Ϊ2�� ���磬n = 5ʱ = 2 + 22 + 222 + 2222 + 22222��n�ɼ������롣
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