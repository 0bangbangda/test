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
	while (!CheckFull(arr, M, N)){
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
{
	//在随机的位置赋1-4的任意值
	for (int i = 0; i < M*N; i++){//设置赋值的次数
		int x, y;
		x = rand() % 4;
		y = rand() % 4;
		//判断是否被占用
		if (arr[x][y] != '*')
			FindEmpty(arr, M, N, &x, &y);
		//赋值并判断是否合理
		arr[x][y] = rand() % 4 + 1;
		while (!check(arr, M, N)){
			arr[x][y] = (arr[x][y] + 1) % 4;
		}
	}
}
int CheckFull(int arr[M][N], int row, int col)
{   //检验数组填满以后是否满足规则
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
void FindEmpty(int arr[M][N], int row, int col, int* p1, int* p2)
{
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if (arr[i][j] == '*'){
				*p1 = i;
				*p2 = j;
			}
		}
	}
}
int check(int arr[M][N], int row, int col)
{
	//数组正在填充
	//检验填充是否合理
	//合理，返回1，不合理，返回0
	
	//检验每一行，有没有两个1或2或3或4
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;//统计数字出现的次数
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if (1 == arr[i][j])
				num1++;
			else if (2 == arr[i][j])
				num2++;
			else if (3 == arr[i][j])
				num3++;
			else if (4 == arr[i][j])
				num4++;
		}
		if (2 == num1 || 2 == num2 || 2 == num3 || 2 == num4)
			return 0;
	}
	//计数器归零
	num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	//检验每一列
	for (int j = 0; j < row; j++){
		for (int i = 0; i < col; i++){
			if (1 == arr[i][j])
				num1++;
			else if (2 == arr[i][j])
				num2++;
			else if (3 == arr[i][j])
				num3++;
			else if (4 == arr[i][j])
				num4++;
		}
		if (2 == num1 || 2 == num2 || 2 == num3 || 2 == num4)
			return 0;
	}
	
	//检验每一个宫格
	for (int i = 0; i < row; i += 2){//每两个两个检验宫格
		num1 = 0, num2 = 0, num3 = 0, num4 = 0;
		for (int j = 0; j < 2; j++){
			if (1 == arr[i][j])
				num1++;
			else if (2 == arr[i][j])
				num2++;
			else if (3 == arr[i][j])
				num3++;
			else if (4 == arr[i][j])
				num4++;
		}
		if (2 == num1 || 2 == num2 || 2 == num3 || 2 == num4)
			return 0;
		num1 = 0, num2 = 0, num3 = 0, num4 = 0;
		for (int j = 2; j < col; j++){
			if (1 == arr[i][j])
				num1++;
			else if (2 == arr[i][j])
				num2++;
			else if (3 == arr[i][j])
				num3++;
			else if (4 == arr[i][j])
				num4++;
		}
		if (2 == num1 || 2 == num2 || 2 == num3 || 2 == num4)
			return 0;
	}
	return 1;
}