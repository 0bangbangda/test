#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LENGTH 10
typedef struct
{
	int jour,mois,annee;
	char nomDuMois[LENGTH];
}Date;
int bissextile(int a)
{
	return ((a%4==0&&a%100!=0)||a%400==0)?1:0;
}
int joursDanMois(int a,int m)
{
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:return 31;break;
		case 4:
		case 6:
		case 9:
		case 11:return 30;break;
		case 2:return bissextile(a)?29:28;break;
		default:fprintf(stderr,"error\n");
			return EXIT_FAILURE;
	}
}
int dateValid(Date *d)
{
	char* nomDuMois[12]={"Janvier","Fevrier","Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
	if(d->annee<1000) return 0;
	if(d->mois>12||d->mois<1) return 0;
	if(d->jour<1||d->jour>joursDanMois(d->annee,d->mois)) return 0;
	if(strcmp(d->nomDuMois,nomDuMois[d->mois-1])) return 0;
	return 1;
}
int main(void)
{
	Date d1={18,4,2017,"Avril"};
	Date d2={33,13,2017,"Mars"};
	if(dateValid(&d1)) printf("La date %d/%d/%d %s est valide\n",d1.jour,d1.mois,d1.annee,d1.nomDuMois);
	else  printf("La date %d/%d/%d %s est invalide\n",d1.jour,d1.mois,d1.annee,d1.nomDuMois);	
	if(dateValid(&d2)) printf("La date %d/%d/%d %s est valide\n",d2.jour,d2.mois,d2.annee,d2.nomDuMois);
	else  printf("La date %d/%d/%d %s est invalide\n",d2.jour,d2.mois,d2.annee,d2.nomDuMois);

	return EXIT_SUCCESS;
}
