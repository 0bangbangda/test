#include<iostream>
using namespace std;
class Calculator
{
public:
	int m_v1;
	int m_v2;
public:
	void setV1(int v)
	{
		this->m_v1 = v;
	}
	void setV2(int v)
	{
		this->m_v2 = v;
	}
	virtual int getResult()
	{
		/*if (op == '+')
			return this->m_v1 + this->m_v2;
		else if (op == '-')
			return this->m_v1 - this->m_v2;*/
		return 0;
	}
};
class Plus:public Calculator
{
public:
	virtual int getResult()
	{
		return this->m_v1 + this->m_v2;
	}
};
class Sub:public Calculator
{
public:
	virtual int getResult()
	{
		return this->m_v1 - this->m_v2;
	}
};
class Multi :public Calculator
{
public:
	virtual int getResult()
	{
		return this->m_v1*this->m_v2;
	}
};
class Div :public Calculator
{
public:
	virtual int getResult()
	{
		return this->m_v1/this->m_v2;
	}
};
void test1()
{
	/*Calculator c1;
	c1.setV1(10);
	c1.setV2(20);*/
	/*cout<<c1.getResult('+')<<endl;
	cout << c1.getResult('-') << endl;*/
	Calculator *c2 = new Multi;
	c2->setV1(10);
	c2->setV2(20);
	cout << c2->getResult() << endl;//200
	Calculator *c3 = new Sub;
	c3->setV1(10);
	c3->setV2(20);
	cout << c3->getResult() << endl;//-10
	Calculator *c4 = new Div;
	c4->setV1(10);
	c4->setV2(20);
	cout << c4->getResult() << endl;//0
	Calculator *c5 = new Plus;
	c5->setV1(10);
	c5->setV2(20);
	cout << c5->getResult() << endl;//30

}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}