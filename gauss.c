#include"gauss.h"
void GaussRSL(SysLineaire *sl)
{
	for (int i = 0; i < getNbLignes(sl->A); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == i)
			{
				while (getM(sl->A, j+1, j+1) == 0)
				{
					int l;
					for (l = j; getM(sl->A, l+1, j+1) == 0; l++)
					{
						if (l == getNbLignes(sl->A) - 1)
						{
							fprintf(stderr, "Le système est lié et n’admet pas de solution unique\n");
							return;
						}
					}
					echangerLignesM(&sl->A, j+1, l+1);
					echangerLignesV(&sl->B, j+1, l+1);
					for (j = 0; j < i; j++)
					{
						T divi = -getM(sl->A, i + 1, j + 1);
						for (int k = j; k < getNbCols(sl->A); k++)
						{
							setM(&sl->A, i + 1, k + 1, getM(sl->A, i + 1, k + 1) + getM(sl->A, j + 1, k + 1)*divi);
							if (fabs(getM(sl->A, i + 1, k + 1) )< eps)
							{
								setM(&sl->A, i + 1, k + 1, 0);
							}
						}
						setV(&sl->B, i + 1, getV(sl->B, i + 1) + getV(sl->B, j + 1)*divi);
						if (fabs(getV(sl->B, i + 1)) < eps)
						{
							setV(&sl->B, i + 1, 0);
						}
					}
				}
				T divi = getM(sl->A, j+1, j+1);
				for (int k = j; k < getNbCols(sl->A); k++)
				{
					setM(&sl->A, j + 1, k + 1, getM(sl->A, j + 1, k + 1) / divi);
					if (fabs(getM(sl->A, j + 1, k + 1))< eps)
					{
						setM(&sl->A, j + 1, k + 1, 0);
					}
				}
				setV(&sl->B, j+1, getV(sl->B, j+1) / divi);
				if (fabs(getV(sl->B, j + 1)) < eps)
				{
					setV(&sl->B, i + 1, 0);
				}
			}
			else
			{
				T divi = -getM(sl->A, i+1, j+1);
				for (int k = j; k < getNbCols(sl->A); k++)
				{
					setM(&sl->A, i+1, k+1, getM(sl->A, i+1, k+1) + getM(sl->A, j+1, k+1)*divi);
					if (fabs(getM(sl->A, i + 1, k + 1))< eps)
					{
						setM(&sl->A, i + 1, k + 1, 0);
					}

				}
				setV(&sl->B, i+1, getV(sl->B, i+1) + getV(sl->B, j+1)*divi);
				if (fabs(getV(sl->B, i + 1)) < eps)
				{
					setV(&sl->B, i + 1, 0);
				}
			}
		}
	}
	for (int i = getNbLignes(sl->A)-1; i >= 0; i--)
	{
	        setV(&sl->X, i + 1, getV(sl->B, i + 1));
		for (int j = i + 1; j < getNbCols(sl->A); j++)
		{
			setV(&sl->X, i + 1, getV(sl->X, i + 1) - getM(sl->A, i + 1, j + 1)*getV(sl->X, j + 1));
		}
		if (fabs(getV(sl->B, i + 1)) < eps)
		{
			setV(&sl->B, i + 1, 0);
		}
	}
}
