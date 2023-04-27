#include<iostream>
using namespace std;
#include<string>
template<class T1, class T2>class Person;

template<class T1, class T2>void showInfo(Person<T1, T2> &p);


template<class T1,class T2>
class Person
{
	//��ģ�����Ԫ����������ʵ��
	/*friend void showInfo(Person<T1,T2> &p)
	{
		cout << "������" << p.m_name << endl << "���䣺" << p.m_age << endl;
	}*/
	//��ģ�����Ԫ������������������ʵ�֣���Ը��ӣ�
	friend void showInfo<>(Person<T1, T2> &p);
private:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
};
template<class T1,class T2>
void showInfo(Person<T1,T2> &p)
{
cout << "������" << p.m_name << endl << "���䣺" << p.m_age << endl;
}
void test1()
{
	Person<string,int> p1("����", 20);
	showInfo(p1);
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}