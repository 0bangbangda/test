#include<stdio.h>
#include<stdlib.h>
//���ַ����е������������
//int main(void){
//	char *str = "abcdef", *p;
//	p = str;
//	while (*(++p) != '\0');
//	while ((--p) >= str)
//		printf("%c", *p);
//	return EXIT_SUCCESS;
//}
//�ú�����������������ֵ
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
//�ú����ҳ������е����ֵ����������ʱ��������ָ����Ϊ�β�
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
//����nums������0��n������������������ȱ��һ�������ҳ��Ǹ�������0��n����ʱ����
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