#include<stdio.h>
#include<stdlib.h>

void InitArr(char arr[])
{
	arr[0] = 'A';
	arr[1] = 'B';
	arr[2] = 'C';
	arr[3] = 'D';
}
void Record(char arr[])
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		arr[i] = '\0';
	}
	arr[0] = !1;
	arr[2] = 1;
	arr[3] = 1;
	arr[3] = 0;
}
int Judge(char arr[], int i)
{
	int count = 0;
	switch (i)
	{
	case 0:
		arr[0] = 1;
		break;
	case 1:
		arr[2] = 0;
		break;
	case 2:
		arr[3] = 0;
		break;
	case 3:
		arr[3] = 1;
		break;
	}
	int j = 0;
	for (j = 0; j < 4; j++)
	{
		if (arr[j])
			count++;
			
	}
	if (count == 1)
	{
		return 1;
	}
	else
		return 0;
}
int main(void)
{
	char arr[] = { 'A', 'B',  'C', 'D' };
	Record(arr);
	int i = 0;
	int ret = 0;
	for (i = 0; i < 4; i++)
	{
		ret = Judge(arr,i);
		InitArr(arr);
		if (ret == 1)
			break;
		Record(arr);
	}
	printf("%c ÊÇÐ×ÊÖ", arr[i]);
	return EXIT_SUCCESS;
}