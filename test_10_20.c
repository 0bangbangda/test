#include<stdio.h>
#include<stdlib.h>
//���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ���� 
//�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ���� 
//����N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�������ӡ�
//int main(void){
//	int rest = 1;
//	int N, total;
//	scanf("%d", &N);
//	for (int i = 0; i < N-1; i++){
//		rest = (rest + 1) * 2;
//	}
//	total = rest;
//	printf("%d", total);
//	return EXIT_SUCCESS;
//}
#include<math.h>
//��ӡ��һ����Χ�ڵ���������
int main(void){
	int N;
	scanf("%d", &N);
	for (int i = 2; i <= N; i++){
		int j;
		for ( j = 2; j <= sqrt(i); j++){
			if (i%j == 0)
				break;
			}
		if (j > sqrt(i))
			printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}