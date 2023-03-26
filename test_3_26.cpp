#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"MyArray.h"

void test1()
{
	MyArray arr1;
	MyArray arr2(30);
	arr1.push_back(1);
	arr1.push_back(2);
	arr1.push_back(3);
	arr1.setData(4, 4);
	for (int i = 0; i < arr1.getSize(); i++)
		cout << arr1.getData(i) << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)
		arr2.push_back(i);
	MyArray arr3(arr2);
	for (int i = 0; i < arr3.getSize(); i++)
		cout << arr3.getData(i) << " ";
	cout << endl;
}

class Person
{
public:
	int m_a;
	int m_b;
	char *m_name;
public:
	Person() :m_a(0), m_b(0),m_name(NULL){}
	Person(int a, int b,char *name)
	{
		this->m_a = a;
		this->m_b = b;
		this->m_name = new char[strlen(name) + 1];
		strcpy(this->m_name, name);
	}
	~Person()
	{
		cout << "析构函数调用" << endl;
		delete[]this->m_name;
		this->m_name = NULL;
	}
	void showInfo()const
	{
		cout << "m_a = " << this->m_a << " " << "m_b = " << this->m_b << endl;
	}
	Person operator+(const Person &p)const
	{
		Person tmp;
		tmp.m_a = this->m_a + p.m_a;
		tmp.m_b = this->m_b + p.m_b;
		return tmp;
	}
	//重载递增递减运算符++、--
	//后置++,有个占位参数
	Person operator++(int)
	{
		Person tmp;
		tmp.m_a = this->m_a++;
		tmp.m_b = this->m_b++;
		return tmp;
	}
	//前置++
	Person& operator++()
	{
		this->m_a++;
		this->m_b++;
		return *this;
	}
	//重载赋值运算符
	Person& operator=(const Person &p2)
	{
		this->m_name = new char[strlen(p2.m_name) + 1];
		strcpy(this->m_name, p2.m_name);
		return *this;
	}
};
//加号运算符+重载
//Person operator+(const Person &p1, const Person &p2);
//左移运算符<<重载
ostream& operator<<(ostream &cout, const Person &p);
//重载左移运算符<<来输出string类
ostream& operator<<(ostream &cout, string s);
//重载右移运算符>>
istream& operator>>(istream &cin, Person &p);


//void test2()
//{
//	Person p1(1, 1);
//	Person p2(2, 2);
//	Person p3 = p1 + p2;
//	//p3.showInfo();
//}

//void test3()
//{
//	//Person p1(1, 1);
//	//cout << p1 << endl;
//	string s1 = "12345";
//	string s2 = "狗蛋";
//	cout << s1 << endl << s2 << endl;
//}
//void test4()
//{
//	Person p1;
//	cin >> p1;
//	cout << p1;
//}
//void test5()
//{
//	Person p1(1, 1);
//	cout<<p1++;
//	cout << p1;
//	cout << ++p1;
//}
//智能指针托管在堆区开辟的对象
class smartPointer
{
public:
	Person *m_p;
public:
	smartPointer() :m_p(NULL){}
	smartPointer(Person *p)
	{
		this->m_p = p;
	}
	~smartPointer()
	{
		delete this->m_p;
		this->m_p = NULL;
	}
	//重载指针运算符
	Person*& operator->()
	{
		return this->m_p;
	}
	Person& operator*()
	{
		return *(this->m_p);
	}
};
//void test6()
//{
//	Person *p = new Person(10, 10);
//	//delete p;
//	smartPointer sm(p);
//	sm->showInfo();
//	(*sm).showInfo();
//	p = NULL;
//}
void test7()
{
	Person p1(1, 1,"狗蛋");
	Person p2(2, 2,"狗剩");
	Person p3;
	p3=p1 = p2;
	cout << p1.m_name<<endl;
	cout << p3.m_name << endl;
}
void test8()
{
	MyArray arr1(30);
	for (int i = 0; i < arr1.getCapacity(); i++)
		arr1.push_back(i);
	for (int i = 0; i < arr1.getSize(); i++)
		cout << arr1.getData(i) << " ";
	cout << endl<<arr1[0] << endl;
	arr1[0] = 1000;
	cout << endl << arr1[0] << endl;
}
int main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	test8();
	system("pause");
	return EXIT_SUCCESS;
}
//Person operator+(const Person &p1, const Person &p2)
//{
//	Person tmp;
//	tmp.m_a = p1.m_a + p2.m_a;
//	tmp.m_b = p1.m_b + p2.m_b;
//	return tmp;
//}
ostream&  operator<<(ostream &cout, const Person &p)
{
	cout << "m_a = " << p.m_a << endl;
	cout << "m_b = " << p.m_b << endl;
	return cout;
}
ostream& operator<<(ostream &cout, string s)
{
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it;
	return cout;
}
istream& operator>>(istream &cin, Person &p)
{
	cin >> p.m_a >> p.m_b;
	return cin;
}
