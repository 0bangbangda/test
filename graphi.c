#include"graphi.h"
#include"gauss.h"
Widget ZoneAffich1;
Widget ZoneAffich2;
static void Effacer(SysLineaire *d)
{
	free(d->A.mat);
	free(d->B.vect);
	free(d->X.vect);
	d->A.mat=NULL;
	d->B.vect=NULL;
	d->X.vect=NULL;
}
static void InitSl(SysLineaire *d)
{
        lireMatrice(&d->A,"matrice.txt");
	lireVecteur(&d->B,"vecteur.txt");
	d->X=vecteurNulle(d->B.nbl);
	d->l=0;
}
void charger(Widget w,void *data)
{
	SysLineaire *d=(SysLineaire*)data;
	InitSl(d);
	SetStringEntry(ZoneAffich2,"la matrice et les vecteurs ont ete charges avec succes!");
}
static void allocValider(char **ptr,char **str)
{
	if(!*ptr)
	{
		fprintf(stderr,"allocated faileur\n");
		exit(EXIT_FAILURE);
	}
	*str=*ptr;
}
static void visual(Widget ZoneAffich,SysLineaire *d)
{
	char *str = (char*)calloc(1,sizeof(char));
	char tmp[20] = { 0 };
	for (int i = 0; i < getNbLignes(d->A); i++)
	{
		char *ptr;
		int flat=0;
		for (int j = 0; j < getNbCols(d->A); j++)
		{
			if (getM(d->A, i + 1, j + 1))
			{
				flat++;
				if (flat==1)
				{
					ptr = realloc(str, strlen(str) + sprintf(tmp,"%.1fx%d", getM(d->A, i + 1, j + 1), j + 1) + 1);
					allocValider(&ptr,&str);
					strcat(str, tmp);
				}
				else
				{
					if (getM(d->A, i + 1, j + 1) > 0)
					{
						ptr = realloc(str, strlen(str) + sprintf(tmp,"+%.1fx%d", getM(d->A, i + 1, j + 1), j + 1) + 1);
						allocValider(&ptr,&str);
						strcat(str, tmp);
					}
					else
					{
						ptr = realloc(str, strlen(str) + sprintf(tmp,"%.1fx%d", getM(d->A, i + 1, j + 1), j + 1) + 1);
						allocValider(&ptr,&str);
						strcat(str, tmp);
					}
				}
			}
		}
		ptr = (char*)realloc(str,strlen(str) + sprintf(tmp, "=%lf\n", getV(d->B, i + 1)) + 1);
		allocValider(&ptr,&str);
		strcat(str, tmp);
	}
	SetStringEntry(ZoneAffich,str);
	free(str);
}
void visualiser(Widget w,void *data)
{
	SysLineaire *d=(SysLineaire*)data;
	if(d->A.mat==NULL)
	{
		SetStringEntry(ZoneAffich2,"la matrice et les vecteurs ne sont pas charges!");
		return;
	}
	visual(ZoneAffich2,d);
}
void annuler(Widget w,void *data)
{
	CloseWindow();
}
void menu(Widget w,void *data)
{
	MakeWindow("charger et visualiser",SAME_DISPLAY,EXCLUSIVE_WINDOW);
	SysLineaire *d=(SysLineaire*)data;
	Widget BCharger,BVisualiser,BAnnuler;
	ZoneAffich2=MakeStringEntry(NULL,200,NULL,NULL);
	BCharger=MakeButton("charger",charger,d);
	BVisualiser=MakeButton("Visualiser",visualiser,d);
	BAnnuler=MakeButton("Annuler",annuler,d);
	SetWidgetPos(BCharger,PLACE_UNDER,ZoneAffich2,NO_CARE,NULL);
	SetWidgetPos(BVisualiser,PLACE_UNDER,ZoneAffich2,PLACE_RIGHT,BCharger);
	SetWidgetPos(BAnnuler,PLACE_UNDER,ZoneAffich2,PLACE_RIGHT,BVisualiser);
	ShowDisplay();
	SetStringEntry(ZoneAffich2,"Veuiilez agrandir la fenetre avant de operer! ");
}

void resolution(Widget w,void *data)
{
	char *str=calloc(1,sizeof(char));
	char tmp[20]={0};
	SysLineaire *d=(SysLineaire*)data;
	if(d->A.mat==NULL)
	{
		SetStringEntry(ZoneAffich1,"la matrice et les vecteurs ne sont pas charges!");
		return;
	}
	if(d->l)
	{
		Effacer(d);
		InitSl(d);
	}
	GaussRSL(d);	
	for (int i = 0; i < getNbLignesV(d->X); i++)
	{
		char *ptr = realloc(str, strlen(str) + sprintf(tmp, "x%d=%lf\n", i + 1, getV(d->X,i + 1)) + 1);
		allocValider(&ptr,&str);
		strcat(str, tmp);
	}
	SetStringEntry(ZoneAffich1,str);
	d->l=-1;
	free(str);
}
void etape(Widget w,void *data)
{
	SysLineaire *sl=(SysLineaire*)data;
	if(sl->A.mat==NULL)
	{
		SetStringEntry(ZoneAffich1,"la matrice et les vecteurs ne sont pas charges!");
		return;
	}
	if(sl->l==-1)
	{
		Effacer(sl);
		InitSl(sl);
	}
	int i=sl->l;
	if(i==getNbLignes(sl->A))
	{
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
	        char *str=calloc(1,sizeof(char));
	        char tmp[20]={0};
		for (int i = 0; i < getNbLignesV(sl->X); i++)
		{
			char *ptr = realloc(str, strlen(str) + sprintf(tmp, "x%d=%lf\n", i + 1, getV(sl->X,i + 1)) + 1);
		        allocValider(&ptr,&str);
	 	        strcat(str, tmp);
		}
		SetStringEntry(ZoneAffich1,str);
		free(str);
		str=NULL;
	}
	else
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
		sl->l++;
		visual(ZoneAffich1,sl);
	}

}
void quit(Widget w,void *data)
{
	exit(EXIT_SUCCESS);
}
