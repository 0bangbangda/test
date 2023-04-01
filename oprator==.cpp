#include<iostream>
#include<string>
using namespace std;
class Person
{
	friend bool operator==(const Person &p1, const Person &p2);
	friend bool operator!=(const Person &p1, const Person &p2);
private:
	string m_name;
	int m_age;
public:
	Person(string name, int age) :m_name(name), m_age(age){}
	Person(const Person &p)
	{
		this->m_name = p.m_name;
		this->m_age = p.m_age;
	}
	/*bool operator==(const Person &p)
	{
		return (this->m_name == p.m_name&&this->m_age == p.m_age) ? true : false;
	}*/
};
bool operator==(const Person &p1, const Person &p2)
{
	return (p1.m_name == p2.m_name&&p1.m_age == p2.m_age) ? true : false;
}
bool operator!=(const Person &p1, const Person &p2)
{
	return (p1.m_name == p2.m_name&&p1.m_age == p2.m_age) ? false : true;
}
void test1()
{
	Person p1("张三", 10);
	Person p2("李四", 20);
	if (p1 == p2)
	{
		cout << "p1 和 p2 相同" << endl;
	}
	else
	{
		cout << "p1 和 p2 不相同" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1 和 p2 不相同" << endl;
	}
	else
	{
		cout << "p1 和 p2 相同" << endl;
	}
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}