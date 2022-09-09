#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
/*实现选择排序*/
//int main(void){
//	int tab[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int nb = sizeof(tab) / sizeof(tab[0]);
//	/*找最小值，并放置于前面*/
//	int i, j = 0;
//	for (i = 0; i < nb - 1; i++){
//		int min = i;
//		for (j = i; j < nb; j++){
//			if (tab[j] < tab[min]){
//				min = j;
//			}
//		}
//		if (min != i)
//		{
//			int tmp = tab[min];
//			tab[min] = tab[i];
//			tab[i] = tmp;
//		}
//	}
//	for (i = 0; i < nb; i++){
//		printf("%d ", tab[i]);
//	}
//	return EXIT_SUCCESS;
//}
/*实现strcmp函数*/
//int my_strcmp(char* str1, char* str2);
//int main(void){
//	char* p1 = "abcdef";
//	char* p2 = "cdefg";
//	int ret = my_strcmp(p1, p2);
//	if (ret > 0)
//		printf("p1 > p2\n");
//	else if (ret == 0)
//		printf("p1 == p2\n");
//	else
//		printf("p1 < p2\n");
//	return EXIT_SUCCESS;
//}
//int my_strcmp(char* str1, char* str2){
//	assert(str1&&str2);
//	while (*str1 == *str2){
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
/*模拟实现strncpy*/
void my_strncpy(char* p1, char* p2,int n,int nb);
int main(void){
	char tab1[10] = "abcdefgh";
	char tab2[] = "hello";
	int nb = sizeof(tab2) / sizeof(tab2[0]);
	int n = 0;
	scanf("%d", &n);
	my_strncpy(tab1, tab2,n,nb);
	printf("%s\n", tab1);
	return EXIT_SUCCESS;
}
void my_strncpy(char* p1, char* p2,int n,int nb){
	int i = 0;
	for (i = 0; i < n; i++){
		if (i>nb)
			*(p2 + i) = '\0';
		*(p1 + i) = *(p2 + i);
	}

}