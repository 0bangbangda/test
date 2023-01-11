#include<stdio.h>
#include<stdlib.h>
//char* FindMax(char* p);
//void Sort(char *pmax,char *p);
//int main(void){
//	char str[10];
//	gets_s(str, 10);
//	char *pmax = FindMax(str);
//	Sort(pmax,str);
//	printf("%s\n", str);
//	return EXIT_SUCCESS;
//}
//char* FindMax(char* p)
//{
//	char m = *p, *pos = p;
//	for (int i = 1; i < 10; i++){
//		if (p[i]>m){
//			m = *(p + i);
//			pos = p + i;
//		}
//	}
//	return pos;
//}
//void Sort(char *pmax, char *p)
//{
//	char str2[10] = { 0 };
//	str2[0] = *pmax;
//	for (int i = 0,j=1; i < 10; i++){
//		if ((p+i) == pmax)
//			continue;
//		else{
//			str2[j] = p[i];
//			j++;
//		}	
//	}
//	for (int i = 0; i < 10; i++)
//		*(p + i) = str2[i];
//}
int main(void){
	char str[10], *p, *pmax, max;
	gets_s(str, 10);
	p = str;
	//ÕÒ×î´ó
	max = *(p++);
	while ((*p) != '\0'){
		if ((*p) > max){
			max = *p;
			pmax = p;
		}
		p++;
	}
	p = pmax;
	while (p > str){
		*p = *(p - 1);
		p--;
	}
	*p = max;
	puts(p);
	return EXIT_SUCCESS;
}