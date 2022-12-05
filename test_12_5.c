#include<stdio.h>
#include<stdlib.h>
#define LG_MAX 100
typedef int BIGNATS[LG_MAX];
void zero(BIGNATS b);
void print(BIGNATS b);
void caractere(BIGNATS b);
void trans(BIGNATS b,int n);
void lire(BIGNATS b);
int main(void){
	BIGNATS b;
	/*zero(b);
	caractere(b);
	print(b);*/
	BIGNATS b1, b2;
	printf("b1:");
	lire(b1);
	printf("b2:");
	lire(b2);
	char op;
	scanf("%c", &op);
	switch (op){
	case '+':                                
		Add();
		break;   
	case '-':
		break;
	case '*':
		break;
	case '/':
		break;
	}
	return EXIT_SUCCESS;
}
void zero(BIGNATS b)
{
	for (int i = 0; i < LG_MAX; i++){
		b[i] = 0;
	}
}
void print(BIGNATS b)
{
	for (int i = 0; i < LG_MAX; i++){
		printf("%d ", b[i]);
	}
}
void caractere(BIGNATS b)
{
	char c; int som = 0;
	while ((c = getchar()) != '\n')
	{
		som += c;
	}
	trans(b, som);

}
void trans(BIGNATS b,int n)
{
	int indice = 0;
	while (n > 9){
		b[indice] = n % 10;
		n = n / 10;
		indice++;
	}
	b[indice] = n;
}
void lire(BIGNATS b){
	
}