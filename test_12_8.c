#include<stdio.h>
#include<stdlib.h>
int main(void){
	int  v1 = 0, v2 = 0; char ch;
	while ((ch = getchar()) != '#')
		switch (ch){
		case 'a':
		case 'h':
		default:v1++;
		case 'o':v2++;
	}
	printf("%d,%d\n", v1, v2);
	return EXIT_SUCCESS;
}