#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define M 4
#define N 4

void menu();
void test();
void InitArr(int arr[M][N], const int row, const int col);
void display(int arr[M][N], int row, int col);
void SetBoard(int arr[M][N], int row, int col);
int verifier(int arr[M][N], int row, int col);