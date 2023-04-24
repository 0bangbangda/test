#include<iostream>
#include<string>
using namespace std;
template<class T1, class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name, T2 age);
	void showInfo()const;
};
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) :m_name(name), m_age(age)
{}
template<class T1, class T2>
void Person<T1, T2>::showInfo()const
{
	cout << "������" << this->m_name << endl << "���䣺" << this->m_age << endl;
}