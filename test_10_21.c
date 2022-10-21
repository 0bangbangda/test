#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[3][3] = { 0 };
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int sum1 = 0,sum2 = 0;
	for (int i = 0; i < 3; i++){
		sum1 += arr[i][i];
	}
	for (int i = 2, j = 0; i >= 0, j < 3; i--, j++)
		sum2 += arr[i][j];
	printf("%d %d",sum1, sum2);
	return EXIT_SUCCESS;
}