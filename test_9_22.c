#include<stdio.h>
#include<stdlib.h>
/* int factorielleC(int n); */
/* long factorielleD(int n); */
/* int main(void){ */
/*   int n; */
/*   scanf("%d",&n); */
/*   /\*comparasion entre factorielleC et factorielleD *\/ */
/*   printf("%d! = %d\n",n,factorielleC(n)); */
/*   printf("%d! = %ld\n",n,factorielleD(n)); */
/*   /\*la plus grande valeur de n est 12*\/ */
/*   return EXIT_SUCCESS; */
/* } */
/* int factorielleC(int n) */
/* { */
/*   int fact=1,i=1; */
/*   while(i<=n){ */
/*     fact=fact*i; */
/*     i=i+1; */
/*   } */
/*   return fact; */

/* } */
/* long factorielleD(int n) */
/* { */
/*   long fact=1,i=(long)n; */
/*   while(i>0){ */
/*     fact*=i; */
/*     i--; */
/*   } */
/*   return fact; */

/* } */
/* int division(const int a,const int b); */
/* int main(void) */
/* { */
/*   int a,b; */
/*   scanf("%d %d",&a,&b); */
/*   printf("q = %d\n",division(a,b)); */
/*   return EXIT_SUCCESS; */
/* } */
/* int division(const int a,const int b) */
/* { */
/*   int q=0,r=a; */
/*   while(r>b){ */
/*     r=r-b; */
/*     q++; */
/*   } */
/*   return q; */
/* } */
int produit(int x, int y);
int main(void){
	int a, b, x, y;
	scanf("%d %d", &a, &b);
	x = 1;
	while (x <= a*b){
		if (a*b%x == 0){
			y = a*b / x;
			printf("%d * %d = %d\n", x, y, produit(x, y));
		}
		x = x + 1;
	}
	return EXIT_SUCCESS;
}
int produit(int x, int y)
{
	int p = 0;
	while (y>0){
		y = y - 1;
		p = p + x;
	}
	return p;
}


}
