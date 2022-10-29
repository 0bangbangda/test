//给年份year，定义一个宏，以判别该年份是否闰年。
//提示：宏名可以定义为LEAP_YEAR，形参为y，既定义宏的形式为 #define LEAP_YEAR(y) （读者设计的字符串）
//根据是否闰年输出，是输出"L", 否输出"N"
/*include<stdio.h>
#include<stdlib.h>
//#define LEAP_YEAR(y) a=y%4,b=y%100,c=y%400
//int main(void){
//	int a, b, c, y;
//	scanf("%d", &y);
//	LEAP_YEAR(y);
//	if ((0 == a && 0 != b) || 0 == c)
//		printf("L");
//	else
//		printf("N");
//	return EXIT_SUCCESS;
//}*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	float a;
	scanf("%f", &a);
	for (int i = 1; i <= 3;i++){
		for (int j = 0; j < i; j++)
			printf("%6.2f ", a);
		printf("\n");
	}
	return EXIT_SUCCESS;
}