#include"game.h"
void menu()
{
	printf("####################\n");
	printf("#####  1.play   ####\n");
	printf("#####  0.exit   ####\n");
	printf("####################\n");
}
void test()
{
	int ret = 0;
	srand((unsigned int)time(NULL));
	printf("ɨ��\n");
	char bomp[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(bomp, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(bomp, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetBomp(bomp, ROW, COL);
	//DisplayBoard(bomp, ROW, COL);
	FindBomp(bomp, show, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			test();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return 0;
}
