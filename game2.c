#include"game2.h"
void menu()
{
	printf("***********************\n");
	printf("*** 1 .play  0.exit ***\n");
	printf("***********************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int arr[M][N];
	InitArr(arr, M, N);
	display(arr, M, N);
	while (!verifier(arr, M, N)){
	SetBoard(arr, M, N);
}
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
			if ('*'==arr[i][j])
				printf(" * ");
			else
				printf(" %d ", arr[i][j]);
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
void SetBoard(int arr[M][N], int row, int col)
{   //遍历赋值
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++)
			arr[i][j] = rand() % 4 + 1;//在1-4之间随机一个数赋值
	}
}
int verifier(int arr[M][N], int row, int col)
{
	//满足数组规则就返回1，否则0
	//每行、每列、每个宫格内的数字不能重复
	//检验行
	for (int i = 0; i < row; i++){
		if (24 != arr[i][0] * arr[i][1] * arr[i][2] * arr[i][3])
			return 0;
	}
	//检验列
	for (int j = 0; j < row; j++){
		if (24 != arr[0][j] * arr[1][j] * arr[2][j] * arr[3][j])
			return 0;
	}
	//检验宫格
	for (int i = 0; i < row; i+=2){//每两个两个检验宫格
		if (24 != arr[i][0] * arr[i][1] * arr[i + 1][0] * arr[i + 1][1])
			return 0;
	}
	for (int i = 0; i < row; i += 2){
		if (24 != arr[i][2] * arr[i][3] * arr[i + 1][2] * arr[i + 1][3])
			return 0;
	}
	return 1;


}