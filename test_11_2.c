#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	/*int a = 325; double x = 3.1415926;
//	float a2 = 123.456;
//	printf("%14.3f\n",a2);
//	printf("a=%+06d x=%+e\n", a, x);*/
//	int i = 1;
//	printf("##%*d\n", i, i);
//	i++;
//	printf("##%*d\n", i, i);
//	i++;
//	printf("##%*d\n", i, i);
//	i++;
//	return EXIT_SUCCESS;
//}
struct stu
{
	char number[5];
	char name[20];
	int grade1;
	int grade2;
	int garde3;
};
void input(struct stu arr[], int n);
void print(struct stu arr[], int n);
int main(void){
	struct stu arr[100];
	int n;
	scanf("%d", &n);
	input(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%s,%s,%d,%d,%d\n", arr[i].number, arr[i].name, arr[i].grade1, arr[i].grade2, arr[i].garde3);
	}
	return EXIT_SUCCESS;
}
void input(struct stu arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		getchar();
		scanf("%[^ ]", &arr[i].number);//除了空格其他均读取
		getchar();
		scanf("%[^ ]", &arr[i].name);
		scanf("%d %d %d", &arr[i].grade1, &arr[i].grade2, &arr[i].garde3);
	}
}
void print(struct stu arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s,%s,%d,%d,%d\n", arr[i].number, arr[i].name, arr[i].grade1, arr[i].grade2, arr[i].garde3);
	}
}