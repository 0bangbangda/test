#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main(void){
//	double a, b, c;
//	double x1, x2, y1, y2;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	const double delta = b*b - 4 * a*c;
//	if (delta >= 0){
//		x1 = (-b + sqrt(delta)) / (2 * a);
//		x2 = (-b - sqrt(delta)) / (2 * a);
//		y1 = 0;
//		y2 = 0;
//		printf("x1=%.3f x2=%.3f", x1, x2);
//	}
//	else{
//	x1 = (-b) / (2 * a);
//	x2 = (-b) / (2 * a);
//	y1 = sqrt(fabs(delta)) / (2 * a);
//	y2 = sqrt(fabs(delta)) / (2 * a);
//	printf("x1=%.3f+%.3fi x2=%.3f-%.3fi", x1, y1, x2, y2);
//}
//	return EXIT_SUCCESS;
//}
//写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
//如果是素数输出prime 如果不是输出not prime
int main(void){
	int x, i;
	scanf("%d", &x);
	for ( i = 2; i <= sqrt(x); i++){
		if (0 == x%i){
			printf("not prime");
			break;
		}
	}
	if (i > sqrt(x))
		printf("prime");
	return EXIT_SUCCESS;
}