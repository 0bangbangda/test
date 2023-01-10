#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////找出子串在母串中出现的次数
//int count(const char *s1, const char *s2);
//int find(const char *s1, const char *s2);
//int main(void){
//	char *str1 = "abcdefbcghcde";
//	char *str2 = "bc";
//	//printf("%s\n", strstr(str1, str2));
//	printf("%d\n", count(str1, str2));
//	return EXIT_SUCCESS;
//}
//int count(const char *s1, const char *s2)
//{
//	int count = 0;
//	if (strlen(s1) < strlen(s2))
//		return 0;
//	else{
//		while (*s1 != '\0'){
//			if (*s1 == *s2)
//				count += find(s1, s2);
//			s1++;
//		}
//	}
//	return count;
//}
//int find(const char *s1, const char *s2)
//{
//	int len_s2 = strlen(s2), tmp = 0;
//	while (*s1 == *s2&&*s1 != '\0'&&*s2 != '\0'){
//		tmp++;
//		s1++; s2++;
//	}
//	if (tmp == len_s2)
//		return 1;
//	else
//		return 0;
//}
//int main(void){
//	char str[] = "http://c.biancheng.net", *pstr; int i, len = strlen(str);
//	pstr = str;
//	//使用*(pstr+i)
//	for (i = 0; i < len; i++)
//		printf("%c", *(pstr + i));
//	putchar('\n');
//	//使用pstr[i]
//	for (i = 0; i < len; i++)
//		printf("%c", pstr[i]);
//	putchar('\n');
//	//使用*(str+i)
//	for (i = 0; i < len; i++)
//		printf("%c", *(str + i));
//	printf("\n");
//	return EXIT_SUCCESS;;
//}
//找单身狗
int main(void){
	int arr[10] = { 0 }, count = 0, k = 0, m = 0, n = 0;
	int arr_0[10] = { 0 }, arr_1[10] = { 0 };
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 10; i++)
		k = k^arr[i];
	//判断k的二进制第几位是1
	while ((k & 1) == 0){
		k >>= 1;
		count++;
	}
	for (int i = 0, j = 0, k = 0; k < 10; k++){
		if (((arr[k]) >> count & 1) == 0){
			arr_0[i] = arr[k];
			i++;
		}
		else{
			arr_1[j] = arr[k];
			j++;
		}
	}
	for (int i = 0; i < 10; i++){
		m = m^arr_0[i];
		n = n^arr_1[i];
	}
	printf("%d %d\n", m, n);
	return EXIT_SUCCESS;
}