typedef struct Node
{
	double val;
	struct Node *next;
}*liste;
void ajouterEnTete(liste *lf,const double x)
{
	liste newnode=(liste)malloc(sizeof(struct Node));
	newnode->val=x;
	newnode->next=*lf;
	*lf=newnode;
}
void creerListeDeDouble(liste *lf,char *f)
{
	FILE *fp=fopen(f,"r");
	if(fp==NULL)
	{
		perror(f);
		exit(errno);
	}
	double x;
	while((fscanf(fp,"%lf",&x))>0)
	{
		ajouterEnTete(lf,x);
	}
	close(fp);
}
void creerFichierDoublesPositifs(liste lf,char *f)
{
	FILE *fp=fopen(f,"w");
	if(fp==NULL)
	{
		perror(f);
		exit(errno);
	}
	liste cur=lf;
	while(cur)
	{
		if(cur->val>0)
			fprintf(fp,"%lf ",cur->val);
		cur=cur->next;
	}
	close(fp);
}
int main(void)
{
	FILE *fp=fopen("fichierDoublesPositifs","w");
	if(fp==NULL)
	{
		perror();
		return EXIT_FAILURE;
	}
	close(fp);
	return EXIT_SUCCESS;
}
