//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b){
//		if (a>c)
//			printf("%d", a);
//		else
//			printf("%d", c);
//	}
//	else
//	if (b>c)
//		printf("%d", b);
//	else
//		printf("%d", c);
//	return EXIT_SUCCESS;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void){
//	char arr[] = "China";
//	for (int i = 0; i<(int)strlen(arr); i++){
//		arr[i] += 4;
//	}
//	printf("%s", arr);
//	return EXIT_SUCCESS;
//}
//输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9，取位2小数。
#include<stdio.h>
#include<stdlib.h>
int main(void){
	float degree;
	scanf("%f", &degree);
	printf("c=%.2f", 5 * (degree - 32) / 9);
	return EXIT_SUCCESS;
}