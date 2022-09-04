#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void InitArr(char arr[])
//{
//	arr[0] = 'A';
//	arr[1] = 'B';
//	arr[2] = 'C';
//	arr[3] = 'D';
//}
//void Record(char arr[])
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = '\0';
//	}
//	arr[0] = !1;
//	arr[2] = 1;
//	arr[3] = 1;
//	arr[3] = 0;
//}
//int Judge(char arr[], int i)
//{
//	int count = 0;
//	switch (i)
//	{
//	case 0:
//		arr[0] = 1;
//		break;
//	case 1:
//		arr[2] = 0;
//		break;
//	case 2:
//		arr[3] = 0;
//		break;
//	case 3:
//		arr[3] = 1;
//		break;
//	}
//	int j = 0;
//	for (j = 0; j < 4; j++)
//	{
//		if (arr[j])
//			count++;
//			
//	}
//	if (count == 1)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main(void)
//{
//	char arr[] = { 'A', 'B',  'C', 'D' };
//	Record(arr);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 4; i++)
//	{
//		ret = Judge(arr,i);
//		InitArr(arr);
//		if (ret == 1)
//			break;
//		Record(arr);
//	}
//	printf("%c ÊÇÐ×ÊÖ", arr[i]);
//	return EXIT_SUCCESS;
//}
//int main(void)
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer = %c", killer);
//		}
//	}
//
//	return EXIT_SUCCESS;
//}
//int main(void)
//{
//	int a, b, c, d, e = 0;
//	srand((unsigned int)time(NULL));
//	while (1)
//	{
//		a = rand() % 5 + 1;
//		while (1)
//		{
//			b = rand() % 5 + 1;
//			if (b != a)
//				break;
//		}
//		while (1)
//		{
//			c = rand() % 5 + 1;
//			if (c != a&&c != b)
//				break;
//		}
//		while (1)
//		{
//			d = rand() % 5 + 1;
//			if (d != a&&d != b&&d != c)
//				break;
//
//		}
//		while (1)
//		{
//			e = rand() % 5 + 1;
//			if (e != a&&e != b&&e != c&&e != d)
//				break;
//		}
//		if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
//		{
//			printf("a = %d,b = %d,c = %d,d = %d,e = %d", a, b, c, d, e);
//			break;
//		}
//	}
//	return EXIT_SUCCESS;
//}
int main(void)
{
	int a, b, c, d, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
						{
							if (a*b*c*d*e==120)
							{
								printf("a = %d,b = %d,c = %d,d = %d,e = %d", a, b, c, d, e);
								goto end;
							}
							
						}
					}
				}
			}
		}
	}
end:
	return EXIT_SUCCESS;
}