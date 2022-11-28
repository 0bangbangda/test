#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	int a;
//	float b;
//	char c;
//	scanf("%3d%f|%c", &a, &b, &c);
//	printf("%-8d|%8.1f|%c", a, b, c);
//	
//	return EXIT_SUCCESS;
//}

//int main(void){
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a*a + b*b > 100)
//		printf("%d\n", (a*a + b*b) / 100);
//	else
//		printf("%d\n", a*a + b*b);
//	return EXIT_SUCCESS;
//}
int main(void){
	int i, j;
	printf("  Nine-by-nine Multiplication Table\n");
	printf("--------------------------------------\n");
	printf("     1   2   3   4   5   6   7   8   9\n");
	printf("--------------------------------------\n");
	for (i = 1; i <= 9; i++){
		printf(" %d", i);
		for (j = 1; j <= i; j++)
			printf("%4d", i*j);
		putchar('\n');
	}
	printf("--------------------------------------");
	return EXIT_SUCCESS;
}