#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//int main(void){
//	FILE* pf=fopen("test.txt", "r");
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));
//	else
//		printf("open file success");
//	return EXIT_SUCCESS;
//}
//#include<ctype.h>
//int main(void){
//	char tab[] = "Je m'appelle Leo";
//	int i = 0;
//	while (tab[i]){
//		if (isupper(tab[i]))
//			tab[i] = tolower(tab[i]);/*该函数并不是在原字符的基础上进行修改，所以返回值需要存起来*/
//		i++;
//	}
//	printf("%s\n", tab);
//	return EXIT_SUCCESS;
//}
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t num);
struct stu
{
	char name[30];
	int age;
};
int main(void){
	int arr1[] = { 1, 2, 3, 4, 5 };
	struct stu arr3[] = { { "张三", 18 }, { "李四", 20 } };
	struct stu arr4[5] = { 0 };
	int i;
	my_memmove(arr1+2, arr1, 12);
	my_memmove(arr4, arr3, sizeof(arr3));
	for (i = 0; i < 5; i++){
		printf("%d ", arr1[i]);
	}
	return EXIT_SUCCESS;
}
void* my_memmove(void* dest, const void* src, size_t num){
	assert(dest&&src);
	void* ret = dest;
	if (dest < src)
	{
		while (num--){
			*(char*)dest = *(char*)src;
			++(char*)dest;
			((char*)src)++;

		}
	}
	else
	{
		(char*)src += num - 1;
		(char*)dest += num - 1;
		while (num--){
			*(char*)dest = *(char*)src;
			--(char*)src;
			--(char*)dest;
		}
	}
	return ret;
}