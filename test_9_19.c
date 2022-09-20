#include<stdio.h>
#include<stdlib.h>
/* int main(void){ */
/*   int x; */
/*   /\*lire un entier*\/ */
/*   scanf("%d",&x); */
/*   if(x>0){/\*positive ou negative*\/ */
/*     printf("%d est positive",x); */
/*   } */
/*   else{ */
/*     x<0?printf("%d est negative",x):printf("x est egal a 0"); */
/*   } */
/*   printf(" et "); */
/*   /\*pair ou impair*\/ */
/*   if((x&1)==0) */
/*     printf("pair\n"); */
/*   else */
/*     printf("impair\n"); */
/*   return EXIT_SUCCESS; */
/* } */
/* int main(void){ */
/*   double a,b; */
/*   scanf("%lf%lf",&a,&b); */
/*   if(abs(a)>0) */
/*     printf("x = %lf\n",-b/a); */
/*   else{ */
/*     if(b==0) */
/*       printf("tout x sont racines\n"); */
/*     else */
/*       printf("pas de racine\n"); */
/*   } */
/*   return EXIT_SUCCESS; */
/* } */
/* void Exchange(int arr[],int x,int y); */
/* int main(void){ */
/*   int arr[]={2,3,1}; */
/*   int i; */
/*   if(arr[0]<arr[1]){/\*comparaision arr[0] et arr[1]*\/ */
/*     Exchange(arr,1,0); */
/*     if(arr[2]<arr[1]){ */
/*       /\*exchange value de arr[2] et arr[1]*\/ */
/*       if(arr[2]>arr[0]){ */
/* 	Exchange(arr,2,1); */
/*       } */
/*       else{/\*eschange arr[2] et arr[0]*\/ */
/* 	Exchange(arr,2,0); */
/*       } */
/*     } */
/*     else */
/*       ; */
/*   } */
/*   else{ */
/*     int tmp=arr[0]; */
/*     arr[0]=arr[1]; */
/*     arr[1]=tmp; */
/*     if(arr[2]<arr[1]){ */
/*       if(arr[2]<arr[0]) */
/* 	Exchange(arr,2,0); */
/*       else */
/* 	Exchange(arr,2,1); */
/*     } */
/*     else */
/*       ; */
/*   } */
/*   for(i=0;i<3;i++){ */
/*     printf("%d ",arr[i]); */
/*       } */
/*   printf("\n"); */
/*   return EXIT_SUCCESS; */
/* } */
/* void Exchange(int arr[],int x,int y) */
/* { */
/*   int tmp=arr[x]; */
/*   arr[x]=arr[y]; */
/*   arr[y]=tmp; */
/* } */
/* #include<assert.h> */
/* #include<math.h> */
/* int main(void){ */
/*   double a,b,c,r1,r2,i1,i2,delta; */
/*   scanf("%lf%lf%lf",&a,&b,&c); */
/*   assert(a); */
/*   delta=b*b-4*a*c; */
/*   if(delta<0){ */
/*     r1=r2=-b/(2*a); */
/*     i1=sqrt(-delta)/(2*a); */
/*     i2=-i1; */
/*   } */
/*   else{ */
/*     if(b>0) */
/*       r1=(-b-sqrt(delta))/(2*a); */
/*     else */
/*       r1=(-b+sqrt(delta))/(2*a); */
/*     if(r1) */
/*       r2=c/(a*r1); */
/*     else */
/*       r2=0; */
/*     i1=0; */
/*     i2=0; */
/*   } */
/*   printf("racine1=(%lf,%lf),racine2=(%lf,%lf)\n",r1,i1,r2,i2); */
/*   return EXIT_SUCCESS; */
/* } */
#include<assert.h>
int main(void){
	int mois, annee;
	scanf("%d %d", &mois, &annee);
	assert(mois >= 1 && mois <= 12);
	assert(annee>1583);
	switch (mois)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31\n"); break;
	case 4:
	case 6:
	case 9:;
	case 11:
		printf("30\n"); break;
	case 2:
		((annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0) ? printf("29\n") : printf("28\n");
	}
	return EXIT_SUCCESS;
}