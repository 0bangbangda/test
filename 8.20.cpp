#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int(*p)(int, int) = Add;
//	printf("%d\n", (*p)(a, b));
//	return 0;
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("abcdef");
//	(p)("abcdef");
//	p("abcdef");
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Dev(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Dev };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//}
//c/*har* my_strcpy(char* dest, const char* src)
//{
//
//}
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfarr[4])(char*, const char*) = { my_strcpy, my_strcpy, my_strcpy, my_strcpy };
//	return 0;
//}*/
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("**************************\n");
	printf("***  1.Add      2.Sub  ***\n");
	printf("***  3.Mul      4.Div  ***\n");
	printf("***       0.exit       ***\n");
	printf("**************************\n");
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:\n");
//			scanf("%d%d", &x, &y);
//		}
//		switch (input)
//		{
//		case 1:
//			printf("%d\n",Add(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n",Mul(x,y) );
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		if (0 == input)
		{
			printf("�˳�����\n");
		}
		else if (input > 4 || input < 0)
		{
			printf("ѡ�����������ѡ��\n");
		}
		else
		{
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", pfArr[input](x, y));
		}
	} while (input);
	return 0;
}