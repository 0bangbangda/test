#include<stdio.h>
#include<stdlib.h>

//int main(void){
//	/*enum sex s = male;
//	printf("%d\n", s);*/
//	enum sex{male=2,female=4,secret=0};
//	printf("%d %d %d\n", male, female, secret);
//	return EXIT_SUCCESS;
//}
//union un
//{
//	int i;
//	char c;
//};
//int main(void){
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);
//	return EXIT_SUCCESS;
//}
//#include<time.h>
//float CalculerPi(void);
//int main(void){
//	float r, h;
//	scanf("%f %f", &r, &h);
//	float pi = CalculerPi();
//	printf("%f", pi);
//	float cl = 2 * pi*r;
//	float cs = pi*r*r;
//	float cvz = cs*h;
//	printf("圆的周长cl=%.2f,圆的面积cs=%.2f,圆柱的体积cvz=%.2f\n", cl, cs, cvz);
//	return EXIT_SUCCESS;
//}
//float CalculerPi(void)
//{
//	int n; double x, y; int count = 0;
//	scanf("%d", &n);
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		x = rand() % 1000 / 1000.0;
//		y = rand() % 1000 / 1000.0;
//		if (x*x + y*y < 1)
//			count++;
//	}
//	return 4 * (float)count / n;
//}
int main(void){
	/*char a;
	printf("请输入一个字母\n");
	scanf("%c", &a);
	printf("%c的ASCII码值为：%d\n", a, a);
	return EXIT_SUCCESS;*/
	//判断大小端字节序
	/*int a = 1;
	char* p = (char*)&a;
	if (1 == *p)
		printf("小端\n");
	else
		printf("大端\n");*/
	enum sex{male,female};
	printf("%d\n", sizeof(enum sex));
	return EXIT_SUCCESS;
}