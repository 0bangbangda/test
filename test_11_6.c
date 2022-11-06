#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
int isprime(int x);
int main(void){ 
	int m, n; int sum = 0;
	scanf("%d %d", &m, &n);
	assert(m < n);
	for (int i = m; i <= n; i++)
	{
		if (1 == i)
			i++;
		if (isprime(i))
			sum += i;
	}
	printf("%d", sum);
	return EXIT_SUCCESS; 
}
int isprime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
			return 0;
	}
	return 1;
}

	