#include<stdio.h>
#include<stdlib.h>
//输入两个整数，求他们相除的余数。用带参的宏来实现，编程序。
//#define division(x,y) x%y
//int main(void){
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", division(a, b));
//	return EXIT_SUCCESS;
//}
//三角形面积 = SQRT(S*(S - a)*(S - b)*(S - c)) 
//其中S = (a + b + c) / 2，a、b、c为三角形的三边。 定义两个带参的宏，一个用来求area，
//另一个宏用来求S。 写程序，在程序中用带实参的宏名来求面积area。
#include<math.h>
#define s(a,b,c) (a+b+c)/2
#define area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c)) 
int main(void){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.3f", area(a,b,c,s(a,b,c)));
	return EXIT_SUCCESS;
}
