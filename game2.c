#include"game.h"
void menu()
{
	printf("***********************\n");
	printf("*** 1 .play  0.exit ***\n");
	printf("***********************\n");
}
void test()
{
	int arr[M][N];
	InitArr(arr, M, N);
	display(arr, M, N);
}
void InitArr(int arr[M][N], const int row, const int col)
{
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			arr[i][j] = '*';
		}
	}
}
void display(int arr[M][N], int row, int col)
{
	for (int i = 0; i < row; i++){//每一行
		for (int j = 0; j < col; j++){//每一行中的每一列
			printf(" %c ", arr[i][j]);
			printf("|");

		}
		printf("\n");
		//打印分割线
		for (int j = 0; j < col; j++)
			printf("----");
		//换行
		printf("\n");
	}
}