#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	//二维数组指针p,*(p+i)表示获取第i行的数据，相当于一维数组名，在遇到sizeof,&和定义时表示整个数组的所有数据
//	int arr[3][3] = { { 0, 1, 2 }, { 1, 2, 3 }, { 3, 4, 5 } };
//	int(*p)[3];
//	p = arr;
//	printf("%d\n", sizeof(*(p + 0)));
//	return EXIT_SUCCESS;
//}
//用二维数组指针遍历整个数组
//int main(void){
//	int arr[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	int(*p)[4] = arr;
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 4; j++){
//			printf("%2d", *(*(p + i) + j));
//		}
//		putchar('\n');
//	}
//	return EXIT_SUCCESS;
//}
//函数指针
int Max(int a, int b)
{
	return (a > b ? a : b);
}
int main(void){
	int x = 10, y = 20;
	int(*pMax)(int a, int b) = Max;
	printf("%d\n", (*pMax)(x, y));
	return EXIT_SUCCESS;
}