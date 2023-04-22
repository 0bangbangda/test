#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	int m_age;
	string m_name;
public:
	Person(string name, int age) :m_name(name), m_age(age){}
};
template<class T>
bool MyCmp(T &a, T &b)
{
	return a == b ? true : false;
}
//具体化自定义数据类型时，把所有的未知类型全换成指定类型，同时在函数名后指定自定义数据类型,其他全都不变
//该函数的函数名，参数和返回值必须与原函数一摸一样
template<> bool MyCmp<Person>(Person &a, Person &b)
{
	if (a.m_age == b.m_age)
		return true;
	return false;
}
template<class T>
int Add(T &a, T &b)
{
	cout << "调用函数模板" << endl;
	return a + b;
}
template<> int Add<Person>(Person &a, Person &b)
{
	return a.m_age + b.m_age;
}
//template<class T1,class T2>
//T2 Add(T1 a, T1 b, T2 c)
//{
//	return a + b + c;
//}
//int Add(int a, int b)
//{
//	cout << "调用普通函数" << endl;
//	return a + b;
//}


//void test1()
//{
//	int a = 1;
//	int b = 2;
//	char c = 'a';
//	//cout << "a + b = " << Add(a, c) << endl;
//	cout << "a + b = " << Add(a, b) << endl;
//	cout << "a + b + c = " << Add<int,char>(a, b, c) << endl;
//}
void test2()
{
	Person p1("张三", 10);
	Person p2("李四", 20);
	cout << Add(p1, p2) << endl;
	int ret = MyCmp(p1, p2);
	cout << ret << endl;
}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}