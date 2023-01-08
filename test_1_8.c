#include<stdio.h>
#include<stdlib.h>
int main(void){
	char* s = "\ta\018bc";
	for (; *s != '\0'; s++){
		printf("%c ", *s);
	}
	return EXIT_SUCCESS;
}