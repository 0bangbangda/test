#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void copy(char arr[], char arr2[], int n, int m);
int main(void){
	/*int a, b;
	b++;*/
	char arr[50] = { 0 };
	char arr2[100] = { 0 };
	int n, m;
	scanf("%d", &n);
	getchar();
	gets_s(arr, n+1);
	/*for (int i = 0; i < n; i++)
		scanf("%c", &arr[i]);*/
	scanf("%d", &m);
	copy(arr, arr2, n, m);
	printf("%s", arr2);
	/*char arr[100];
	int n, m;
	scanf("%d", &n);
	scanf("%s", &arr);
	scanf("%d", &m);
	for (int i = m - 1; i < n;i++)
	{
		printf("%c", arr[i]);
	}*/
	return EXIT_SUCCESS;
}
void copy(char arr[], char arr2[], int n, int m)
{
	strcpy(arr2, &arr[m - 1]);
}
