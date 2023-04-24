#include<iostream>
#include<string>
using namespace std;
template<class T1,class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name, T2 age);
	void showInfo()const;
};
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age) :m_name(name), m_age(age)
{}
template<class T1,class T2>
void Person<T1, T2>::showInfo()const
{
	cout << "姓名：" << this->m_name << endl << "年龄：" << this->m_age << endl;
}
//1.指定传入类型
//void print(Person<string, int>&p)
//{
//	p.showInfo();
//}
//2.类型参数化，让函数自己推导类型
//template<class T3,class T4>
//void print(Person<T3, T4> &p)
//{
//	cout << typeid(T3).name() << endl;
//	cout << typeid(T4).name() << endl;
//	p.showInfo();
//}
//3.整体参数化
//template<class T>
//void print(T &p)
//{
//	cout << typeid(T).name() << endl;
//	p.showInfo();
//}
//void test1()
//{
//	Person<string, int> p("张三", 20);
//	print(p);
//}
//类模板的继承
//class Son :public Person<string, int>
//{ 
//public:
//	Son() :Person("李四",25)
//	{}
//
//};
template<class T1, class T2>
class Son :public Person<T1, T2>
{
public:
	Son() :Person("王五", 30)
	{
		cout << "显示调用父类的有参构造" << endl;
	}
};
void test2()
{
	/*Son s1;
	s1.showInfo();*/
	Son<string, int>s2;
	s2.showInfo();
}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}