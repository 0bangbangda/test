#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	//int nNum = 0;
//	//char chA = '0';
//
//	//int nResult = scanf("%d%c", &nNum, &chA);//输入AB
//
//	//printf("nNum = %d\n", nNum);
//	//printf("nResult = %d\n", nResult);
//	//printf("chA = %c\n", chA);
//
//
//	//scanf("%c", &chA);
//	//printf("Again chA = %c\n", chA);
//	char s[] = { 0 };
//	while ((scanf("%[^\n]", s)) != EOF){
//		//fflush(stdin);
//		printf("%d", getchar());
//		printf("%s\n", s);
//	}
//
//}
//输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。
//#include<ctype.h>
//int main(void){
//	char arr[100];
//	gets_s(arr, 20);
//	int i = 0;
//	while (arr[i]){
//		if (islower(arr[i]))
//			arr[i] = (arr[i] - 96) % 26 + 97;
//		else if (isupper(arr[i]))
//			arr[i] = (arr[i] - 64) % 26 + 65;
//		i++;
//	}
//	printf("%s", arr);
//	return EXIT_SUCCESS;
//}
//int cmp(const void* a, const void* b);
////int main(void){
////	int arr[3];
////	for (int i = 0; i < 3; i++)
////		scanf("%d", &arr[i]);
////	qsort(arr, 3, sizeof(int), cmp);
////	for (int i = 0; i < 3; i++)
////		printf("%d ", arr[i]);
////	return EXIT_SUCCESS;
////}
//int cmp(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
////输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
////写三个函数； ①输入10个数；②进行处理；③输出10个数。
//void init(int arr[], int sz);
//void sort(int arr[], int sz);
//void print(int arr[], int sz);
//int main(void){
//	int arr[10];
//	init(arr, 10);
//	sort(arr, 10);
//	print(arr, 10);
//	/*qsort(arr, 10, sizeof(int), cmp);
//	print(arr, 10);*/
//	return EXIT_SUCCESS;
//}
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		scanf("%d", &arr[i]);
//}
//void sort(int arr[], int sz)
//{
//	//找最小值
//	int indice = 0;
//	int min = arr[0];
//	for (int i = 1; i < sz; i++){
//		if (arr[i] < min){
//			indice = i;
//			min = arr[i];
//		}
//	}
//	//最小值下标已找到，进行交换
//	if (indice != 0){
//		int tmp = arr[indice];
//		arr[indice] = arr[0];
//		arr[0] = tmp;
//	}
//	//找最大值
//	indice = sz - 1;
//	int max = arr[indice];
//	for (int i = 1; i < sz - 1; i++){
//		if (arr[i]>max){
//			indice = i;
//			max = arr[i];
//		}
//	}
//	if (indice != sz - 1){
//		int tmp = arr[indice];
//		arr[indice] = arr[sz - 1];
//		arr[sz - 1] = tmp;
//	}
//
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
void move(int arr[], int sz,int num,int foot);
int main(void){
	int n, m;
	scanf("%d", &n);
	int arr[30];
	//数组已创建，向其输入
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	//移动量
	scanf("%d",&m);
	//移动量，数组均已确定。
	//进行移动
	move(arr, 30,n,m);
	//打印arr
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return EXIT_SUCCESS;
}
void move(int arr[], int sz, int num, int foot)
{   //移动个数可能大于元素个数
	foot = foot%num;
	//移动num-foot个数
	//向数组后面平移，就从数组最后开始移动
	for (int i = num - 1; i >= 0; i--)
	{
		arr[i + foot] = arr[i];
	}
	for (int i = num; i < num + foot; i++)
	{
		arr[i - num] = arr[i];
	}
}