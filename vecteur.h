#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
typedef double T;
typedef struct
{
	int nbl;
	T *vect;
}vecteur;
extern vecteur vecteurNulle(const int n);
extern T getV(const vecteur v, const int i);
extern void setV(vecteur *v, const int i, const T x);
extern void echangerLignesV(vecteur *v, const int i, const int j);
extern void ecrireVecteur(const vecteur v);
extern void lireVecteur(vecteur *v, const char *f);
extern int getNbLignesV(const vecteur v);
