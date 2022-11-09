#include<stdio.h>
#include<stdlib.h>
//void range(double*x, double*y);
//int main(void){
//	double x1, y1, x2, y2, x3, y3, x4, y4;
//	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//	scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);
//	range(&x1, &x2);
//	range(&y1, &y2);
//	range(&x3, &x4);
//	range(&y3, &y4);
//	double m = x2<x4 ? x2 : x4;
//	double n = x1>x3 ? x1 : x3;
//	double p = y2<y4 ? y2 : y4;
//	double q = y1>y3 ? y1 : y3;
//	if (x2<x3 || x1>x4 || y1 > y4 || y2 < y3)
//		printf("0.00");
//	else
//		printf("%.2f", (m - n)*(p - q));
//	return EXIT_SUCCESS;
//}
//void range(double*x, double*y)
//{
//	if (*x>*y){
//		double tmp = *x;
//		*x = *y;
//		*y = tmp;
//	}
//}
//int main(void){
//	double x;
//	char arr[20];
//	printf("please input a number:\n");
//	scanf("%lf", &x);
//	printf("please input a string:\n");
//	
//	getchar();
//	scanf("%s", arr);
//	printf("%.2f\n", x);
//	printf("%s", arr);
//	return EXIT_SUCCESS;
//}
