#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//int my_memcmp(const void* p1, const void* p2, size_t num);
//int main(void){
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int num;
//	scanf("%d", &num);
//	int ret = my_memcmp(arr1, arr2,num);
//	if (ret > 0)
//		printf("arr1>arr2");
//	else if (ret == 0)
//		printf("arr1==arr2");
//	else
//		printf("arr1<arr2");
//	return EXIT_SUCCESS;
//}
//int my_memcmp(const void* p1, const void* p2, size_t num){
//	assert(p1&&p2);
//	while (num--){
//		if (*(char*)p1 == *(char*)p2){
//			++(char*)p1;
//			++(char*)p2;
//		}
//		else if (*(char*)p1 > *(char*)p2)
//			return 1;
//		else
//			return -1;
//	}
//	return 0;
//}
//int main(void){
//	/*char arr[10] = { 0 };*/
//	char arr[10] = { 0 };
//	int i;
//	for (i = 97; i < 106; i++){
//		memset(arr + i - 97, i, 1);
//	}
//	printf("%s\n", arr);
//	return EXIT_SUCCESS;
//}
struct s1
{
	char c1;
	char c2;
	int a;
};
struct s2
{
	char c1;
	int a;
	char c2;
};
int main(void){
	struct s1 s1 = { 0 };
	struct s2 s2 = { 0 };
	printf("%d %d", sizeof(s1), sizeof(s2));
	return EXIT_SUCCESS;
}