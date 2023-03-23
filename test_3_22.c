/* #include<stdio.h> */
/* #include<stdlib.h> */
/* #include<string.h> */
/* #define NAMESIZE 10 */
/* typedef struct Date */
/* { */
/*   int annee; */
/*   int mois; */
/*   int jour; */
/*   char *name; */
/* }Date; */
/* Date* initDate(const char *name,const int annee,const int mois,const int jour); */
/* int dateValid(const int a,const int m,const int j); */
/* int bissextile(const int a); */
/* int main(void) */
/* { */
/*   int annee,mois,jour; */
/*   char name[NAMESIZE]; */
/*   Date *date=NULL; */
/*   printf("name:"); */
/*   scanf("%s",name); */
/*   printf("birthday:"); */
/*   scanf("%d/%d/%d",&annee,&mois,&jour); */
/*   date=initDate(name,annee,mois,jour); */
/*   if(date) */
/*     { */
/*   printf("%s est ne %d/%d/%d\n",date->name,date->annee,date->mois,date->jour); */
/*     } */
/*   else */
/*     { */
/*       fprintf(stderr,"la date est invalid\n"); */
/*     } */
/*   return EXIT_SUCCESS; */
/* } */
/* Date* initDate(const char *name,const int annee,const int mois,const int jour) */
/* { */
/*   if(dateValid(annee,mois,jour)) */
/*     { */
/*       Date *date=(Date*)malloc(sizeof(Date)); */
/*       date->name=name; */
/*       date->annee=annee; */
/*       date->mois=mois; */
/*       date->jour=jour; */
/*       return date; */
/*     } */
/*   else */
/*     { */
/*       return NULL; */
/*     } */
/* } */
/* int dateValid(const int a,const int m,const int j) */
/* { */
/*   if(a<1583) return 0; */
/*   switch(m) */
/*     { */
/*     case 1: */
/*     case 3: */
/*     case 5: */
/*     case 7: */
/*     case 8: */
/*     case 10: */
/*     case 12:return (j>0&&j<=31)?1:0; */
/*     case 4: */
/*     case 6: */
/*     case 9: */
/*     case 11:return (j>0&&j<=30)?1:0; */
/*     case 2:if(bissextile(a)) */
/* 	{ */
/* 	  return (j>0&&j<=29)?1:0; */
/*   } */
/*       else */
/* 	{ */
/* 	  return (j>0&&j<=28)?1:0; */
/* 	} */
/*     default:return 0; */
/* } */
/* } */
/* int bissextile(const int a) */
/* { */
/*   return (a%4==0&&a%100!=0)||a%400==0?1:0; */
/* } */
#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode
{
  double val;
  struct ListNode *next;
}*list;
void ajouterEnTete(double x,list dummy);
list BuyListNode(double x);
int main(void)
{
  list dummy=(list)malloc(sizeof(struct ListNode));
  dummy->next=NULL;
  list cur=NULL,p=dummy;
  ajouterEnTete(1.0,dummy);
  ajouterEnTete(2.0,dummy);
  ajouterEnTete(3.0,dummy);
  ajouterEnTete(4.0,dummy);
  cur=dummy->next;
  while(cur->next)
    {
      printf("%lf->",cur->val);
      cur=cur->next;
    }
  printf("%lf\n",cur->val);
  while(p)
    {
      list q=p->next;
      free(p);
      p=q;
    }
  return EXIT_SUCCESS;
}
void ajouterEnTete(double x,list dummy)
{

  list newnode=BuyListNode(x);
  list next=dummy->next;
  dummy->next=newnode;
  newnode->next=next;
}
list BuyListNode(double x)
{
  list newnode=(list)malloc(sizeof(struct ListNode));
  newnode->val=x;
  return newnode;
}
