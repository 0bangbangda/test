#include<stdio.h>
#include<stdlib.h>
//#define Max 200
//#define Max
/* int main(void) */
/* { */
/*   //printf("%s %d\n",__FILE__,Max);//预编译制定宏的制，-D */
/*   printf("DATE = %s,TIME = %s, FILe = %s\n",__DATE__,__TIME__,__FILE__); */
/*   return EXIT_SUCCESS; */
/* } */



/* #include"param.h" */
/* int main(void) */
/* { */
/* #if SIZE>=1024 */
/*   double tab[SIZE]={0}; */
/* #endif */
/* #ifdef DEBUG */
/*   printf("%d\n",SIZE); */
/* #endif */
/*   return EXIT_SUCCESS; */
/* } */

int main(void)
{
#if __STRICT__ANSI__
  printf("C ANSI\n");
#elif __STDC__
  printf("C 99\n");
#endif
  return EXIT_SUCCESS;

}
