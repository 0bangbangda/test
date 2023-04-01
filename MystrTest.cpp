#include<iostream>
#include"MyString.h"
using namespace std;
void test1()
{
	MyString str1("小明");
	//MyString str2(str1);
	MyString str2;
	str2 = "在吃饭";
	MyString str3;
	//str3 = str2;//简单的值拷贝
	str3 = str1 + str2;
	str3 = str3 + "还在看手机";
	cout << str3 << endl;
	//cout << sizeof(str1) << endl;
	MyString str4("abcd");
	//cout << str3[1] << endl;
	//cout << str4[4] << endl;
	/*if (str1 == str2)
	{
		cout << "str1和str2相同" << endl;
	}
	else
	{
		cout << "str1和str2不相同" << endl;
	}*/
	if (str1 == "小明")
	{
		cout << "str1和str2相同" << endl;
	}
	else
	{
		cout << "str1和str2不相同" << endl;
	}
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}