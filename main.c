#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"matrice.h"
#include"vecteur.h"
const double eps = 1e-10;
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
				while (getM(A, j+1, j+1) == 0)
				{
					int l;
					for (l = j; getM(A, l+1, j+1) == 0; l++)
					{
						if (l == getNbLignes(A) - 1)
						{
							fprintf(stderr, "Le syst¨¨me est li¨¦ et n¡¯admet pas de solution unique\n");
							return;
						}
					}
					echangerLignesM(&A, j+1, l+1);
					echangerLignesV(&B, j+1, l+1);
					for (j = 0; j < i; j++)
					{
						T divi = -getM(A, i + 1, j + 1);
						for (int k = j; k < getNbCols(A); k++)
						{
							setM(&A, i + 1, k + 1, getM(A, i + 1, k + 1) + getM(A, j + 1, k + 1)*divi);
							if (fabs(getM(A, i + 1, k + 1) )< eps)
							{
								setM(&A, i + 1, k + 1, 0);
							}
						}
						setV(&B, i + 1, getV(B, i + 1) + getV(B, j + 1)*divi);
						if (fabs(getV(B, i + 1)) < eps)
						{
							setV(&B, i + 1, 0);
						}
					}
				}
				T divi = getM(A, j+1, j+1);
				for (int k = j; k < getNbCols(A); k++)
				{
					setM(&A, j + 1, k + 1, getM(A, j + 1, k + 1) / divi);
					if (fabs(getM(A, j + 1, k + 1))< eps)
					{
						setM(&A, j + 1, k + 1, 0);
					}
				}
				setV(&B, j+1, getV(B, j+1) / divi);
				if (fabs(getV(B, j + 1)) < eps)
				{
					setV(&B, i + 1, 0);
				}
			}
			else
			{
				T divi = -getM(A, i+1, j+1);
				for (int k = j; k < getNbCols(A); k++)
				{
					setM(&A, i+1, k+1, getM(A, i+1, k+1) + getM(A, j+1, k+1)*divi);
					if (fabs(getM(A, i + 1, k + 1))< eps)
					{
						setM(&A, i + 1, k + 1, 0);
					}

				}
				setV(&B, i+1, getV(B, i+1) + getV(B, j+1)*divi);
				if (fabs(getV(B, i + 1)) < eps)
				{
					setV(&B, i + 1, 0);
				}
			}
		}
		for (int i = getNbLignes(A); i >= 0; i--)
		{
			setV(X, i + 1, getV(B, i + 1));
			for (int j = i + 1; j < getNbCols(A); j++)
			{
				setV(X, i + 1, getV(*X, i + 1) - getM(A, i + 1, j + 1)*getV(*X, j + 1));
				if (fabs(getV(B, i + 1)) < eps)
				{
					setV(&B, i + 1, 0);
				}
			}
		}
	}
	ecrireVecteur(*X);
}
void test3()
{
	matrice A;
	vecteur B, X;
	lireMatrice(&A, "matrice.txt");
	lireVecteur(&B, "vecteur.txt");
	ecrireMatrice(A);
	ecrireVecteur(B);
	X = vecteurNulle(B.nbl);
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