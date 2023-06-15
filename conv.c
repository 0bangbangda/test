#include"conv.h"
static Widget entree;
void quit(Widget w,void *data)
{
	exit(EXIT_SUCCESS);
}
void yuans(Widget w,void *data)
{
	ValeurCourante *d=(ValeurCourante*)data;
#ifdef DEBUG 
	printf("valeur = %lf,taux = %lf\n",d->valeur,d->taux);
#endif
	double vc=strtod(GetStringEntry(d->ZoneAffich),NULL);
	vc*=d->taux;
	SetValeur(d,vc);
	afficher(d);
}
void euros(Widget w,void *data)
{
	ValeurCourante *d=(ValeurCourante*)data;
#ifdef DEBUG
	printf("valeur = %lf,taux = %lf\n",d->valeur,d->taux);
#endif
	double vc=strtod(GetStringEntry(d->ZoneAffich),NULL);
	vc/=d->taux;
	SetValeur(d,vc);
	afficher(d);
}
void annuler(Widget w,void *data)
{
	CloseWindow();
}
void valider(Widget w,void *data)
{
	ValeurCourante *d=(ValeurCourante*)data;
	SetTauxDeChange(d,strtod(GetStringEntry(entree),NULL));
}
void tauxchange(Widget w,void *data)
{
	MakeWindow("Taux de change",SAME_DISPLAY,EXCLUSIVE_WINDOW);
	Widget BAnnuler,BValider;
	entree=MakeStringEntry(NULL,ZoneAffichSize,NULL,NULL);
	BAnnuler=MakeButton("Annuler",annuler,data);
	BValider=MakeButton("Valider",valider,data);
	SetWidgetPos(BAnnuler,PLACE_UNDER,entree,NO_CARE,NULL);
	SetWidgetPos(BValider,PLACE_UNDER,entree,PLACE_RIGHT,BAnnuler);
	ShowDisplay();
}
void initValeurCourante(ValeurCourante *d)
{
	d->taux=8;
}
void SetZoneAffich(ValeurCourante *d,Widget w)
{
	d->ZoneAffich=w;
}
void SetValeur(ValeurCourante *d,double x)
{
	d->valeur=x;
}
void SetTauxDeChange(ValeurCourante *d,double x)
{
	d->taux=x;
}
double GetValeur(ValeurCourante *d)
{
	return d->valeur;
}
void afficher(ValeurCourante *d)
{
	char *str=(char*)malloc(ZoneAffichSize);
	sprintf(str,"%-f",d->valeur);
	SetStringEntry(d->ZoneAffich,str);
	free(str);
}
