//求以下三数的和, 保留2位小数1~a之和 1~b的平方和 1~c的倒数和
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a, b, c;
	float sum1 = 0, sum2 = 0, sum3 = 0;
	scanf("%d %d %d", &a, &b, &c);
	//求1-a之和
	for (int i = 1; i <= a; i++)
		sum1 += i;
	//求1-b的平方和
	for (int i = 1; i <= b; i++)
		sum2 += i*i;
	//求1-c的倒数和
	for (int i = 1; i <= c; i++)
		sum3 += 1.0 / i;
	printf("%.2f", sum1 + sum2 + sum3);
	return EXIT_SUCCESS;
}