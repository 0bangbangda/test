#include"game.h"
void Init(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			   
		}
		printf("\n");
		//分割线
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void Player(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走:> 请输入坐标");
		scanf("%d%d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else if (board[x - 1][y - 1] != ' ')
			printf("该位置已被占用，请重新输入坐标\n");
		else
			printf("坐标输入错误，请重新输入坐标\n");
	}
	
}
void Computer(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//横行
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			{
				if (board[i][0] == '*')
					return '*';
				else
					return '#';
			}
			//列
			else if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			{
				if (board[0][j] == '*')
					return '*';
				else
					return '#';
			}
			//斜线
			else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			{
				if (board[1][1] == '*')
					return '*';
				else
					return '#';
			}
			else if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
			{
				if (board[1][1] == '*')
					return '*';
				else
					return '#';
			}
			
		}

	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 'Q';
}