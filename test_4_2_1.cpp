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
};
class Son1 :public Base//public¼Ì³Ð
{
public:
	int m_c;
	int m_d;
};
class Son2 :protected Base//protected¼Ì³Ð
{
public:
	void showPrivate()
	{
		this->m_b = 100;
		cout << m_b << endl;
	}
	

};
class Son3 :private Base
{

};
//class Son4 :private Son3
//{
//public:
//	Son4() :m_a(0){}
//};
void test1()
{
	Son1 s1;
	s1.m_a = 10;
	cout << "sizeof(s1) = " << sizeof(Son1) << endl;
	//s1.m_b = 20;
	cout << s1.m_a << endl;
	Son2 s2;
	s2.showPrivate();
	//s2.m_a;
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}