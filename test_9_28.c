#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* double probabilite(const int n); */
/* int main(void){ */
/*   int n; */
/*   scanf("%d",&n); */
/*   printf("L'approximation de pi est %f\n",4probabilite(n)); */
/*   return EXIT_SUCCESS; */
/* } */
/* double probabilite(const int n) */
/* { */
/*   double m=0.0, x,y; */
/*   srand48(time(NULL)); */
/*   for(int i=0;i<n;i++){ */
/*     x=drand48(); */
/*     y=drand48(); */
/*     if(x*x+y*y<=1.0) */
/*       m++; */
/*   } */
/*   return m/n; */
/* } */
/* void InitTab(double tab[],int n); */
/* void PrintTab(const double tab[],const int n,const int intparlig); */
/* double MeanTab(const double tab[],const int n); */
/* int main(void){ */
/*   int n; */
/*   scanf("%d",&n); */
/*   double tab[n]; */
/*   InitTab(tab,n); */
/*   PrintTab(tab,n,10); */
/*   printf("La moyenne est %f\n",MeanTab(tab,n)); */
/*   return EXIT_SUCCESS; */
/* } */
/* void InitTab(double tab[],int n) */
/* { */
/*   int i=0; */
/*   srand(time(NULL)); */
/*   while(n--){ */
/*     tab[i]=rand()/100000.0; */
/*     i++; */
/*   } */
/* } */
/* void PrintTab(const double tab[],const int n,const int intparlig) */
/* { */
/*   int k=0; */
/*   for(int i=0;i<n;i++){ */
/*     printf("%10.2f ",tab[i]); */
/*     k++; */
/*     if(k%intparlig==0) */
/*       putchar('\n'); */
/*   } */
/*   putchar('\n'); */
/* } */
/* double MeanTab(const double tab[],const int n) */
/* { */
/*   double sum=0.0; */
/*   for(int i=0;i<n;i++) */
/*     sum+=tab[i]; */
/*   return sum/n; */
/* } */
void InitTab(int tab1[],int tab2[],const int n);
void PrintTab(const int tab1[],const int tab2[],const int n);
int Produit(const int tab1[],const int tab2[],const int n);
int main(void){
  int n;
  scanf("%d",&n);
  int tab1[n],tab2[n];
  InitTab(tab1,tab2,n);
  PrintTab(tab1,tab2,n);
  printf("v.w = %d\n",Produit(tab1,tab2,n));
  return EXIT_SUCCESS; 
}
void InitTab(int tab1[],int tab2[],const int n)
{
  srand(time(NULL));
  for(int i=0;i<n;i++){
    tab1[i]=rand()%100;
    tab2[i]=rand()%100;
  }
}
void PrintTab(const int tab1[],const int tab2[],const int n)
{
  printf("v = (");
  for(int i=0;i<n;i++)
    printf("%d,",tab1[i]);
  printf("\b)\n");
  printf("w = (");
  for(int i=0;i<n;i++)
    printf("%d,",tab2[i]);
  printf("\b)\n");
}
int Produit(const int tab1[],const int tab2[],const int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=tab1[i]*tab2[i];
  return sum;
}
