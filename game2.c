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
	for (int i = 0; i < row; i++){//ÿһ��
		for (int j = 0; j < col; j++){//ÿһ���е�ÿһ��
			if ('*'==arr[i][j])
				printf(" * ");
			else
				printf(" %d ", arr[i][j]);
			printf("|");

		}
		printf("\n");
		//��ӡ�ָ���
		for (int j = 0; j < col; j++)
			printf("----");
		//����
		printf("\n");
	}
}
void SetBoard(int arr[M][N], int row, int col)
{
	//�������λ�ø�1-4������ֵ
	for (int i = 0; i < M*N; i++){//���ø�ֵ�Ĵ���
		int x, y;
		x = rand() % 4;
		y = rand() % 4;
		//�ж��Ƿ�ռ��
		if (arr[x][y] != '*')
			FindEmpty(arr, M, N, &x, &y);
		//��ֵ���ж��Ƿ����
		arr[x][y] = rand() % 4 + 1;
		while (!check(arr, M, N)){
			arr[x][y] = (arr[x][y] + 1) % 4;
		}
	}
}
int CheckFull(int arr[M][N], int row, int col)
{   //�������������Ժ��Ƿ��������
	//�����������ͷ���1������0
	//ÿ�С�ÿ�С�ÿ�������ڵ����ֲ����ظ�
	//������
	for (int i = 0; i < row; i++){
		if (24 != arr[i][0] * arr[i][1] * arr[i][2] * arr[i][3])
			return 0;
	}
	//������
	for (int j = 0; j < row; j++){
		if (24 != arr[0][j] * arr[1][j] * arr[2][j] * arr[3][j])
			return 0;
	}
	//���鹬��
	for (int i = 0; i < row; i+=2){//ÿ�����������鹬��
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
	//�����������
	//��������Ƿ����
	//��������1������������0
	
	//����ÿһ�У���û������1��2��3��4
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;//ͳ�����ֳ��ֵĴ���
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
	//����������
	num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	//����ÿһ��
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
	
	//����ÿһ������
	for (int i = 0; i < row; i += 2){//ÿ�����������鹬��
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