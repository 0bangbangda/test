//�����year������һ���꣬���б������Ƿ����ꡣ
//��ʾ���������Զ���ΪLEAP_YEAR���β�Ϊy���ȶ�������ʽΪ #define LEAP_YEAR(y) ��������Ƶ��ַ�����
//�����Ƿ���������������"L", �����"N"
/*include<stdio.h>
#include<stdlib.h>
//#define LEAP_YEAR(y) a=y%4,b=y%100,c=y%400
//int main(void){
//	int a, b, c, y;
//	scanf("%d", &y);
//	LEAP_YEAR(y);
//	if ((0 == a && 0 != b) || 0 == c)
//		printf("L");
//	else
//		printf("N");
//	return EXIT_SUCCESS;
//}*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	float a;
	scanf("%f", &a);
	for (int i = 1; i <= 3;i++){
		for (int j = 0; j < i; j++)
			printf("%6.2f ", a);
		printf("\n");
	}
	return EXIT_SUCCESS;
}