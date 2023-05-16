#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
#include"pile.h"
int estEntier(const char *s)
{
	if(*s=='\0') return 0;
	while(*s)
	{
		if(!isdigit(*s++)) return 0;
	}
	return 1;
}
int estOperator(const char *s)
{
	if((*s=='='||*s=='-'||*s=='*'||*s=='/')&&*(s+1)=='\0') return 1;
	return 0;
}
void errorDisplay(const char *s)
{
	printf("Error:%s\n",s);
}
int main(int argc,char *argv[])
{
	Pile p=initPile;
	for(int i=1;i<argc;i++)
	{
		if(estEntier(argv[i]))
		{
#ifdef DEBUG
			printf("i = %d\n",i);
#endif
			empiler(&p,atoi(argv[i]));
		}
		else
		{
#ifdef DEBUG
			printf("i = %d\n",i);
#endif
			if(estOperator(argv[i]))
			{
				int op1=sommet(&p);
				depiler(&p);
				int op2=sommet(&p);
				depiler(&p);
				switch(*argv[i])
				{
					case '+':empiler(&p,op1+op2);break;
					case '-':empiler(&p,op2-op1);break;
					case '*':empiler(&p,op1*op2);break;
					case '/':!op2?errorDisplay("division by 0"):empiler(&p,op2/op1);break;
					default:fprintf(stderr,"error\n");return EXIT_SUCCESS;
				}
			}
		}
	}
#ifdef DEBUG
	printf("size est %d\n",p.size);
#endif
	(estValid(&p)||p.size!=1)?errorDisplay("size n'est pas a 1"):printf("result est %d\n",(p.elem)[0]);
	return EXIT_SUCCESS;
}
