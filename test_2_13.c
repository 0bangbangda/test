#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main(int argc, char* argv[]){
//	int i;
//	printf("the programme receives %d parameters:\n", argc);
//	for (i = 0; i < argc; i++){
//		printf("%s\n", argv[i]);
//	}
//	return EXIT_SUCCESS;
//}
//ÅÐ¶ÏËØÊý
int isPrime(int n);
int main(int argc, char* argv[]){
	int i, ret, n;
	for (i = 1; i < argc - 1; i++){
		n = atoi(argv[i]);
		ret = isPrime(n);
		if (ret==-1){
			printf("%d is error\n", n);
		}
		else if (ret == 1){
			printf("%d is prime\n", n);
		}
		else{
			printf("%d is not prime\n", n);
		}
	}
	return EXIT_SUCCESS;
}
int isPrime(int n)
{
	if (n <= 0){
		return -1;
	}
	else if (n == 1){
		return 0;
	}
	else{
		for (int i = 2; i <= (int)sqrt(n); i++){
			if (n%i == 0){
				return 0;
			}
		}
	}
	return 1;
}