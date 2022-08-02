#include"game.h"
void menu()
{
	printf("请选择:>\n");
	printf("############################\n");
	printf("##### 1.play     0.exit ####\n");
	printf("############################\n");
}
void test()
{
	int ret = 0;
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	Init(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		Player(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		Computer(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == 'Q')
		printf("平局\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			test();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择\n");
		}
	} 
	while (input);
	return 0;
}