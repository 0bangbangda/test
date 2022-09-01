#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float a=0.12345678901234567890;
  double b=0.12345678901234567890;
  enum{FAUX,TRUE};
  unsigned int x = 0;
  printf("a = %.30f\n",a);
  printf("b = %.30lf\n",b);
  printf("FAUX + 1 = %d\n",FAUX+1);
  printf("%d\n",x>-1);
  printf("%d\n",(int)x>-1);
  return EXIT_SUCCESS;
}
