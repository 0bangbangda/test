#include<stdio.h>
#include<stdlib.h>
//#define N 20
//int main(void){
//	int arr[N], i;
//	for (i = 0; i < N; i++)
//		arr[i] = 1;
//	i = 0;
//	while (1){
//		scanf("%d", &arr[i]);
//		if (arr[i] == 0)
//			break;
//		i++;
//	}
//	i = 0;
//	while (1){
//		int big = 1, small = 0, Big[54] = { 0 };
//		if (arr[i] == 0)
//			break;
//		for (int j = 1; j <arr[i]; j++){
//			if (j <= 6){
//				if (j < 4)
//					small++;
//				else{
//					small -= 1;
//					big += 1;
//					small += big;
//				}
//			}
//			else{
//				small -= Big[j - 3];
//				big += Big[j - 3];
//				small += big;
//			}
//			Big[j] = big;
//		}
//		printf("%d\n", small + big);
//		i++;
//	}
//	return EXIT_SUCCESS;
//}
//二级指针的使用
int main(void){
	int a = 100;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	printf("%d %d %d %d\n", a, *p1, **p2, ***p3);
	printf("&a=%#X p1=%#X *p2=%#X **p3=%#X\n", &a, p1, *p2, **p3);
	printf("&p1=%#X p2=%#X *p3=%#X\n", &p1, p2, *p3);
	return EXIT_SUCCESS;
}
int removeElement(int* nums, int numsSize, int val){
	int count = 0;
	for (int i = 0; i<numsSize; i++){
		if (nums[i] == val){
			count++;
			for (int j = i; j<numsSize - 1; j++){
				if (nums[j + 1] != val)
					nums[j] = nums[j + 1];
			}
		}
	}
	return numsSize - count;
}