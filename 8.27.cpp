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
//ʵ�����ַ������ж�
//int Judge(char* s1, char* s2)
//{
//	int len_s1 = strlen(s1);
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 0; i < len_s1/2 ; i++)
//	{
//		int tmp = i;
//		j = 0;
//		count = 0;
//		while (s1[tmp] == s2[j])
//		{
//			count++;
//			tmp++;
//			j++;
//			if (count == 6)
//				return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char* s1 = "abcdefabcdef";
//	char* s2 = "cdefab";
//	int ret = Judge(s1, s2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//int is_left_move(char* s1, const char* s2)
//{//�ж������ַ����ĳ����Ƿ����
//
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//׷���ַ�
//	strncat(s1, s1, len1);
//	//�ж��Ƿ�Ϊ�ִ�
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	const char arr2[] = "cbdefa";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//		printf("No\n");
//	return 0;
//}
//�����Ͼ����в���ĳ����
int FindNum(int arr[4][4], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	if (k<arr[0][0] || k>arr[*px - 1][*py - 1])
	{
		return 0;
	}
	while (x <= 3 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int k = 0;
	printf("������Ҫ�ҵ���:>");
	scanf("%d", &k);
	int x = 4;
	int y = 4;
	//��ַ���ã�Ŀ�����ǵ��ú����Ľ���ܴ���������
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ��ˣ�����Ϊ: %d %d\n", x, y);
	}
	else
		printf("�Ҳ���\n");
	return 0;
}