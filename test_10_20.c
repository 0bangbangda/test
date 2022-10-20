#include<stdio.h>
#include<stdlib.h>
//猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 
//第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。 
//到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
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
//打印出一定范围内的所有素数
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