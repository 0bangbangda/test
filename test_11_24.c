#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[3][4];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++)
			scanf("%d", &arr[i][j]);
	}
	int m = abs(arr[0][0]);
	int x = 0, y = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			if (abs(arr[i][j])>m){
				m = abs(arr[i][j]);
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d %d", m, x+1, y+1);
	return EXIT_SUCCESS;
}