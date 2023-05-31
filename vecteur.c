#include"vecteur.h"
vecteur vecteurNulle(const int n)
{
	vecteur v = { n, NULL };
	v.vect = (T*)calloc(n, sizeof(double));
	return v;
}
T getV(const vecteur v, const int i)
{
	return v.vect[i - 1];
}
void setV(vecteur *v, const int i, const T x)
{
	v->vect[i - 1] = x;
}
void echangerLignesV(vecteur *v, const int i, const int j)
{
	T tmp = v->vect[i - 1];
	v->vect[i - 1] = v->vect[j - 1];
	v->vect[j - 1] = tmp;
}
void ecrireVecteur(const vecteur v)
{
	for (int i = 0; i < v.nbl; i++)
	{
		printf("%lf\n", v.vect[i]);
	}
}
void lireVecteur(vecteur *v, const char *f)
{
	FILE *fp = fopen(f, "r");
	if (fp == NULL)
	{
		perror(f);
		exit(errno);
	}
	fscanf(fp, "%d", &v->nbl);
	v->vect = (T*)malloc(sizeof(double)*v->nbl);
	int k = 1;
	T x;
	while ((fscanf(fp, "%lf", &x)) > 0)
	{
		if (k >v->nbl)
			break;
		setV(v, k, x);
		++k;
	}
	fclose(fp);
}
int getNbLignesV(const vecteur v)
{
	return v.nbl;
}