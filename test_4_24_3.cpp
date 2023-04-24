#include<iostream>
#include<string>
using namespace std;
#include"Person.hpp"
void test1()
{
	Person<string, int>p("уехЩ",30);
	p.showInfo();
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}