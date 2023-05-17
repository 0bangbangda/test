#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#define MAX 30
int main(int argc,char *argv[])
{
	FILE *fn,*fm;
	if((fn=fopen(argv[1],"r"))==NULL)
	{
		perror(argv[1]);
		exit(errno);
	}
	if((fm=fopen(argv[2],"w"))==NULL)
	{
		perror(argv[2]);
		exit(errno);
	}
	int nb_stu=0,nb_note;
	double note,ave_stu=0,ave_all=0,sum_note;
	char nom[MAX],prenom[MAX];
	while((fscanf(fn,"%s %s",nom,prenom))>0)
	{
		note=0,sum_note=0,nb_note=0;
		fprintf(fm,"%s %s : ",nom,prenom);
		while((fscanf(fn,"%lf",&note))>0)
		{
			sum_note+=note;
			nb_note++;
		}
		if(nb_note)
		{
			ave_stu=sum_note/nb_note;
			ave_all+=ave_stu;
			nb_stu++;
			fprintf(fm,"%.1f\n",ave_stu);
		}
		else
		{
			fprintf(fm,"abs\n");
		}
	}
	if(nb_stu)
	{
		fprintf(fm,"\n");
		ave_all/=nb_stu;
		fprintf(fm,"Moyenne general : %.2f\n",ave_all);
	}
	return EXIT_SUCCESS;
}
