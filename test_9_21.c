#include<stdio.h>
#include<stdlib.h>
int factorielleC(const int n);
int factorielleD(const int n);
int main(void){
	int n = 2;
	while (factorielleC(n - 1)<factorielleD(n)){
		printf("%d ", factorielleC(n - 1));
		printf("%d\n", factorielleD(n));
		n++;
	}
	printf("La plus grande valeur de n pour laquelle le calcul de factorielle est %d.\n", n - 1);
	return EXIT_SUCCESS;
}
int factorielleC(const int n)
{
	int fact = 1;
	int i = 1;
	while (i <= n){
		fact = fact*i;
		i = i + 1;

	}
	return fact;

}
int factorielleD(const int n)
{
	int fact = 1;
	int i = n;
	while (i>0){
		fact *= i;
		i--;
	}
	return fact;
}
