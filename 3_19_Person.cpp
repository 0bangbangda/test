#include"3_19_Person.h"
Person::Person() :m_name(NULL), m_age(0)
{
	cout << "�޲ι��캯������" << endl;
}
Person::Person(char *name, int age)
{
	cout << "�вι��캯������" << endl;
	m_name = (char*)malloc(strlen(name) + 1);
	strcpy(m_name, name);
	m_age = age;
}
Person::Person(const Person &p)
{
	cout << "������캯������" << endl;
	m_name = (char*)malloc(strlen(p.m_name) + 1);
	strcpy(m_name, p.m_name);
	m_age = p.m_age;
}
Person::~Person()
{
	cout << "������������" << endl;
	free(m_name);
	m_name = NULL;
}