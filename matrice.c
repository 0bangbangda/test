#include"matrice.h"
matrice matriceNulle(const int m, const int n)
{
	matrice mat = { m, n, NULL };
	mat.mat = (T*)calloc(m*n, sizeof(double));
	return mat;
}
T getM(const matrice m, const int i, const int j)
{
	return m.mat[(i - 1) * m.nbc + j - 1];
}
void setM(matrice *m, const int i, const int j, const T x)
{
	m->mat[(i - 1)*m->nbc + j - 1] = x;
}
void echangerLignesM(matrice *m, const int i, const int j)
{
	for (int k = 0; k < m->nbc; k++)
	{
		T tmp = m->mat[(i - 1)*m->nbc + k];
		m->mat[(i - 1)*m->nbc + k] = m->mat[(j - 1)*m->nbc + k];
		m->mat[(j - 1)*m->nbc + k] = tmp;
	}
}
void ecrireMatrice(const matrice m)
{
	for (int i = 0; i < m.nbl; i++)
	{
		for (int j = 0; j < m.nbc; j++)
		{
			printf("%lf ", m.mat[i*m.nbc+j]);
		}
		printf("\n");
	}
}
void lireMatrice(matrice *m, const char *f)
{
	FILE *fp = fopen(f, "r");
	if (fp == NULL)
	{
		perror(f);
		exit(errno);
	}
	fscanf(fp, "%d %d", &m->nbl, &m->nbc);
	m->mat = (T*)malloc(m->nbl*m->nbc*sizeof(double));
	int k = 0;
	T x;
	while ((fscanf(fp, "%lf", &x))> 0)
	{
		if (k >= m->nbl*m->nbc)
			break;
		setM(m, k / m->nbc + 1, k%m->nbc + 1,x);
		++k;
	}
	fclose(fp);
}
int getNbLignes(const matrice m)
{
	return m.nbl;
}
int getNbCols(const matrice m)
{
	return m.nbc;
}