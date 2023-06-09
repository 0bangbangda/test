#define _CRT_SECURE_NO_WARNINGS
#include"matriceC.h"
#include"matrice.h"
//matriceC matriceCNulle(const int m, const int n)
//{
//	matriceC mc = { m, n, NULL };
//	return mc;
//}
void matriceCNulle(matriceC *mc, const char *f)
{
	FILE *fp = fopen(f, "r");
	if (fp == NULL)
	{
		perror(f);
		exit(errno);
	}
	fscanf(fp, "%d %d", &mc->nbl, &mc->nbc);
	fclose(fp);
}
void push_back(list *tail, const int l, const int c, const T x)
{
	list newnode = (list)malloc(sizeof(struct node));
	newnode->l = l;
	newnode->c = c;
	newnode->val = x;
	newnode->suivant = NULL;
	(*tail)->suivant = newnode;
	*tail = newnode;
}
void lireMatriceC(matriceC *mc, const char *f)
{
	matriceCNulle(mc, f);
	FILE *fp = fopen(f, "r");
	if (fp == NULL)
	{
		perror(f);
		exit(errno);
	}
	matrice m;
	lireMatrice(&m, f);
	list tail = (list)malloc(sizeof(struct node));
	mc->mat = tail;
	for (int i = 0; i <getNbLignes(m); i++)
	{
		for (int j = 0; j < getNbCols(m); j++)
		{
			if (getM(m, i + 1, j + 1))
			{
				push_back(&tail, i, j, getM(m, i + 1, j + 1));
			}
		}
	}
	list tmp = mc->mat;
	mc->mat = tmp->suivant;
	free(tmp);
	fclose(fp);
}
void ecrireMatriceC(matriceC mc)
{
	list cur = mc.mat;
	while (cur)
	{
		printf("%lf->", cur->val);
		cur = cur->suivant;
	}
	printf("NULL\n");
}
matrice ToMatriceSimple(matriceC mc)
{
	matrice m = matriceNulle(mc.nbl, mc.nbc);
	list cur = mc.mat;
	while (cur)
	{
		setM(&m, cur->l + 1, cur->c + 1, cur->val);
		cur = cur->suivant;
	}
	return m;
}
