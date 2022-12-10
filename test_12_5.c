#include<stdio.h>
#include<stdlib.h>
#define LG_MAX 100
typedef int BIGNATS[LG_MAX];
enum op{Addition=1,Soustraction,Multiplication,Division,Modulation,Comparason};
void zero(BIGNATS b);
void print(BIGNATS b);
void caractere(BIGNATS b);
void trans(BIGNATS b,int n);
void lire(BIGNATS b);
void lecture(BIGNATS b1, BIGNATS b2);
void liste();
void Add(BIGNATS b1, BIGNATS b2, BIGNATS b3);
void Sous(BIGNATS b1, BIGNATS b2, BIGNATS b3);
void Multi(BIGNATS b1, BIGNATS b2, BIGNATS b3);
int Cmp(BIGNATS b1, BIGNATS b2);
void printResult(int n);
void Div(BIGNATS b1, BIGNATS b2, BIGNATS b3);
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
		Multi(b1, b2, b3);
		printf("b1*b2=");
		print(b3);
		break;
	case Division:
		lecture(b1, b2, b3);
		Div(b1, b2, b3);
		printf("b1/b2=");
		print(b3);
		break;
	case Modulation:
		lecture(b1, b2);
		//Modul(b1, b2, b3);
		print(b3);
		break;
	case Comparason:
		lecture(b1, b2);
		printResult(Cmp(b1, b2));
		break;
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
	for (m = LG_MAX-1; m >=0; m--)
	if (b[m])
		break;
	if (m < 0)
		m = 0;
	for (int i = m ; i >= 0; i--)
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
	BIGNATS b4;
	zero(b4); 
	for (int i = 0; i < LG_MAX; i++){
		if (b1[i] + b2[i] + b4[i] >= 10){
			b4[i + 1]++;
			b4[i] = b1[i] + b2[i] + b4[i] - 10;
		}
		else
			b4[i] = b1[i] + b2[i] + b4[i];
	}
	for (int i = 0; i < LG_MAX; i++)
		b3[i] = b4[i];
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
void Multi(BIGNATS b1, BIGNATS b2, BIGNATS b3){
	while (1){
		if (b2[0] == 0){
			int k = 0;
			while ((!b2[++k]) && k < LG_MAX);
			if (k == LG_MAX)
				break;
			b2[k]--;
			while (--k != 0)
				b2[k] = 9;
			b2[0] = 10;
		}
		while (b2[0]){
			Add(b1, b3, b3);
			b2[0]--;
		}
	}
}
int Cmp(BIGNATS b1, BIGNATS b2)
{
	int i, j;
	for (i = LG_MAX - 1; i >= 0; i--){
		if (b1[i])
			break;
	}
	for (j = LG_MAX - 1; j >= 0; j--){
		if (b2[j])
			break;
	}
	if (i > j)
		return 1;
	else if (i < j)
		return -1;
	else{
		while (b1[i] == b2[j] && i >= 0 && j >= 0){
			i--; j--;
		}
		if (i < 0)
			return 0;
		else{
			if (b1[i]>b2[j])
				return 1;
			else
				return -1;
		}
	}
}
void printResult(int n)
{
	if (n == 1)
		printf("b1>b2\n");
	else if (n == -1)
		printf("b1<b2\n");
	else
		printf("b1=b2\n");
}
void Div(BIGNATS b1, BIGNATS b2, BIGNATS b3)
{
	while (Cmp(b1, b2) > 0){
		int i = 0;
		Sous(b1, b2, b1);
		if (b3[0] != 9)
			b3[0]++;
		else{
			b3[0] = 0;
			while (b3[++i] == 9)
				b3[i] = 0;
			b3[i]++;
		}
	}
	if (Cmp(b1, b2) == 0){
		int i = 0;
		if (b3[0] != 9)
			b3[0]++;
		else{
			b3[0] = 0;
			while (b3[++i] == 9)
				b3[i] = 0;
			b3[i]++;
		}
	}
}