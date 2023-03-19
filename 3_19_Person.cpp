#include"3_19_Person.h"
Person::Person() :m_name(NULL), m_age(0)
{
	cout << "无参构造函数调用" << endl;
}
Person::Person(char *name, int age)
{
	cout << "有参构造函数调用" << endl;
	m_name = (char*)malloc(strlen(name) + 1);
	strcpy(m_name, name);
	m_age = age;
}
Person::Person(const Person &p)
{
	cout << "深拷贝构造函数调用" << endl;
	m_name = (char*)malloc(strlen(p.m_name) + 1);
	strcpy(m_name, p.m_name);
	m_age = p.m_age;
}
Person::~Person()
{
	cout << "析构函数调用" << endl;
	free(m_name);
	m_name = NULL;
}