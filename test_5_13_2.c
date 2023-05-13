#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int valid(int nb,char **s)
{
	int i=0;
	if(nb!=4)
		return 0;
	while(*(s[1]+i))
	{
		if(!isdigit(*(s[1]+i)))
			return 0;
		++i;
	}
	i=0;
	while(*(s[3]+i))
	{
		if(!isdigit(*(s[3]+i)))
			return 0;
		++i;
	}
	if(strcmp(s[2],"+")&&strcmp(s[2],"-")&&strcmp(s[2],"*")&&strcmp(s[2],"/"))
		return 0;
	return 1;
}
int main(int argc,char* argv[])
{
	if(!valid(argc,argv))
	{
		fprintf(stderr,"input est invalid\n");
		return EXIT_FAILURE;
	}
	else
	{
		int a,b;
		a=atoi(argv[1]);
		b=atoi(argv[3]);
		switch(*argv[2])
		{
			case '+':printf("%d + %d =%d\n",a,b,a+b);break;
			case '-':printf("%d - %d=%d\n",a,b,a-b);break;
			case '*':printf("%d * %d=%d\n",a,b,a*b);break;
			case '/':printf("%d / %d=%lf\n",a,b,(double)a/b);break;
			default:fprintf(stderr,"error\n");return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}
