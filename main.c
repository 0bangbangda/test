#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"matrice.h"
#include"vecteur.h"
void test1()
{
	matrice m = matriceNulle(4, 3);
	ecrireMatrice(m);
	//int k = 1;
	/*for (int i = 0; i < m.nbl; i++)
	{
		for (int j = 0; j < m.nbc; j++)
		{
			setM(&m,i+1, j+1, k);
			++k;
		}
	}*/
	/*FILE *fp = fopen("test.txt", "w");
	for (T x = 1.0; x <= m.nbc*m.nbl; x++)
	{
		fprintf(fp, "%lf ", x);
	}
	fclose(fp);*/
	lireMatrice(&m, "test.txt");
	ecrireMatrice(m);
}
void test2()
{
	vecteur v = vecteurNulle(10);
	ecrireVecteur(v);
	/*for (int i = 1; i <= v.nbl; i++)
	{
		setV(&v, i, i);
	}*/
	lireVecteur(&v, "test.txt");
	ecrireVecteur(v);
}
void GaussRSL(matrice A, vecteur B, vecteur *X)
{
	
	for (int i = 0; i < getNbLignes(A); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == i)
			{
				T divi = getM(A, j+1, j+1);
				for (int k = j; k < getNbCols(A); k++)
				{
					setM(&A, j + 1, k + 1, getM(A, j + 1, k + 1) / divi);
				}
				setV(&B, j+1, getV(B, j+1) / divi);
			}
			else
			{
				T divi = -getM(A, i+1, j+1);
				for (int k = j; k < getNbCols(A); k++)
				{
					setM(&A, i+1, k+1, getM(A, i+1, k+1) + getM(A, j+1, k+1)*divi);
				}
				setV(&B, i+1, getV(B, i+1) + getV(B, j+1)*divi);
			}
		}
	}
}
void test3()
{
	matrice A;
	vecteur B, X;
	lireMatrice(&A, "matrice.txt");
	lireVecteur(&B, "vecteur.txt");
	GaussRSL(A, B, &X);
	ecrireMatrice(A);
	ecrireVecteur(B);
}
int main(void)
{
//	test1();
	//test2();
	test3();
	system("pause");
	return EXIT_SUCCESS;
}