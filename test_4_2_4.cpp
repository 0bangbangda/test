#include<iostream>
using namespace std;
class Base1
{
public:
	int m_a;
	char m_c;
public:
	Base1()
	{
		this->m_a = 10;
	}
};
class Base2
{
public:
	int m_a;
public:
	Base2()
	{
		this->m_a = 20;
	}
};
class Son :public Base1, public Base2
{
public:
	int m_b;
public:
	Son()
	{
		this->Base1::m_a = 30;
	}
};
void test1()
{
	Son s1;
	cout << s1.Base2::m_a << endl;//30
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}