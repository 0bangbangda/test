#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	/*long y = -43456;
//	printf("y=%-8ld\n", y);
//	printf("y=%-08ld\n", y);
//	printf("y=%08ld\n", y);
//	printf("%y=%+8ld\n", y);
//	printf("y=%8ld\n", y);*/
//	int y = 2456;
//	printf("y=%#8o\n", y);
//	printf("y=%08o\n", y);
//	printf("y=%##8o\n", y);
//	printf("y=%#8x\n", y);
//	return EXIT_SUCCESS;
//
//}
float Max(float a, float b, float c);
#define Max2(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c)
int main(void){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%.3f\n", Max(a, b, c));
	printf("%.3f", Max2(a, b, c));
	return EXIT_SUCCESS;
}
float Max(float a, float b, float c){
	if (a > b){
		if (a > c)
			return a;
		else
			return c;
	}
	else{
		if (b > c)
			return b;
		else
			return c;
	}
}