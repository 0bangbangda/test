#include<stdio.h>
#include<stdlib.h>
#define LG_MAX 100
typedef int BIGNATS[LG_MAX];
enum op{Addition=1,Soustraction,Multiplication,Division,Modulation,Comparation};
void zero(BIGNATS b);
void print(BIGNATS b);
void caractere(BIGNATS b);
void trans(BIGNATS b,int n);
void lire(BIGNATS b);
void lecture(BIGNATS b1, BIGNATS b2);
void liste();
void Add(BIGNATS b1, BIGNATS b2, BIGNATS b3);
void Sous(BIGNATS b1, BIGNATS b2, BIGNATS b3);
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
	liste();
	int op;
	scanf("%d", &op);
	switch (op){
	case Addition:    
		lecture(b1, b2);
		Add(b1,b2,b3);
		printf("b1+b2=");
		print(b3);
		break;   
	case Soustraction:
		printf("Attention:b1>b2\n");
		lecture(b1, b2);
		Sous(b1, b2, b3);
		printf("b1-b2=");
		print(b3);
		break;
	case Multiplication:
		lecture(b1, b2);
		//Multi(b1, b2, b3);
		print(b3);
		break;
	case Division:
		lecture(b1, b2);
		//Div(b1, b2, b3);
		print(b3);
		break;
	case Modulation:
		lecture(b1, b2);
		//Modul(b1, b2, b3);
		print(b3);
		break;
	case Comparation:
		//int ret = Cmp(b1, b2);
		//printResult(ret);
		print(b3);
	default:
		fprintf(stderr, "error\n");
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
	printf("1.Addition\n");
	printf("2.Soustraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulation\n");
	printf("6.Comparation\n");
	printf("choisir:");
	
}
void Add(BIGNATS b1, BIGNATS b2, BIGNATS b3)
{
	for (int i = 0; i < LG_MAX; i++){
		if ((b1[i] + b2[i]) >= 10){
			b3[i] = b1[i] + b2[i] - 10;
			b1[i + 1]++;
		}
		else
			b3[i] = b1[i] + b2[i];
	}
}
void Sous(BIGNATS b1, BIGNATS b2, BIGNATS b3)
{
	for (int i = 0; i < LG_MAX; i++){
		if (b1[i]>=b2[i])
			b3[i] = b1[i] - b2[i];
		else{
			int k = i;
			while (!b1[++k]);
			b1[k]--;
			while (--k != i)
				b1[k] = 9;
			b1[i] += 10;
			b3[i] = b1[i] - b2[i];
		}
	}
}