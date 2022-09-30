#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
/* void initAleatoire(const int m,const int n,int matrice[][n]); */
/* void ecrireMatrice(const int m,const int n,const int matrice[][n]); */
/* int rechercher(const int e,const int m,const int n,const int matrice[][n]); */
/* int main(void){ */
/*   int n,m,e; */
/*   scanf("%d %d",&m,&n); */
/*   assert(m,n>0); */
/*   int matrice[m][n]; */
/*   initAleatoire(m,n,matrice); */
/*   scanf("%d",&e); */
/*   printf("%d\n",rechercher(e,m,n,matrice)); */
/*   ecrireMatrice(m,n,matrice); */
  
/*   return EXIT_SUCCESS; */
/* } */
/* void initAleatoire(const int m,const int n,int matrice[][n]) */
/* { */
/*   srand(time(NULL)); */
/*   for(int i=0;i<m;i++){ */
/*     for(int j=0;j<n;j++) */
/*       matrice[i][j]=rand()%100; */
/*   } */
/* } */
/* void ecrireMatrice(const int m,const int n,const int matrice[][n]) */
/* { */
/*   for(int i=0;i<m;i++){ */
/*     for(int j=0;j<n;j++) */
/*       printf("%2d ",matrice[i][j]); */
/*     printf("\n"); */
/*   } */
/* } */
/* int rechercher(const int e,const int m,const int n,const int matrice[][n]) */
/* { */
/*   for(int i=0;i<m;i++){ */
/*     for(int j=0;j<n;j++){ */
/*       if(matrice[i][j]==e) */
/* 	return 1; */
/*     } */
/*   } */
/*   return 0; */
/* } */
#define M 2
#define N 3
#define P 3
void Produit(const int m,const int n,const int p,const int A[M][P],const int B[P][N],int C[M][N]);
void ecrireMatrice(const int m,const int n,const int C[][N]);
int main(void){
  int A[M][P]={{1,2,3},{4,5,6}};
  int B[P][N]={{7,8,9},{0,1,2},{3,4,5}};
  int C[M][N];
  Produit(M,N,P,A,B,C);
  ecrireMatrice(M,N,C);
  return EXIT_SUCCESS;
}
void Produit(const int m,const int n,const int p,const int A[M][P],const int B[P][N],int C[M][N])
{
  int sum;
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
	sum=0;
	for(int k=0;k<p;k++){
	  sum+=A[i][k]*B[k][j];
	}
	C[i][j]=sum;
      }
    }
}
void ecrireMatrice(const int m,const int n,const int C[][N])
{
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
      printf("%2d ",C[i][j]);
    printf("\n");
  }
}
