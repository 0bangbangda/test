#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	//int nNum = 0;
//	//char chA = '0';
//
//	//int nResult = scanf("%d%c", &nNum, &chA);//����AB
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
//����һ�е籨���֣�����ĸ�������һ��ĸ���硯a����ɡ�b��������z����ɡ��ᡯ�����ַ����䣩��
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
////����10����������������С�������һ�����Ի����������������һ�����Ի���
////д���������� ������10�������ڽ��д��������10������
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
//	//����Сֵ
//	int indice = 0;
//	int min = arr[0];
//	for (int i = 1; i < sz; i++){
//		if (arr[i] < min){
//			indice = i;
//			min = arr[i];
//		}
//	}
//	//��Сֵ�±����ҵ������н���
//	if (indice != 0){
//		int tmp = arr[indice];
//		arr[indice] = arr[0];
//		arr[0] = tmp;
//	}
//	//�����ֵ
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
	//�����Ѵ�������������
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	//�ƶ���
	scanf("%d",&m);
	//�ƶ������������ȷ����
	//�����ƶ�
	move(arr, 30,n,m);
	//��ӡarr
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return EXIT_SUCCESS;
}
void move(int arr[], int sz, int num, int foot)
{   //�ƶ��������ܴ���Ԫ�ظ���
	foot = foot%num;
	//�ƶ�num-foot����
	//���������ƽ�ƣ��ʹ��������ʼ�ƶ�
	for (int i = num - 1; i >= 0; i--)
	{
		arr[i + foot] = arr[i];
	}
	for (int i = num; i < num + foot; i++)
	{
		arr[i - num] = arr[i];
	}
}