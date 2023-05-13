#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
char* metEnMajuscule(char* s)
{
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		s[i]=toupper(*(s+i));
	}
	return s;
}
int main(void)
{
	/*int a,b;
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d b=%d\n",a,b);*/
	char str[100];
	scanf("%s",str);
	printf("%s\n",metEnMajuscule(str));
	return EXIT_SUCCESS;
}
