#include<stdio.h>
#include<stdlib.h>
void myStrcpy(char *dest, const char *src)
{
	char *s1=dest;
	const char *s2=src;
	while(*++s1&&*++s2);
	if(!(*s1)&&*s2)
	{
		fprintf(stderr,"length(dest)<length(src)\n");
		return;
	}
	else
	{
		while((*dest++=*src++));
	}
}
int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"wrong input\n");
		return EXIT_FAILURE;
	}
	char str[]="abcdefghijklmn";
	myStrcpy(str,argv[1]);
	printf("%s\n",str);
	return EXIT_SUCCESS;
}
