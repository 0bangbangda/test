#include<stdio.h>
int main()
{
	int i = 1;
	int a = 0;
	while (i <= 100)
	{
		int a = i % 2;
		if (1 == a)
			printf("%d\n", i);
		i++;
	}
	return 0;
}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期四\n");
//		break;
//	}
//	return 0;
//		
//			
//
//
//
//
//}