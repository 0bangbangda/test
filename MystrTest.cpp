#include<iostream>
#include"MyString.h"
using namespace std;
void test1()
{
	MyString str1("С��");
	//MyString str2(str1);
	MyString str2;
	str2 = "�ڳԷ�";
	MyString str3;
	//str3 = str2;//�򵥵�ֵ����
	str3 = str1 + str2;
	str3 = str3 + "���ڿ��ֻ�";
	cout << str3 << endl;
	//cout << sizeof(str1) << endl;
	MyString str4("abcd");
	//cout << str3[1] << endl;
	//cout << str4[4] << endl;
	/*if (str1 == str2)
	{
		cout << "str1��str2��ͬ" << endl;
	}
	else
	{
		cout << "str1��str2����ͬ" << endl;
	}*/
	if (str1 == "С��")
	{
		cout << "str1��str2��ͬ" << endl;
	}
	else
	{
		cout << "str1��str2����ͬ" << endl;
	}
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}