#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[9];
	for (int i = 0; i < 9; i++){
		scanf("%d", &arr[i]);
	}
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 9; i++){
		if (n>arr[i] && n < arr[i+1] && i+1 < 9){
			printf("%d\n", arr[i]);
			printf("%d\n", n);
		}
		else
			printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}