#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct Complexe
{
double reel;
double img;
}Complexe;
extern const double pi;
extern const double eps;
extern const Complexe I;
Complexe initComplexe(double reel,double img);
void ecrireComplexe(Complexe c);
double partieReelle(const Complexe *c);
double partieImaginaire(const Complexe *c);
double rho(const Complexe *c);
double theta(const Complexe *c);
double theta2(const Complexe *c);
Complexe polComplexe(double rho,double theta);
Complexe plus(const Complexe *a,const Complexe *b);
Complexe moins(const Complexe *a,const Complexe *b);
Complexe multi(const Complexe *a,const Complexe *b);
Complexe Div(const Complexe *a,const Complexe *b);
int egal(Complexe *c1,Complexe *c2);
int different(Complexe *c1,Complexe *c2);
