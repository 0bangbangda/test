#include<stdio.h>
#include<stdlib.h>
const int anneemin = 1583;
int joursDansMois(int m, int a);
int bissextile(int a);
int valide(int j, int m, int a);
int main(void){
	int jour, mois, annee;
	scanf("%2d/%2d/%4d", &jour, &mois, &annee);
	int val = valide(jour, mois, annee);
	if (val == 0)
		fprintf(stderr, "la date %d/%d/%d est invalide", jour, mois, annee);
	else{
		if (jour<joursDansMois(mois, annee))
			jour++;
		else{
			jour = 1;
			if (mois<12)
				mois++;
			else{
				mois = 1;
				annee++;
			}
		}
	}
	printf("lendemain est %d/%d/%d.\n", jour, mois, annee);
	return EXIT_SUCCESS;
}
int bissextile(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		return 1;
	else
		return 0;
}
int joursDansMois(int m, int a)
{
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:return 31;
	case 4:
	case 6:
	case 9:
	case 11:return 30;
	case 2:
		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)return 29;else return 28;
	}
	return EXIT_SUCCESS;
}
int valide(int j, int m, int a)
{
	if (a<anneemin) return 0;
	if (m<1 || m>12)
		return 0;
	if (j<joursDansMois(m, a))
		return 1;
	else
		return 0;

}
