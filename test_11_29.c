#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	int a;
//	scanf("%d", &a);
//	if ((a % 5 == 0) && (a % 7 == 0))
//		printf("yes\n");
//	else
//		printf("no\n");
//	return EXIT_SUCCESS;
//}
#include<assert.h>
//int main(void){
//	float x, y;
//	scanf("%f", &x);
//	assert(x<40);
//	if (x < 0)
//		y = 0;
//	else if (x>0 && x <= 10)
//		y = x;
//	else if (x > 10 && x <= 20)
//		y = 10;
//	else if (x > 20 && x <= 40)
//		y = -0.5*x + 20;
//	printf("%f\n", y);
//	return EXIT_SUCCESS;
//}
//int main(void){
//	int x, count = 0;
//	scanf("%d", &x);
//	if (x % 3 == 0)
//		count += 3;
//	if (x % 5 == 0)
//		count += 5;
//	if (x % 7 == 0)
//		count += 7;
//	switch (count)
//	{
//	case 3:
//		printf("只能被3整除\n");
//		break;
//	case 5:
//		printf("只能被5整除\n");
//		break;
//	case 7:
//		printf("只能被7整除\n");
//		break;
//	case 8:
//		printf("能被3和5整除\n");
//		break;
//	case 10:
//		printf("能被3和7整除\n");
//		break;
//	case 12:
//		printf("能被5和7整除\n");
//		break;
//	case 15:
//		printf("能同时被3、5、7整除\n");
//		break;
//	case 0:
//		printf("不能被3、5、7中任一个整除\n");
//		break;
//	default:
//		fprintf(stderr, "error\n");
//	}
//	return EXIT_SUCCESS;
//}
//int main(void){
//	int x, c = 1;
//	int y;
//	scanf("%d", &x);
//	c = abs(x);
//	switch (c==x)
//	{
//	case 1:
//		if (c == 0)
//			y = 0;
//		else
//			y = 1;
//		break;
//	case 0:
//		y = -1;
//		break;
//	default:
//		fprintf(stderr, "error\n");
//	}
//	printf("%d\n", y);
//	return EXIT_SUCCESS;
//}
//int main(void){
//	int data1, data2;
//	char op;
//	scanf("%d %c %d", &data1, &op,&data2);
//	switch (op){
//	case '+':
//		printf("data1 op data=%d", data1 + data2);
//		break;
//	case '-':
//		printf("data1 op data=%d", data1 - data2);
//		break;
//	case '*':
//		printf("data1 op data=%d", data1 * data2);
//		break;
//	case '/':
//		printf("data1 op data=%f", (float)data1 / data2);
//		break;
//	}
//	return EXIT_SUCCESS;
//}
//int main(void){
//	int grade;
//	scanf("%d", &grade);
//	assert(grade >= 0 && grade <= 100);
//	int g = grade / 10;
//	switch (g){
//	case 10:
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		printf("E\n");
//		break;
//	default:
//		fprintf(stderr, "error");
//	}
//	return EXIT_SUCCESS;
//}
int main(void){
	int x, y;
	char c;
	scanf("%d%c%di", &x, &c, &y);
	if (y == 0)
		printf("%d\n", x);
	//printf("%d%c%di\n", x, c, -y);
	else{
		if (c == '+')
		if (x == 0)
			printf("-%di\n", y);
		else
			printf("%d-%di\n", x, y);
		else
		if (x == 0)
			printf("%di\n", y);
		else
			printf("%d+%di\n", x, y);
	}
	return EXIT_SUCCESS;
}