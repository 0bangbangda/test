#include<stdio.h>
#include<stdlib.h>
int my_strlen(const char *s)
{
	int count=0;
	while(*s++)
	{
		if(*s=='I')
			count++;
	}
	return count;
}
int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"wrong input\n");
		return EXIT_FAILURE;
	}
	printf("%d\n",my_strlen(argv[1]));
	return EXIT_SUCCESS;
}
