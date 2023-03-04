#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* int main(void){ */
/*   char *str; */
/*   gets(str); */
/*   puts(str); */
/*   return EXIT_SUCCESS; */
/* } */
/* int main(void){ */
/*   char *str=(char*)malloc(20*sizeof(char)); */
/*   strcpy(str,"C 语言中文网"); */
/*   puts(str); */
/*   free(str); */
/*   str=NULL; */
/*   if(str){ */
/*     puts(str); */
/*   } */
/*   return EXIT_SUCCESS; */
/* } */
void func(char **str);
int main(void){
  char *str;
  func(&str);
  /* printf("\n"); */
  /* printf("\n"); */
  /*  printf("\n"); */
  /*   printf("\n"); */
  puts(str);
  return EXIT_SUCCESS;
  
}
void func(char **str){
  //char *pstr="C.biancheng.net";
  char p[]="c.biancheng.net";
  *str=p;
}



