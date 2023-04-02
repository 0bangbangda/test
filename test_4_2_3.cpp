#include<iostream>
using namespace std;
class Base
{
public:
	int m_a;
	int m_b;
	static int m_d;
public:
	Base()
	{
		this->m_a = 99;
		this->m_b = 98;
	}
	void showInfo()const
	{
		cout << "Base成员函数调用" << endl;
	}
	void showInfo(int a)const
	{
		cout << "Base成员函数重载(int a)调用" << endl;
	}
};
int Base::m_d = 10;
class Son :public Base
{
public:
	int m_a;
	int m_c;
	static int m_d;
public:
	Son()
	{
		this->m_a = 10;
		this->m_c = 20;
	}
	void showInfo()const
	{
		cout << "Son成员函数调用" << endl;
	}
	/*void showInfo(int a)const
	{
		cout << "Son成员函数重载(int a)调用" << endl;
	}*/

};
int Son::m_d = 20;
void test1()
{
	Son s1;
	cout << "s1.m_a=" << s1.m_a << endl;//10
	cout << "s1.m_a=" << s1.Base::m_a << endl;//99
	cout << "s1.m_b=" << s1.m_b << endl;//98
	cout << "s1.m_c=" << s1.m_c << endl;//20
	//s1.Base::showInfo();
	//s1.showInfo();
	//s1.Base::showInfo(1);
	cout << Son::m_d << endl;
	cout << Base::m_d << endl;
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}