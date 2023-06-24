#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<libsx.h>
#include"matrice.h"
#include"vecteur.h"
#include<math.h>
typedef struct
{
	matrice A;
	vecteur B;
	vecteur X;
	int l;
}SysLineaire;
static const double eps = 1e-10;
static Widget ZoneAffich1;
static Widget ZoneAffich2;
extern void menu(Widget w,void *data);
extern void resolution(Widget w,void *data);
extern void etape(Widget w,void *data);
extern void quit(Widget w,void *data);
extern void charger(Widget,void *data);
extern void visualiser(Widget w,void *data);
extern void annuler(Widget w,void *data);
