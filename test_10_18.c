//打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//double flower(int i);
//int main(void){
//	int n = 1000;
//	for (int i = 100; i <= n; i++){
//		if ((int)flower(i) == i)
//			printf("%d\n", i);
//	}
//	return EXIT_SUCCESS;
//}
//double flower(int i)
//{
//	if (i > 9)
//		return pow((double)(i % 10), 3.0) + flower(i / 10);
//	return pow((double)i,3.0);
//}
//有一分数序列： 2 / 1 3 / 2 5 / 3 8 / 5 13 / 8 21 / 13......求出这个数列的前N项之和，保留两位小数。
//int main(void){
//	float x = 2, y = 1, sum = 0;
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++){
//		sum += x / y;
//		float tmp = x;
//		x = x + y;
//		y = tmp;
//	}
//	printf("%.2f", sum);
//	return EXIT_SUCCESS;
//}
//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
int main(void){
	int M, N;
	scanf("%d %d", &M, &N);
	double s = (double)M;
	for (double i = 2; i <= N; i++){
		s += M / pow(2.0, i-1) * 2;
	}
	printf("%.2f %.2f", M / pow(2.0, (double)N), s);
	return EXIT_SUCCESS;
}