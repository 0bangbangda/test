#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[10];
	int sum = 0; float average; int count = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 10; i++)
		sum += arr[i];
	average = sum / 10.0;
	for (int i = 0; i < 10; i++){
		if (arr[i]>average)
			count++;
	}
	printf("%d", count);
	return EXIT_SUCCESS;
}