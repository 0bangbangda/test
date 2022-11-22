#include<stdio.h>
#include<stdlib.h>
#define LG_MAX 100
typedef int BIGNAT[LG_MAX];
int main(void){
	BIGNAT X;
	for (int i = 0; i < LG_MAX; i++){
		X[i] = i;
	}
	return EXIT_SUCCESS;
}