#include<stdio.h>
#include<stdlib.h>
//#define N 7
/* int main(void){ */
/*   char* day[N]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}; */
/*   for(int i=0;i<N;i++) */
/*     printf("%s\n",day[i]); */
/*   return EXIT_SUCCESS; */
/* } */
/* #include<string.h> */
/* void inverser(const char *s1,char *s2); */
/* int main(int argc,char *argv[]){ */
/*   int len=(int)strlen(argv[1]); */
/*   char *str=(char*)calloc(len+1,sizeof(char)); */
/*   inverser(argv[1],str+len-1); */
/*   printf("%s\n",str); */
/*   free(str); */
/*   str=NULL; */
/*   return EXIT_SUCCESS; */
/* } */
/* void inverser(const char *s1,char *s2) */
/* { */
/*   while(*s1) */
/*     *s2--=*s1++; */
/* } */
/* /\* int main(int argc,char *argv[]){ *\/ */
/*   printf("argc is %d \n",argc); */
/*   for(int i=0;i<argc;i++) */
/*     printf("argv[%d] is :%s\n",i,argv[i]); */
/*   return EXIT_SUCCESS; */
/* } */
/* #include<string.h> */
/* char* my_strdup(const char* s1); */
/* int main(int argc,char *argv[]){ */
/*   char *str=my_strdup(argv[1]); */
/*   printf("%s\n",str); */
/*   free(str); */
/*   str=NULL; */
/*   return EXIT_SUCCESS; */
/* } */
/* char* my_strdup(const char* s1) */
/* { */
/*   if(s1==NULL) return NULL; */
/*   int len=strlen(s1)+1; */
/*   char *s2=(char*)malloc(len); */
/*   char *p=s2; */
/*   while(*s2++=*s1++); */
/*   return p; */
/* } */
#include<string.h>
#include<time.h>
char* my_strfry(char *str);
void exchanger(char *s1,char *s2);
int main(int argc,char *argv[]){
  int len=strlen(argv[1])+1;
  char *str =(char*)malloc(len);
  strcpy(str,argv[1]);
  char *str2=my_strfry(str);
  printf("%s\n",str2);
  free(str2);
  str2=NULL;
  return EXIT_SUCCESS;
}
char* my_strfry(char *str)
{
  srand((unsigned int)time(NULL));
  int len=strlen(str);
  char *p=str;
  int k;
  while(*str){
    while(1){
      k=rand()%len;
      if(p+k!=str)
	break;
    }
    exchanger(str,p+k);
    str++;
  }
  return p;
}
void exchanger(char *s1,char *s2)
{
  char tmp=*s1;
  *s1=*s2;
  *s2=tmp;
}
