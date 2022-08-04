#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row + 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetBomp(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;
	while (i<BOMP)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			i++;
		}
	}
}
void FindBomp(char bomp[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count<row*col-BOMP)
	{
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (bomp[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				break;
			}
			else
			{
				int ret = 0;
				ret = bomp[x - 1][y - 1] + bomp[x][y - 1] + bomp[x + 1][y - 1] + bomp[x + 1][y] + bomp[x + 1][y + 1] + bomp[x][y + 1] + bomp[x - 1][y + 1] + bomp[x - 1][y] - 8 * '0';
				show[x][y] = ret + '0';
				DisplayBoard(show, ROW, COL);
				count++;
			}

		}
		else
			printf("坐标非法，请重新输入");
	}
	if (count == row*col - BOMP)
		printf("你赢了\n");
}