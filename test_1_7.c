#include<stdio.h>
#include<stdlib.h>
//#define Max 10
/* int g_val=100; */
/* int Add(int x,int y); */
/* int main(void){ */
/*   int arr[Max];//hehe */
/*   for(int i=0;i<Max;i++)//12345 */
/*     arr[i]=i; */
/*   return EXIT_SUCCESS; */
/* } */
/* int Add(int x,int y) */
/* { */
/*   return x+y; */
/* } */
//#include<windows.h>
//int main(void)
//{
//	//Ô¤¶¨Òå·ûºÅ
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);*/
//	while (1){
//		printf("%s\n", __TIME__);
//		Sleep(1000);
//	}
//	return EXIT_SUCCESS;
//}
int main(void){
	int arr1[10];
	char arr2[] = { 'a', 'b', 'c', 'd', 'f', 'e' };
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
		arr1[i] = i;
	for (i = 0; i < 10; i++)
		printf("arr1[%d] address:%#p\n", i, &arr1[i]);
	while (1){
		printf("arr2[%d] address:%#p\n", j, &arr2[j]);
		if (arr2[j] == 'e')
			break;
		j++;
	}
	return EXIT_SUCCESS;
}
