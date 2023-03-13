#include<stdio.h>
#include<stdlib.h>
int sum(const int n);
/* int main(void) */
/* { */
/*   int res=0; */
/*   for(int i=1;i<100;i++){ */
/*     res=sum(i); */
/*   } */
/*   printf("%d\n",res); */
/*   return EXIT_SUCCESS; */
/* } */
/* int sum(const int n){ */
/*   static int res=0; */
/*   res+=n; */
/*   return res; */
/* } */
/* int main(void){ */
/*   double sum=0,sign=1; */
/*   for(register int i=1;i<100000000;i++){ */
/*     sum+=sign/(2*i-1); */
/*     sign=-sign; */
/*   } */
/*   sum=sum*4; */
/*   printf("pi =%lf\n",sum); */
/*   return EXIT_SUCCESS; */
/* } */
int main(void){
  const int n=10;
  printf("%d\n",n);
  int *p=(int*)&n;
  *p=99;
  printf("%d\n",n);
  return EXIT_SUCCESS;
}
