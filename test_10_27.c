#include<stdio.h>
#include<stdlib.h>
//��������������������������������ô��εĺ���ʵ�֣������
//#define division(x,y) x%y
//int main(void){
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", division(a, b));
//	return EXIT_SUCCESS;
//}
//��������� = SQRT(S*(S - a)*(S - b)*(S - c)) 
//����S = (a + b + c) / 2��a��b��cΪ�����ε����ߡ� �����������εĺ꣬һ��������area��
//��һ����������S�� д�����ڳ������ô�ʵ�εĺ����������area��
#include<math.h>
#define s(a,b,c) (a+b+c)/2
#define area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c)) 
int main(void){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.3f", area(a,b,c,s(a,b,c)));
	return EXIT_SUCCESS;
}
