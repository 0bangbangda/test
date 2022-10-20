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
{   //������ֵ
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++)
			arr[i][j] = rand() % 4 + 1;//��1-4֮�����һ������ֵ
	}
}
int verifier(int arr[M][N], int row, int col)
{
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