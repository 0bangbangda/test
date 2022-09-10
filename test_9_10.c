#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
/*实现strncat函数*/
//void my_strncat(char* p1, char* p2,int n);
//int main(void){
//	char tab1[30] = "abcde\0xxxxxxx";
//	char tab2[] = "hello";
//	int n;
//	scanf("%d", &n);
//	my_strncat(tab1, tab2, n);
//	return EXIT_SUCCESS;
//}
//void my_strncat(char* p1, char* p2,int n){
//	while (*p1 != '\0'){
//		*p1++;
//	}
//	while (n--){
//		if (!(*p1++ = *p2++))
//			break;
//	}
//
//}
//int main(void){
//	char* str1 = "abc";
//	char* str2 = "abc";
//	int ret=strncmp(str1, str2, 6);
//	printf("%d\n", ret);
//	return EXIT_SUCCESS;
//}
/*实现strstr函数*/
char* my_strstr(char* p1, char* p2,int len2,int len1);
int main(void){
	char* str1 = "abcdef";
	char* str2 = "dec";
	int len2 = strlen(str2);
	int len1 = strlen(str1);
	char* ret=my_strstr(str1, str2,len2,len1);
	if (ret == NULL)
		printf("字串不存在\n");
	else
		printf("%s\n", ret);
	return EXIT_SUCCESS;
}
char* my_strstr(char* p1, char*p2,int len2,int len1){
	assert(p1&&p2);
	int i;
	for (i = 0; i < len1; i++){
		char* tmp = p1;
		int j = 0;
		int count = 0;
		if (*p1 == *p2){
			for (j = 0; j < len2; j++){
				count++;
				if (count == len2){
					return tmp;
				}
			    if (*++p1 != *++p2)
					break;
			}
				
		}
		p1 = ++tmp;

	}
	return NULL;

}