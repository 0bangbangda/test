//�����������ĺ�, ����2λС��1~a֮�� 1~b��ƽ���� 1~c�ĵ�����
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a, b, c;
	float sum1 = 0, sum2 = 0, sum3 = 0;
	scanf("%d %d %d", &a, &b, &c);
	//��1-a֮��
	for (int i = 1; i <= a; i++)
		sum1 += i;
	//��1-b��ƽ����
	for (int i = 1; i <= b; i++)
		sum2 += i*i;
	//��1-c�ĵ�����
	for (int i = 1; i <= c; i++)
		sum3 += 1.0 / i;
	printf("%.2f", sum1 + sum2 + sum3);
	return EXIT_SUCCESS;
}