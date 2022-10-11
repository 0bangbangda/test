#include<stdio.h>
#include<stdlib.h>
void initCarreMagique(const int n, int CarreMagique[][n]);
void calculerCarre(const int n, int CarreMagique[][n]);
int verifierCarre(const int n, const int CarreMagique[][n]);
void afficherCarreMagique(const int n, const int CarreMagique[][n]);
int main(void){
	int n;
	printf("Donner l'ordre impair du carre :");
	scanf("%d", &n);
	if ((n & 1) == 0){
		fprintf(stderr, "le carre doit etre d'ordre impair\n");
		return EXIT_FAILURE;
	}
	//n est impair
	int CarreMagique[n][n];
	initCarreMagique(n, CarreMagique);
	calculerCarre(n, CarreMagique);
	afficherCarreMagique(n, CarreMagique);
	if (verifierCarre(n, CarreMagique))
		afficherCarreMagique(n, CarreMagique);
	return EXIT_SUCCESS;
}
void initCarreMagique(const int n, int carreMagique[][n])
{
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++)
			carreMagique[i][j] = 0;
	}
}
void calculerCarre(const int n, int CarreMagique[][n])
{
	int j = n / 2, i = j + 1;
	const int nAUCarre = n*n;
	CarreMagique[i][j] = 1;
	for (int k = 2; k <= nAUCarre; k++){
		if (++i == n) i = 0;
		if (++j == n) j = 0;
		if (CarreMagique[i][j] != 0){
			i++; j--;
			if (i == n) i = 0;
			if (j == 0) j = n - 1;
		}
		CarreMagique[i][j] = k;
	}
}
int verifierCarre(const int n, const int CarreMagique[][n])
{
	int sumRef = 0;
	for (int j = 0; j<n; j++)
		sumRef += CarreMagique[0][j];
	for (int i = 1; i<n; i++){
		int sum = 0;
		for (int j = 0; j<n; j++)
			sum += CarreMagique[i][j];
		if (sum != sumRef)
			return 0;
	}
	for (int j = 0; j<n; j++){
		int sum = 0;
		for (int i = 0; i<n; i++)
			sum += CarreMagique[i][j];
		if (sum != sumRef)
			return 0;
	}
	return 1;
}
void afficherCarreMagique(const int n, const int CarreMagique[][n])
{
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++)
			printf("%3d", CarreMagique[i][j]);
		printf("\n");
	}
}
