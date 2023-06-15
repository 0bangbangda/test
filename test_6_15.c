#include<stdio.h>
#include<stdlib.h>
#include<libsx.h>
#include"conv.h"
void init_display(ValeurCourante *d)
{
	Widget BYuan,BEuro,BTaux,BQuit,string_entry;
	string_entry=MakeStringEntry(NULL,200,NULL,NULL);
	SetZoneAffich(d,string_entry);
	BYuan=MakeButton("Yuan",yuans,d);
	BEuro=MakeButton("Euro",euros,d);
	BTaux=MakeButton("Taux",tauxchange,d);
	BQuit=MakeButton("Quit",quit,NULL);
	SetWidgetPos(BYuan,PLACE_UNDER,string_entry,NO_CARE,NULL);
	SetWidgetPos(BEuro,PLACE_UNDER,string_entry,PLACE_RIGHT,BYuan);
	SetWidgetPos(BTaux,PLACE_UNDER,string_entry,PLACE_RIGHT,BEuro);
	SetWidgetPos(BQuit,PLACE_UNDER,string_entry,PLACE_RIGHT,BTaux);
	GetStandardColors();
	ShowDisplay();
}
int main(int argc,char* argv[])
{	
	ValeurCourante d;
	initValeurCourante(&d);
	if(OpenDisplay(argc,argv)==0)
	{
		fprintf(stderr,"can't open window");
		return EXIT_FAILURE;
	}
	init_display(&d);
	MainLoop();
	return EXIT_SUCCESS;
}
