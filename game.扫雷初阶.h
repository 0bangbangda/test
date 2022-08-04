#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define BOMP 10
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetBomp(char board[ROWS][COLS], int row, int col);
void FindBomp(char bomp[ROWS][COLS], char show[ROWS][COLS], int row, int col);