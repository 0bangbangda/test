#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<time.h>
void creerFichEntiers(char *f_name,int n)
{
	FILE *fp;
	if((fp=fopen(f_name,"w"))==NULL)
	{
		perror(f_name);
		exit(errno);
	}
	for(int i=0;i<n;i++)
	{
		int num=rand()%100;
		fwrite(&num,sizeof(int),1,fp);
	}
	fclose(fp);
}
void afficherFichEntiers(char *f_name)
{
	FILE *fp;
	if((fp=fopen(f_name,"r"))==NULL)
	{
		perror(f_name);
		exit(errno);
	}
	int num;
	while((fread(&num,sizeof(int),1,fp))>0)
		printf("%3d ",num);
	printf("\n");
	fclose(fp);
	
}
void pairimpair(char *f_name,char *fp_name,char *fip_name)
{
	FILE *f,*fp,*fip;
	if((f=fopen(f_name,"r"))==NULL)
	{
		perror(f_name);
		exit(errno);
	}
	if((fp=fopen(fp_name,"w"))==NULL)
	{
		perror(f_name);
		exit(errno);
	}
	if((fip=fopen(fip_name,"w"))==NULL)
	{
		perror(f_name);
		exit(errno);
	}
	int num;
	while((fread(&num,sizeof(int),1,f))>0)
	{
		fwrite(&num,sizeof(int),1,num&1?fip:fp);
	}
	fclose(f);
	fclose(fp);
	fclose(fip);



}
void copier(char *fo_name,char *fc_name)
{
	FILE *fo,*fc;
	if((fo=fopen(fo_name,"r"))==NULL)
	{
		perror(fo_name);
		exit(errno);
	}
	if((fc=fopen(fc_name,"w"))==NULL)
	{
		perror(fc_name);
		exit(errno);
	}
	char buffer[BUFSIZ];
	fread(buffer,sizeof(char),BUFSIZ,fo);
	fwrite(buffer,sizeof(char),BUFSIZ,fc);
	fclose(fc);
	fclose(fo);
}
int main(int argc,char* argv[])
{

	srand((unsigned int)time(NULL));
	if(argc!=3)
	{
		fprintf(stderr,"incorrect input\n");
		return EXIT_FAILURE;
	}
	//creerFichEntiers(argv[1],20);
	//afficherFichEntiers(argv[1]);
	/*pairimpair(argv[1],argv[2],argv[3]);
	afficherFichEntiers(argv[1]);
	afficherFichEntiers(argv[2]);
	afficherFichEntiers(argv[3]);*/
	copier(argv[1],argv[2]);
	afficherFichEntiers(argv[2]);
	return EXIT_SUCCESS;
}
