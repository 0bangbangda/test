#include<iostream>
#include<string>
using namespace std;
#include<stdexcept>
class Person
{
private:
	string m_name;
	int m_age;
public:
	Person(string name, int age)
	{
		if (age<0 || age>200)
		{
			throw out_of_range("年龄超出有效范围");
			this->m_name = name;
			this->m_age = age;
		}
	}
};
void test1()
{
	try
	{
		Person p1("张三", 300);
	}
	catch (out_of_range &e)
	{
		cout << e.what() << endl;
	}
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}