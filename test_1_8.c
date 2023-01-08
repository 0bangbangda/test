#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	char* s = "\ta\018bc";
//	for (; *s != '\0'; s++){
//		printf("%c ", *s);
//	}
//	return EXIT_SUCCESS;
//}
//#define MAX(X,Y) ((X)>(Y))?(X):(Y)
//int Max(int x, int y){
//	return (x > y ? x : y);
//}
//int main(void){
//	int a = 10, b = 20;
//	float c = 10.1f, d = 12.2f;
//	printf("%d\n", Max(a, b));
//	printf("%d\n", MAX(a, b));
//	printf("%f\n", MAX(c, d));
//	return EXIT_SUCCESS;
//}
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main(void){
//	char A = 'A', B = 'B';
//	PRINT(A);
//	PRINT(B);
//	return EXIT_SUCCESS;
//}
#define CALC(X) ((X)*(X)+2*(X)+1)
int main(void){
	int a = 1;
	printf("%d\n",5*CALC(a + 2));
#undef CALC(X) ((X)*(X)+2*(X)+1)
	printf("%d\n", 5 * CALC(a + 2));
	return EXIT_SUCCESS;
}