#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	//int k = 0; char c1 = 'a'; char c2 = 'b';
//	////scanf("%d %c %c", &k, &c1, &c2);
//	//scanf("%d %c %c", &k, &c1, &c2);
//	//printf("%d,%c,%c", k, c1, c2);
//
//	return EXIT_SUCCESS;
//}
struct stu
{
	char number[5];
	char name[20];
	int grade1;
	int grade2;
	int grade3;
};
void input(struct stu arr[], int n);
void average(struct stu arr[], double* a1, double* a2, double* a3, int n);
int FindMax(struct stu arr[],int n);
int main(void){
	struct stu arr[100];
	int n; double a1, a2, a3; int indice;
	scanf("%d", &n);
	input(arr, n);
	average(arr, &a1, &a2, &a3,n);
	printf("%d %d %d\n", (int)a1, (int)a2, (int)a3);
	indice = FindMax(arr,n);
	printf("%s %s %d %d %d", arr[indice].number, arr[indice].name, arr[indice].grade1, arr[indice].grade2, arr[indice].grade3);
	return EXIT_SUCCESS;
}
void input(struct stu arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		getchar();
		//fflush(stdin);
		scanf("%[^ ]", &arr[i].number);//³ýÁË¿Õ¸ñÆäËû¾ù¶ÁÈ¡
		//fflush(stdin);
		getchar();
		scanf("%[^ ]", &arr[i].name);
		scanf("%d %d %d", &arr[i].grade1, &arr[i].grade2, &arr[i].grade3);
	}
}
void average(struct stu arr[], double* a1,  double* a2, double* a3, int n)
{
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < n; i++)
	{
		sum1 += arr[i].grade1;
		sum2 += arr[i].grade2;
		sum3 += arr[i].grade3;
	}
	*a1 = (double)sum1 / n;
	*a2 = (double)sum2 / n;
	*a3 = (double)sum3 / n;
}
int FindMax(struct stu arr[], int n)
{
	int indice = 0;
	double max = (arr[0].grade1 + arr[0].grade2 + arr[0].grade3) / 3.0;
	for (int i = 1; i < n; i++)
	{
		if (((arr[i].grade1 + arr[i].grade2 + arr[i].grade3) / 3.0)>max){
			max = arr[i].grade1 + arr[i].grade2 + arr[i].grade3 / 3.0;
			indice = i;
		}
	}
	return indice;
}