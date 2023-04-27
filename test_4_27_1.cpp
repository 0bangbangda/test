#include<iostream>
using namespace std;
#include<string>
template<class T1, class T2>class Person;

template<class T1, class T2>void showInfo(Person<T1, T2> &p);


template<class T1,class T2>
class Person
{
	//类模板的友元函数在类内实现
	/*friend void showInfo(Person<T1,T2> &p)
	{
		cout << "姓名：" << p.m_name << endl << "年龄：" << p.m_age << endl;
	}*/
	//类模板的友元函数类内声明，类外实现（相对复杂）
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
cout << "姓名：" << p.m_name << endl << "年龄：" << p.m_age << endl;
}
void test1()
{
	Person<string,int> p1("张三", 20);
	showInfo(p1);
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}