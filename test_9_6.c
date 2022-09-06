#include<stdio.h>
#include<stdlib.h>
/* int main(void) */
/* { */
/*   /\* int x=4; *\/ */
/*   /\* /\\*x in [1;10]*\\/ *\/ */
/*   /\* switch(x) *\/ */
/*   /\*   { *\/ */
/*   /\*   case 1: *\/ */
/*   /\*   case 2: *\/ */
/*   /\*   case 3:printf("x>=1&&x<=3\n");break; *\/ */
/*   /\*   case 4: *\/ */
/*   /\*   case 5:printf("x<=5&&x>=4\n");break; *\/ */
/*   /\*   default:printf("x>=6&&x<=10\n"); *\/ */
      
/*   /\*   } *\/ */
/*   /\* return EXIT_SUCCESS; *\/ */
  
/* } */
/* int main(void){ */
/*   /\*确定行数*\/ */
/*   int line; */
/*   scanf("%d",&line); */
/*   int i; */
/*   /\*打印每一行*\/ */
/*   for(i=1;i<=line;i++){ */
/*     int j; */
/*     /\*打印空格*\/ */
/*     for(j=1;j<=line-i;j++){ */
/*       printf(" "); */
/*     } */
/*     /\*打印 * *\/ */
/*     for(j=1;j<=2*i-1;j++){ */
/*       printf("*"); */
/*     } */
/*     /\*每行打印完后换行*\/ */
/*     printf("\n"); */
/*   } */
  
/*   return EXIT_SUCCESS; */
/* } */
int main(void){
  int n;
  scanf("%d",&n);
  while(n>12){
    printf("结果超过最大值，请重新输入:>");
    scanf("%d",&n);
   
  }
  int sum=1;
  int i;
  for(i=1;i<=n;i++){
    sum*=i;
  }
  printf("%d\n",sum);
  return EXIT_SUCCESS;
}
