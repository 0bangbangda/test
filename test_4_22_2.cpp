#include<iostream>
using namespace std;
//����ģ��Ļ���ʹ��
//template<class T>
//void MySwap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//int main(void)
//{
//	//int a, b;
//	//double a, b;
//	char a, b;
//	int c;
//	cin >> a >> b;
//	MySwap<char>(a, b);
//	cout << "a = " << a << "   b = " << b << endl;
//	system("pause");
//	return EXIT_SUCCESS;
//}
//���ú���ģ��ʵ����������
//template<class T>
//void SortArray(T arr[], int len)
//{
//	//ѡ������
//	/*for (int i = 0; i < len; i++)
//	{
//		int m = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[j]>arr[m])
//				m = j;
//		}
//		T tmp = arr[i];
//		arr[i] = arr[m];
//		arr[m] = tmp;
//	}*/
//	//ð������
//	for (int i = 1; i <= len; i++)
//	{
//		for (int j = 0; j < len - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				T tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void test1()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5,5 };
//	//int len1 = sizeof(arr1) / sizeof(int);
//	char arr2[] = "abcdefg";
//	int len2 = sizeof(arr2) / sizeof(char);
//	//SortArray(arr1, len1);
//	SortArray(arr2, len2);
//	for (int i = 0; i < len2; i++)
//		cout << arr2[i] << " ";
//	cout << endl;
//}
//int main(void)
//{
//	test1();
//	system("pause");
//	return EXIT_SUCCESS;
//}