#include<iostream>
using namespace std;
class Base
{
public:
	virtual void print()
	{
		cout << "������麯������" << endl;
	}
};
class Son:public Base
{
public:
	virtual void print()
	{
		cout << "������麯������" << endl;
	}
};
void Throw()
{
	throw Son();
}
void test1()
{
	try
	{
		Throw();
	}
	catch (Base &b)
	{
		b.print();
	}
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}