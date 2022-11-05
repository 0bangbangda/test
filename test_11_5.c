#include<stdio.h>
#include<stdlib.h>

//int main(void){
//	/*enum sex s = male;
//	printf("%d\n", s);*/
//	enum sex{male=2,female=4,secret=0};
//	printf("%d %d %d\n", male, female, secret);
//	return EXIT_SUCCESS;
//}
union un
{
	int i;
	char c;
};
int main(void){
	union un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &u.c);
	printf("%p\n", &u.i);
	u.i = 0x11223344;
	u.c = 0x55;
	printf("%x\n", u.i);
	return EXIT_SUCCESS;
}