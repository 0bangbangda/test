#include<iostream>
using namespace std;
class Base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
public:
	Base()
	{
		cout << "Base���޲ι������" << endl;
	}
	Base(int a, int b, int c)
	{
		cout << "Base���вι������" << endl;
		this->m_a = a;
		this->m_b = b;
		this->m_c = c;

	}
	~Base()
	{
		cout << "Base��������������" << endl;
	}
};
class Son:public Base
{
private:
	int m_c;
	int m_d;
public:
	Son(int c, int d) :m_c(c), m_d(d), Base(1, 2, 3){}
	~Son()
	{
		cout << "Son��������������" << endl;
	}
};
void test1()
{
	Son s1(1, 2);
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}