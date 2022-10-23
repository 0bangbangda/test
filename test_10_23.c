#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
	double a, b, c;
	double x1, x2, y1, y2;
	scanf("%lf %lf %lf", &a, &b, &c);
	const double delta = b*b - 4 * a*c;
	if (delta >= 0){
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		y1 = 0;
		y2 = 0;
		printf("x1=%.3f x2=%.3f", x1, x2);
	}
	else{
	x1 = (-b) / (2 * a);
	x2 = (-b) / (2 * a);
	y1 = sqrt(fabs(delta)) / (2 * a);
	y2 = sqrt(fabs(delta)) / (2 * a);
	printf("x1=%.3f+%.3fi x2=%.3f-%.3fi", x1, y1, x2, y2);
}
	return EXIT_SUCCESS;
}