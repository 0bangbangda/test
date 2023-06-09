#include<stdio.h>
#include<stdlib.h>
#include"matrice.h"
typedef double T;
typedef struct node
{
	int l;
	int c;
	T val;
	struct node *suivant;
	
}*list;
typedef struct matriceC
{
	int nbl;
	int nbc;
	list mat;
}matriceC;
//extern matriceC matriceCNulle(const int m, const int n);
extern void matriceCNulle(matriceC *mc, const char *f);
extern void lireMatriceC(matriceC *mc, const char *f);
extern void push_back(list *tail, const int l, const int c, const T x);
extern matrice ToMatriceSimple(matriceC mc);