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
#include<ctype.h>
int main(void){
	char arr[100];
	gets_s(arr, 20);
	int i = 0;
	while (arr[i]){
		if (islower(arr[i]))
			arr[i] = (arr[i] - 96) % 26 + 97;
		else if (isupper(arr[i]))
			arr[i] = (arr[i] - 64) % 26 + 65;
		i++;
	}
	printf("%s", arr);
	return EXIT_SUCCESS;
}