#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int num;
	char name[10];
	char sex[5];
	float score;
}stu;
int main(void){
	/*double a = 5.72;
	printf("%6.2f\n", a);
	printf("%f\n", a);*/
	stu boy1, boy2;
	boy1.num = 1;
	boy2.num = 2;
	stu* pstu = &boy1;
	stu* st = &boy2;
	stu** st1 = &st;
	printf("%d %d\n", boy1.num, boy2.num);
	printf("%d %d\n", pstu->num,st->num);
	printf("%d %d\n",(*pstu).num, (*st).num);
	printf("%d %d\n", (**st1).num, (*st1)->num);
	return EXIT_SUCCESS;
}