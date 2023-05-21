#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void trim(char *dest,const char *src)
{
	while(!(isspace(*src)&&!isspace(*(src+1))&&*(src+1))) ++src;
	src++;
	while(!(isspace(*src)&&!*(src+1))) *dest++=*src++;
}
int main(void)
{
	//char *s1="\n bonne annee\t";
	char *s1="\\\n bonne \t annee\t";
	char s2[20]={0};
	trim(s2,s1);
	printf("%s\n",s2);
	return EXIT_SUCCESS;
}
