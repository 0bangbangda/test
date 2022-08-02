#include"game.h"
void menu()
{
	printf("��ѡ��:>\n");
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
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
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
			printf("������\n");
			test();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} 
	while (input);
	return 0;
}