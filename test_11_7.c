#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main(void){
//	int x = 1, y = 2;
//	if (x > y&&x != y);
//	return EXIT_SUCCESS;
//}
//int main(void){
//	/*char c = ' ';
//	printf("%d",c);*/
//	char arr[101] = { 0 };
//	scanf("%[^\n]", arr);
//	int left = 0, right = strlen(arr) - 1;
//	while (left < right){
//		char tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++; right--;
//	}
//	printf("%s", arr);
//	return EXIT_SUCCESS;
//}
#include<assert.h>
void time(int t, int*h, int*m, int*s);
int main(void){
	int t, h, m, s;
	scanf("%d", &t);
	assert(t >= 0 && t <= 86399);
	time(t, &h, &m, &s);
	printf("%d:%d:%d", h, m, s);
	return EXIT_SUCCESS;
}
void time(int t, int*h, int*m, int*s)
{
	*h = t / 3600;
	*m = t % 3600 / 60;
	*s = t % 3600 % 60;
}
