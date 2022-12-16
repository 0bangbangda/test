/*
* L’objectif de ce projet est de définir et de manipuler des grands entiers naturels.
* Pour manipuler des entiers naturels(positifs ou nuls) de taille quelconque, en particulier plus
* grands que les entiers max des types entiers prédéfinis, vous allez définir le type BigNat.Les chiffres
* des entiers naturels BigNat, par défaut en base 10, seront conservés dans un tableau d’entiers.
*
*/
#include<stdio.h>
#include<stdlib.h>
#define LG_MAX 100 //LG_MAX est le nombre d'éléments d'un tableau.
typedef int BIGNATS[LG_MAX];
enum op{Addition=1,Soustraction,Multiplication,Division,Modulation,Comparason,Factorielle};
void zero(BIGNATS b);
void écriture(BIGNATS b);
void trans(BIGNATS b,int n);
void lire(BIGNATS b);
void lecture(BIGNATS b1, BIGNATS b2);
void liste();
void Add(const BIGNATS b1,const BIGNATS b2, BIGNATS b3);
void Sous(BIGNATS b1, const BIGNATS b2, BIGNATS b3);
void Multi(const BIGNATS b1, BIGNATS b2, BIGNATS b3);
int Cmp(const BIGNATS b1, const BIGNATS b2);
void afficherResult(const int n);
void Div(BIGNATS b1, const BIGNATS b2, BIGNATS b3);
void Modul(BIGNATS b1, BIGNATS b2, BIGNATS b3);
void fact(const int n, BIGNATS b);
void assignation(BIGNATS b1,const BIGNATS b2);
int readNextInt();
int main(void){
	BIGNATS b1, b2, b3;
	int n;
	//b1,b2 et b3 initialisent à 0;
	zero(b1);
	zero(b2);
	zero(b3);
	//les commands
	liste();
	switch (readNextInt()){
	case Addition:    
		lecture(b1, b2);
		Add(b1,b2,b3);//b3=b1+b2
		printf("b1+b2=");
		écriture(b3);
		break;   
	case Soustraction:
		printf("Attention:b1>b2\n");
		lecture(b1, b2);
		Sous(b1, b2, b3);//b3=b1-b2
		printf("b1-b2=");
		écriture(b3);
		break;
	case Multiplication:
		lecture(b1, b2);
		Multi(b1, b2, b3);//b3=b1*b2
		printf("b1*b2=");
		écriture(b3);
		break;
	case Division:
		lecture(b1, b2, b3);
		Div(b1, b2, b3);//b3=b1/b2
		printf("b1/b2=");
		écriture(b3);
		break;
	case Modulation:
		lecture(b1, b2);
		Modul(b1, b2, b3);//b3=b1%b2
		printf("b1%%b2=");
		écriture(b3);
		break;
	case Comparason:
		lecture(b1, b2);
		afficherResult(Cmp(b1, b2));
		break;
	case Factorielle:
		fact(n=readNextInt(), b3);//place la valeur de factorielle de n à b3
		printf("%d!=",n);
		écriture(b3);
		break;
	default:
		fprintf(stderr, "error\n");
	}
	return EXIT_SUCCESS;
}
/*
* rôle:permette l'initialisation à 0 d'un BIGNATS
*/
void zero(BIGNATS b)
{
	for (int i = 0; i < LG_MAX; i++)
		b[i] = 0;//mettre 0 dans les éléments
}
/*
rôle:affiche la valeur d'un BIGNATS
*/
void écriture(BIGNATS b)
{
	int m;//m est un indice
	//trouve le premier élément différent de 0 de droite à gauche dans b
	for (m = LG_MAX-1; m >=0; m--)
	if (b[m]!=0)
		break;//Si b[m] n 'est pas égal à 0,sorte de la boucle
	if (m < 0)
		m = 0;//Si m est moins que 0,indique que chaque élément dans b est 0
	for (int i = m ; i >= 0; i--)
		printf("%d", b[i]);//affiche tous les éléments d'indice m àindice 0
	printf("\n");
}
/*
rôle:permettre l'initialisation d’un BigNat à partir d’un entier naturel
*/
void trans(BIGNATS b,int n)
{
	int indice = 0;//l'indice du premier élément dans b
	while (n > 9){
		//n est un nombre à plusieurs chiffres
	    //les chiffres des entiers naturels BIGNAT ,par défaut en base 10
		//mettre des résidu dans les n-1 premiers éléments
		b[indice] = n % 10;
		n = n / 10;
		indice++;
	}
	b[indice] = n;
}
/*
antécédent:chaque élément d'un BIGNATS est 0;
rôle:place des entiers naturels (positifs ou nuls) de taille quelconque dans un BIGNATS
*/
void lire(BIGNATS b){
	//permettre l'initialisation à partir d'une chaîne de caractères
	char arr[LG_MAX] = { 0 };//mettre '\0' dans les éléments
	scanf("%s", arr);
	int m;
	//cherche l'indice de la dernier éléments qui n'est pas zéro
	for (m = 0; m < LG_MAX; m++)
	if (!arr[m])
		break;//arr[m] est la premier '\0'
	for (int i = m-1, j = 0; i >= 0; i--, j++){
		b[j] = arr[i] - '0';//place la chaîne de nombre de droite à gauche dans b de gauche à droite
	}
}/*
antécédent:b1 et b2 sont à 0;
*/
void lecture(BIGNATS b1, BIGNATS b2)
{
	printf("b1=");
	lire(b1);
	printf("b2=");
	lire(b2);
}
/*
***************************************************************
*
* les commandes
*
****************************************************************
*/
void liste()
{
	printf("1.Addition\n");
	printf("2.Soustraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulation\n");
	printf("6.Comparation\n");
	printf("7.Factorielle\n");
	printf("choisir:");
	
}
/*
Concéquent:b3=b1+b2
*/
void Add(const BIGNATS b1, const BIGNATS b2, BIGNATS b3)
{
	BIGNATS b4;
	zero(b4); 
	for (int i = 0; i < LG_MAX; i++){
		if (b1[i] + b2[i] + b4[i] >= 10){//retien un chiffre
			b4[i + 1]++;
			b4[i] = b1[i] + b2[i] + b4[i] - 10;
		}
		else
			b4[i] = b1[i] + b2[i] + b4[i];
	}
	assignation(b3, b4);
}
/*
antécétent:b1>b2
Concéquent:b3=b1-b2
*/
void Sous(BIGNATS b1, const BIGNATS b2, BIGNATS b3)
{
	for (int i = 0; i < LG_MAX; i++){
		if (b1[i]>=b2[i])
			b3[i] = b1[i] - b2[i];
		else{//emprunte dix du prochain élément qui n'est pas zéro
			int k = i;
			while (!b1[++k]);//b1[k] n'est pas  zéro
			b1[k]--;
			while (--k != i)
				b1[k] = 9;
			b1[i] += 10;
			b3[i] = b1[i] - b2[i];
		}
	}
}
/*
Concéquent:b3=b1*b2
*/
void Multi(const BIGNATS b1, BIGNATS b2, BIGNATS b3){
	while (1){
		if (b2[0] == 0){//emprunte dix du prochain élément qui n'est pas zéro
			int k = 0;
			while ((!b2[++k]) && k < LG_MAX);
			if (k == LG_MAX)
				break;
			b2[k]--;
			while (--k != 0)
				b2[k] = 9;
			b2[0] = 10;
		}
		//b2 b1 sont additionnés
		while (b2[0]){
			Add(b1, b3, b3);
			b2[0]--;
		}
	}
}
/*
Concéquent:
*/
int Cmp(const BIGNATS b1, const BIGNATS b2)
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
int CmpPlus(const BIGNATS b1, const BIGNATS b2)
{

}
void afficherResult(const int n)
{
	if (n == 1)
		printf("b1>b2\n");
	else if (n == -1)
		printf("b1<b2\n");
	else
		printf("b1=b2\n");
}
/*
Concéquent:b3=b1/b2
*/
void Div(BIGNATS b1, const BIGNATS b2, BIGNATS b3)
{
	// Si b1>b2,le nombre de cycle est la division
	while (Cmp(b1, b2) > 0){//b2 moins b1 jusqu'à b1<b2
		int i = 0;
		Sous(b1, b2, b1);//b1=b1-b2
		if (b3[0] != 9)
			b3[0]++;
		else{//retien un chiffre
			b3[0] = 0;
			while (b3[++i] == 9)
				b3[i] = 0;
			b3[i]++;
		}
	}
	//b1=b2 ou b1<b2
	//Si b1<b2 ,la division est 0
	if (Cmp(b1, b2) == 0){
		int i = 0;
		if (b3[0] != 9)
			b3[0]++;
		else{//retien un chiffre
			b3[0] = 0;
			while (b3[++i] == 9)
				b3[i] = 0;
			b3[i]++;
		}
	}
}
/*
Concéquent:b3=b1%b2
*/
void Modul(BIGNATS b1, BIGNATS b2, BIGNATS b3)
{   //Si b1>b2,b1 moins b2 jusqu'a b1 <b2
	while (Cmp(b1, b2) == 1)
		Sous(b1, b2, b1);
	//b1<b2,la modulation est b1
	if (Cmp(b1, b2) == -1){
		assignation(b3, b1);
	}
}
/*
rôle:calculer n!
*/
void fact(const int n, BIGNATS b)
{
	BIGNATS b2, b3;
	zero(b2);
	zero(b);
	zero(b3);
	b3[0] = 1;
	for (int i = 1; i <= n; i++){
		trans(b2, i);
		Multi(b3, b2, b);
		assignation(b3, b);
		zero(b);
	}
	assignation(b, b3);
}
/*
rôle:permettre l'initialisation d’un BigNat à partir d’un autre BigNat.
*/
void assignation(BIGNATS b1, const BIGNATS b2)
{
	for (int i = 0; i < LG_MAX; i++)
		b1[i] = b2[i];
}
/*
rôle:renvoie le prochain entier lu sur l'E/S
*/
int readNextInt()
{
	int n;
	scanf("%d", &n);
	return n;
}