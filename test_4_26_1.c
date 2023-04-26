#include<stdio.h>
#include<stdlib.h>
#define N 5
#define N1 7
#define N2 3
int main(void)
{
	int *p = (int*)malloc(N*sizeof(int));
	if (p == NULL){
		printf("memory allocated failed!\n");
		return EXIT_FAILURE;
	}
	for (int i = 0; i < N; i++)
	{
		p[i] = i;
		printf("p[%d] = %d\t", i, i);
	}
	putchar('\n');
	int *large_p = (int*)realloc(p, N1*sizeof(int));
	if (large_p == NULL)
	{
		printf("memory allocated failed!\n");
		return EXIT_FAILURE;
	}
	for (int i = N; i < N1; i++)
	{
		large_p[i] = 9;
	}
	for (int i = 0; i < N1; i++)
		printf("large_p[%d] = %d\t", i, large_p[i]);
	printf("\n");
	int *small_p = (int*)realloc(large_p, N2*sizeof(int));
	for (int i = 0; i < N2; i++)
		printf("small_p[%d] = %d\t", i, large_p[i]);
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}