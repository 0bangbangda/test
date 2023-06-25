#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"matrice.h"
#include"vecteur.h"
#include"matriceC.h"
#include<libsx.h>
#include"graphi.h"
#include"gauss.h"
extern Widget ZoneAffich1;
void init_SysLineaire(SysLineaire *sl)
{
	sl->A.mat=NULL;
	sl->B.vect=NULL;
	sl->X.vect=NULL;
	sl->l=0;
}

void init_display(SysLineaire *d)
{
	Widget BMenu,BResolution,BEtape,BQuit;
	ZoneAffich1=MakeStringEntry(NULL,200,NULL,NULL);
	BMenu=MakeButton("Menu",menu,d);
	BResolution=MakeButton("Resolution",resolution,d);
	BEtape=MakeButton("Etape",etape,d);
	BQuit=MakeButton("Quit",quit,NULL);
	SetWidgetPos(BMenu,PLACE_UNDER,ZoneAffich1,NO_CARE,NULL);
	SetWidgetPos(BResolution,PLACE_UNDER,ZoneAffich1,PLACE_RIGHT,BMenu);
	SetWidgetPos(BEtape,PLACE_UNDER,ZoneAffich1,PLACE_RIGHT,BResolution);
	SetWidgetPos(BQuit,PLACE_UNDER,ZoneAffich1,PLACE_RIGHT,BEtape);
	GetStandardColors();
	ShowDisplay();
}
int main(int argc,char* argv[])
{
	if(OpenDisplay(argc,argv)==0)
	{
		fprintf(stderr,"can't open window\n");
		return EXIT_FAILURE;
	}
	SysLineaire sl;
	init_SysLineaire(&sl);
	init_display(&sl);
	MainLoop();
	return EXIT_SUCCESS;
}
