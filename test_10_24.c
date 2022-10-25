#include<stdio.h>
#include<stdlib.h>
//写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
#define M 3
#define N 3
//void transpose(int arr[M][N], int TranArr[N][M]);
//int main(void){
//	int arr[M][N], TranArr[N][M];
//	for (int i = 0; i < M; i++){
//		for (int j = 0; j < N; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	transpose(arr, TranArr);
//	for (int i = 0; i < M; i++){
//		for (int j = 0; j < N; j++)
//			printf("%-2d", TranArr[i][j]);
//		printf("\n");
//	}
//	return EXIT_SUCCESS;
//}
//void transpose(int arr[M][N], int TranArr[N][M])
//{
//	for (int i = 0; i < M; i++){
//		for (int j = 0; j < N; j++){
//			TranArr[j][i] = arr[i][j];
//		}
//	}
//}
//字符串逆序
#include<string.h>
void reverse(char arr[], int sz);
int main(void){
	char arr[100] = { 0 };
	gets_s(arr, 20);
	reverse(arr, 100);
	printf("%s", arr);
	return EXIT_SUCCESS;
}
void reverse(char arr[], int sz)
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right){
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
