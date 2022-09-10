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
//const char* my_strstr(const char* p1, const char* p2,int len2,int len1);
//int main(void){
//	char* str1 = "abbbcdef";
//	char* str2 = "bbc";
//	int len2 = strlen(str2);
//	int len1 = strlen(str1);
//	const char* ret=my_strstr(str1, str2,len2,len1);
//	if (ret == NULL)
//		printf("字串不存在\n");
//	else
//		printf("%s\n", ret);
//	return EXIT_SUCCESS;
//}
//const char* my_strstr(const char* p1, const char*p2,int len2,int len1){
//	assert(p1&&p2);
//	int i;
//	for (i = 0; i < len1; i++){
//		const char* tmp1 = p1;
//		const char* tmp2 = p2;
//		int j = 0;
//		int count = 0;
//		if (*p1 == *p2){
//			for (j = 0; j < len2; j++){
//				count++;
//				if (count == len2){
//					return tmp1;
//				}
//			    if (*++p1 != *++p2)
//					break;
//			}
//			p2 = tmp2;
//				
//		}
//		p1 = ++tmp1;
//
//	}
//	return NULL;
//
//}
//const char* my_strstr(const char* p1, const char* p2);
// int main(void){
//		char* str1 = "abbbcdef";
//		char* str2 = "bbc";
//		int len2 = strlen(str2);
//		int len1 = strlen(str1);
//		const char* ret=my_strstr(str1, str2);
//		if (ret == NULL)
//			printf("字串不存在\n");
//		else
//			printf("%s\n", ret);
//		return EXIT_SUCCESS;
//	}
// const char* my_strstr(const char* p1, const char* p2){
//	 assert(p1&&p2);
//	 const char* cur = p1;
//	 const char* s1 = NULL;
//	 const char* s2 = NULL;
//	 while (*cur){
//		 s1 = cur;
//		 s2 = p2;
//		 while (s1&&s2 && (*s1 == *s2)){
//			 s1++;
//			 s2++;
//		 }
//		 if (!(*s2))
//			 return cur;
//		 cur++;
//	 }
//	 return NULL;
// }
//
int main(void){
	char tab[] = "abc.def@ghi%";
	char* p = "@.%";
	char* ret = NULL;
	for (ret = strtok(tab, p); ret; ret = strtok(NULL, p)){
		printf("%s\n", ret);
	}
	return EXIT_SUCCESS;
}