#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[8] - &arr[2]);
//	return 0;
//}
//����ָ������������Զ������ַ������ȵĺ���

int my_strlen(char* str)//����ʵ��
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
		end++;
	return end - start;
}
int main()
{
	char arr[] = "abcd";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}