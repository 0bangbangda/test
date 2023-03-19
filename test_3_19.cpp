#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"3_19_Person.h"
using namespace std;
void test1()
{
	Person p1("уехЩ", 20);
	Person p2(p1);

}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}