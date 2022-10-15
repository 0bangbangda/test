////有一个函数
//y = { x      x<1
//	| 2x - 1   1 <= x<10
//{ 3x - 11  x >= 10
//
//写一段程序，输入x，输出y
//#include<stdio.h>
//#include<stdlib.h>
//int main(void){
//	int x;
//	scanf("%d", &x);
//	if (x < 1)
//		printf("%d", x);
//	else if (x >= 1 && x < 10)
//		printf("%d", 2 * x - 1);
//	else
//		printf("%d", 3 * x - 11);
//	return EXIT_SUCCESS;
//}
//给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80 - 89分为B，70 - 79分为C，60 - 69分为D，60分以下为E。
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main(void){
//	float sco;
//	scanf("%f", &sco);
//	assert(sco >= 0 && sco <= 100);
//	if (sco >= 90)
//		printf("%c", 'A');
//	else if (sco >= 80 && sco <= 89)
//		printf("%c", 'B');
//	else if (sco >= 70 && sco <= 79)
//		printf("%c", 'C');
//	else if (sco >= 60 && sco <= 69)
//		printf("%c", 'D');
//	else
//		printf("%c", 'E');
//	return EXIT_SUCCESS;
//}
#include<float.h>
int main(void){
	double x, y;
	scanf("%lf", &x);

	double std1 = 100000.0; double std2 = 200000.0; double std3 = 400000.0; double std4 = 600000.0; double std5 = 1000000.0;
	if (x <= std1)
		y = x*0.1;
	else if (x > std1&&x <= std2)
		y = std1*0.1 + (x - std1)*0.075;
	else if (x > std2&&x <= std3)
		y = std1*0.1 + (std2 - std1)*0.075 + (x - std2)*0.05;
	else if (x > std3&&x <= std4)
		y = std1*0.1 + (std2 - std1)*0.075 + (std3 - std2)*0.05 + (x - std3)*0.03;
	else if (x > std4&&x <= std5)
		y = std1*0.1 + (std2 - std1)*0.075 + (std3 - std2)*0.05 + (std4 - std3)*0.03 + (x - std4)*0.015;
	else
		y = std1*0.1 + (std2 - std1)*0.075 + (std3 - std2)*0.05 + (std4 - std3)*0.03 + (std5 - std4)*0.015 + (x - std5)*0.01;
	printf("%f", y);
	return EXIT_SUCCESS;
}