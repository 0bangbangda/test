#include<stdio.h>
void print(char arr[],int sz)
{
	int mid = sz / 2;
	int j = 0;
	for (j = 0; j <= sz / 2; j++)
	{
		arr[mid + j] = '*';
		arr[mid - j] = '*';
		printf("%s\n", arr);
	}
	for (j = 0; j < sz / 2; j++)
	{
		arr[mid + sz / 2 - j] = ' ';
		arr[mid - sz / 2 + j] = ' ';
		printf("%s\n", arr);
	}
	
}
int main()
{
	char arr[14] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0' };
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	print(arr, sz);

	return 0;
}