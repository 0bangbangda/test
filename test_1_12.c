#include<stdio.h>
#include<stdlib.h>
//将字符串中的内容逆序输出
//int main(void){
//	char *str = "abcdef", *p;
//	p = str;
//	while (*(++p) != '\0');
//	while ((--p) >= str)
//		printf("%c", *p);
//	return EXIT_SUCCESS;
//}
//用函数交换两个变量的值
//void swap(int *px, int *py);
//int main(void){
//	int a = 65, b = 90;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return EXIT_SUCCESS;
//}
//void swap(int *px, int *py)
//{
//	int tmp;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//用函数找出数组中的最大值，传递数组时需用数组指针作为形参
//int Max(int *p);
//int main(void){
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//		scanf("%d",arr + i);
//	printf("max is:%d\n", Max(arr));
//	return EXIT_SUCCESS;
//}
//int Max(int *p)
//{
//	//int len = sizeof(p);
//	int max = *p;
//	for (int i = 1; i < 10; i++){
//		if (*(p + i)>max)
//			max = *(p + i);
//	}
//	return max;
//}
//数组nums包含从0到n的所有整数，但其中缺了一个数，找出那个数，在0（n）的时间内
#include<string.h>
int main(void){
	int arr[] = { 9, 7, 6, 4, 5, 1, 2, 3, 0 };
	int len = sizeof(arr) / sizeof(int);
	int* p = (int*)malloc((len+1) * 4);
	if (p == NULL){
		printf("%s\n", strerror(errno));
	}
	memset(p, -1, (len + 1) * 4);
	for (int i = 0; i < len; i++){
		*(p + arr[i]) = arr[i];
	}
	for (int i = 0; i < len + 1; i++){
		if (*(p + i) == -1)
			printf("%d\n", i);
	}
	free(p);
	p = NULL;
	return EXIT_SUCCESS;
}