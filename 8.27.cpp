#include<stdio.h>
#include<string.h>
//void Reverse(char* p,int k,int len)
//{
//	int i = 0;
//	//ȷ������
//	for (i = 1; i <= k; i++)
//	{
//		char tmp = p[0];
//		int j = 0;
//		//ȷ����������
//		for (j = 0; j < len - 1; j++)
//		{
//			p[j] = p[j + 1];
//		}
//		if (j == len - 1)
//			p[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int k = 0;
//	int len = strlen(arr);
//	//�ж���ת�ַ����ĺϷ���
//	while (1)
//	{
//		scanf("%d", &k);
//		if (k <= len)
//			break;
//		else
//			printf("Ҫ��ת���ַ������࣬����������:>");
//	}
//	//ʵ����ת�ַ���
//	Reverse(arr,k,len);
//	printf("%s\n", arr);
//	return 0;
//}
int Judge(char* s1, char* s2)
{
	int len_s1 = strlen(s1);
	int i = 0;
	int count = 0;
	int j = 0;
	for (i = 0; i < len_s1/2 ; i++)
	{
		int tmp = i;
		j = 0;
		count = 0;
		while (s1[tmp] == s2[j])
		{
			count++;
			tmp++;
			j++;
			if (count == 6)
				return 1;
		}
	}
	return 0;
}
int main()
{
	char* s1 = "abcdefabcdef";
	char* s2 = "cdefab";
	int ret = Judge(s1, s2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}