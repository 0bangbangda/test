//��ӡ������"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸñ��� ���磺153��һ��ˮ�ɻ�������Ϊ153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3��
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//double flower(int i);
//int main(void){
//	int n = 1000;
//	for (int i = 100; i <= n; i++){
//		if ((int)flower(i) == i)
//			printf("%d\n", i);
//	}
//	return EXIT_SUCCESS;
//}
//double flower(int i)
//{
//	if (i > 9)
//		return pow((double)(i % 10), 3.0) + flower(i / 10);
//	return pow((double)i,3.0);
//}
//��һ�������У� 2 / 1 3 / 2 5 / 3 8 / 5 13 / 8 21 / 13......���������е�ǰN��֮�ͣ�������λС����
//int main(void){
//	float x = 2, y = 1, sum = 0;
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++){
//		sum += x / y;
//		float tmp = x;
//		x = x + y;
//		y = tmp;
//	}
//	printf("%.2f", sum);
//	return EXIT_SUCCESS;
//}
//һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ������ߣ������������ף� ������λС��
int main(void){
	int M, N;
	scanf("%d %d", &M, &N);
	double s = (double)M;
	for (double i = 2; i <= N; i++){
		s += M / pow(2.0, i-1) * 2;
	}
	printf("%.2f %.2f", M / pow(2.0, (double)N), s);
	return EXIT_SUCCESS;
}