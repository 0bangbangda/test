#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define DEBUG
//char* strcpy1(char *p1, const char *p2){
//	char *dest = p1;
//	while (*p2){
//		*p1++ = *p2++;
//	}
//	return dest;
//}
//int main(void){
//	char str1[20] = "abcdef";
//	char str2[] = "haha";
//	//strcpy(str1, str2);
//	strcpy1(str1, str2);
//#ifdef DEBUG
//	printf("%s\n", str1);
//#endif
//	return EXIT_SUCCESS;
//}
//int main(void){
//	char s[6];
//	s = "abcd", printf("\"%s\"\n");
//	return EXIT_SUCCESS;
//}
//int main(void){
//	int a = 10;
//	int *pa = &a, *paa = &a;
//	double b = 9.1, *pb = &b;
//	char c = '#', *pc = &c;
//	//变量地址
//	printf("&a = %#X,&b = %#X,&c = %#X\n", &a, &b, &c);
//	printf("&a = %#X,&b = %#X,&c = %#X\n", pa, pb, pc);
//	//加法运算
//	pa += 2, pb += 2, pc += 2;
//	printf("&a = %#X,&b = %#X,&c = %#X\n", pa, pb, pc);
//	//减法运算
//	pa -= 3, pb -= 3, pc -= 3;
//	printf("&a = %#X,&b = %#X,&c = %#X\n", pa, pb, pc);
//	printf("%d %d\n", *pa, *paa);
//	return EXIT_SUCCESS;
//}
//int main(void){
//	char a = 97;
//	printf("%d", a);
//	return EXIT_SUCCESS;
//}
//把整数字符串转换为整数
//#include<math.h>
//int trans(char *p);
//int main(void){
//	char str[10];
//	gets_s(str, 10);
//	int ret = trans(str);
//	printf("%d\n", ret);
//	return EXIT_SUCCESS;
//}
//int trans(char *p)
//{
//	int flat = 1, k;
//	char *set = NULL;
//	if (*p == '-'){
//		set = p + 1;
//		flat = -1;
//	}
//	else
//		set = p;
//	int num = 0, sum = 0;
//	while (*++p != '\0');
//	p--;
//	while (p >= set){
//		k = *p - '0';
//		for (int i = 0; i < num; i++)
//			k *= 10;
//		sum += k;
//		num++, p--;
//	}
//	return (flat*sum);
//	
//}
//把八进制正整数字符串转换为十进制整数
//int main(void){
//	char *p, s[6]; int n;
//	p = s;
//	gets(p);
//	n = *p - '0';
//	while (*(++p) != '\0') n = n * 8 + *p - '0';
//	printf("%d\n", n);
//	return EXIT_SUCCESS;
//}
//把十进制正整数字符串转换为十进制整数
//int main(void){
//	char str[10]; int n; char *p;
//	gets_s(str, 10);
//	p = str;
//	n = *str - '0';
//	while (*++p != '\0')
//		n = n * 10 + *p - '0';
//	printf("%d\n", n);
//	return EXIT_SUCCESS;
//}
//一个整型数组中只有两个数字只出现一次，其他数字均出现两次。找出这两个数字
int main(void){
	int arr[] = {1,1,2,2,3,44,44,6,7,7,8,8}, count = 0, tmp;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++){
		tmp = arr[i];
		for (int j = 0; j < sizeof(arr) / sizeof(int); j++){
			if (arr[j] == tmp)
				count++;
		}
		if (count == 1)
			printf("%d ", tmp);
		count = 0;
	}
	return EXIT_SUCCESS;
}