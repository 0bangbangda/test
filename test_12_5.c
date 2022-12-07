#include<stdio.h>
#include<stdlib.h>
#define LG_MAX 100
typedef int BIGNATS[LG_MAX];
enum op{Add=1,Sous,Multi,Div,Modul,Cmp};
void zero(BIGNATS b);
void print(BIGNATS b);
void caractere(BIGNATS b);
void trans(BIGNATS b,int n);
void lire(BIGNATS b);
void lecture(BIGNATS b1, BIGNATS b2);
void liste();
int main(void){
	//BIGNATS b;
	/*zero(b);
	caractere(b);
	print(b);*/
	BIGNATS b1, b2, b3;
	zero(b1);
	zero(b2);
	zero(b3);
	/*print(b1);
	printf("\n");
	print(b2);*/
	char op;
	scanf("%c", &op);
	switch (op){
	case '+':    
		lecture(b1, b2);
		Add(b1,b2,b3);
		break;   
	case '-':
		lecture(b1, b2);
		Sous(b1, b2, b3);
		break;
	case '*':
		lecture(b1, b2);
		Multi(b1, b2, b3);
		break;
	case '/':
		lecture(b1, b2);
		Div(b1, b2, b3);
		break;
	case '%':
		lecture(b1, b2);
		Modul(b1, b2, b3);
		break;
	case 'c':
		int ret = Cmp(b1, b2);
		printResult(ret);
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
	int m;
	for (m = 0; m < LG_MAX; m++)
	if (!b[m])
		break;
	for (int i = m - 1; i >= 0; i--)
		printf("%d", b[i]);
	printf("\n");

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
	char arr[LG_MAX] = { 0 };
	scanf("%s", arr);
	int m;
	for (m = 0; m < LG_MAX; m++)
	if (!arr[m])
		break;
	for (int i = m-1, j = 0; i >= 0; i--, j++){
		b[j] = arr[i] - '0';
	}
}
void lecture(BIGNATS b1, BIGNATS b2)
{
	printf("b1:");
	lire(b1);
	printf("b2:");
	lire(b2);
}
void liste()
{
	printf("choisir:\n");
	
}