#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<libsx.h>
#define ZoneAffichSize 30
typedef struct
{
	Widget ZoneAffich;
	double valeur;
	double taux;
}ValeurCourante;
void quit(Widget w,void *data);
void yuans(Widget w,void *data);
void euros(Widget w,void *data);
void tauxchange(Widget w,void *data);
void initValeurCourante(ValeurCourante *d);
void SetZoneAffich(ValeurCourante *d,Widget w);
void SetValeur(ValeurCourante *d,double x);
void SetTauxDeChange(ValeurCourante *d,double x);
double GetValeur(ValeurCourante *d);
void afficher(ValeurCourante *d);
