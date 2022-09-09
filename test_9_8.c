#include<stdio.h>
#include<stdlib.h>
/* double MeanTab(int t[],int n); */
/* int main(void){ */
/*   int t[]={1,2,3,4,5,6,7,8,9,0}; */
/*   /\*caculate the number of tableau*\/ */
/*   int n=sizeof(t)/sizeof(t[0]); */
/*   double ret =MeanTab(t,n); */
/*   printf("%lf\n",ret);/\*ret=4.50000*\/ */
/*   return EXIT_SUCCESS; */
/* } */
/* double MeanTab(int t[],int n){ */
/*   int i; */
/*   double sum=0; */
/*   /\*cumulative sum*\/ */
/*   for(i=0;i<n;i++){ */
/*     sum+=t[i]; */
/*   } */
/*   return sum/n; */
/* } */
/* #define M 3 */
/* #define N 3 */
/* int Compter(double mat[M][N],int m,int n);/\*the number in [3.0;6.0]*\/ */
/* int main(void){ */
/*   /\*double mat[M][N],M=3,N=3*\/ */
/*   double mat[M][N]={{1.0,2.0,3.0},{4.0,5.0,6.0},{7.0,8.0,9.0}}; */
/*   int count=Compter(mat,M,M); */
/*   printf("%d\n",count);/\*count = 4*\/ */
/*   return EXIT_SUCCESS; */
/* } */
/* int Compter(double mat[M][N],int m,int n){ */
/*   int count=0; */
/*   int i; */
/*   for(i=0;i<m;i++){/\*row*\/ */
/*     int j; */
/*     for(j=0;j<n;j++){/\*col*\/ */
/*       if(mat[i][j]<=6.0&&mat[i][j]>=3.0) */
/* 	count++;/\*if mat[i][j] in [3.0;6.0],count+1*\/ */
/*     } */
/*   } */
/*   return count; */
/* } */
#include<limits.h>
void FindMax(int tab[],int nb);
void FindMin(int tab[],int nb);
double MeanTab(int tab[],int nb);
#define NB 5
int main(void){
  int tab[NB]={51,85,72,93,72};
  FindMax(tab,NB);
  FindMin(tab,NB);
  double ret=MeanTab(tab,NB);
  printf("%lf\n",ret);
  return EXIT_SUCCESS;
}
void FindMax(int tab[],int nb){
  int i;
  int j=0;
  int max=INT_MIN;
  for(i=0;i<nb;i++){
    if(tab[i]>max){
      max=tab[i];
      j=i;
    }
  }
  if(j!=nb-1){
    int tmp=tab[j];
    tab[j]=tab[nb-1];
    tab[nb-1]=tmp;
  }
  
}
void FindMin(int tab[],int nb){
  int i;
  int j=0;
  int min=INT_MAX;
  for(i=0;i<nb;i++){
    if(tab[i]<min){
      min=tab[i];
      j=i;
    }
  }
  if(j!=0){
    int tmp=tab[j];
    tab[j]=tab[0];
    tab[0]=tmp;
  }
}
double MeanTab(int tab[],int nb){
  int i;
  double sum=0;
  for(i=1;i<nb-1;i++){
    sum+=tab[i];
  }
  return sum/(nb-2);
}
