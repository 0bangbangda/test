#include<stdio.h>
#include<stdlib.h>
int my_strcmp(char str1[], char str2[]);
int main(void){
	char str1[20];
	char str2[20];
	scanf("%s %s", str1, str2);
	int ret = my_strcmp(str1, str2);
	printf("%d", ret);
	return EXIT_SUCCESS;
}
int my_strcmp(char str1[], char str2[])
{
	int i = 0;
	while (str1[i] == str2[i]&&str1[i]){
		i++;
	}
	if (str1[i] == '\0'&&str2[i] == '\0')
		return 0;
	else if (str1[i] > str2[i])
		return 1;
	else
		return -1;
}