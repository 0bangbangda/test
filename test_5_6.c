#include<stdio.h>
#include<stdlib.h>
#include"func.h"
void test1()
{
        Complexe c={1.0,2.0};
	ecrireComplexe(c);
	putchar('\n');
	printf("reel = %.4f,img = %.4f\n",partieReelle(&c),partieImaginaire(&c));
	printf("rho = %.4f,theta = %.4f\n",rho(&c),theta(&c));
	Complexe c2={3.14,2.56};
	ecrireComplexe(c2);
	printf("\n");
	printf("c+c2=");
	ecrireComplexe(plus(&c,&c2));
	printf("\n");
	printf("c-c2 = ");
	ecrireComplexe(moins(&c,&c2));
	printf("\n");
	printf("c * c2 = ");
	ecrireComplexe(multi(&c,&c2));
	printf("\n");
	printf("c / c2 = ");
	ecrireComplexe(Div(&c,&c2));
	printf("\n");
}
void test2()
{
Complexe c1={0,1.0};
Complexe c2={0,0};
if(egal(&c1,&I))
	printf("c1 和 I 相等\n");
if(different(&c1,&c2))
	printf("c1和c2不相等\n");
}

int main(void)
{
//	test1();
test2();
return EXIT_SUCCESS;
}
