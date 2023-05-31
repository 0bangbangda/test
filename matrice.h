#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
typedef double T;
typedef struct
{
	int nbl;
	int nbc;
	T *mat;
}matrice;
extern matrice matriceNulle(const int m, const int n);
extern T getM(const matrice m, const int i, const int j);
extern void setM(matrice *m, const int i, const int j, const T x);
extern void echangerLignesM(matrice *m, const int i, const int j);
extern void ecrireMatrice(const matrice m);
extern void lireMatrice(matrice *m, const char *f);
extern int getNbLignes(const matrice m);
extern int getNbCols(const matrice m);