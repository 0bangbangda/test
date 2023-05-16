#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
#define MAX 100
typedef struct pile
{
	int size;
	int elem[MAX];
}Pile;
extern const Pile initPile;
int estValid(const Pile *p);
void empiler(Pile *p,const int x);
void depiler(Pile *p);
int sommet(Pile *p);
