#include<iostream>
#include<string>
using namespace std;
class MyOut_of_range :public exception
{
private:
	const char *m_str;
public:
	MyOut_of_range(const char *str)
	{
		this->m_str = str;
	}
	virtual const char* what()
	{
		return this->m_str;
	}
	~MyOut_of_range()
	{
	}
};
class Person
{
private:
	string m_name;
	int m_age;
public:
	Person(string name,int age)
	{
		if (age<0 || age>200)
		{
			throw MyOut_of_range("���䳬����Ч��Χ");
		}
		this->m_name = name;
		this->m_age = age;
	}
	void showInfo()const
	{
		cout << "������" << this->m_name << endl << "���䣺" << this->m_age << endl;
	}

};
void test1()
{
	try
	{
		Person p1("����", 10);
		p1.showInfo();
	}
	catch (MyOut_of_range &e)
	{
		cout << e.what() << endl;
	}
	//p1.showInfo();
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}