#include<iostream>
#include<string>
using namespace std;
//template<class T1,class T2>
//class Person
//{
//public:
//	T1 m_name;
//	T2 m_age;
//public:
//	Person(T1 name, T2 age) :m_name(name), m_age(age)
//	{}
//	void showInfo()const
//	{
//		cout << "����:" << this->m_name << endl << "����:" << this->m_age << endl;
//	}
//};
//void test1()
//{
//	//Person<string, int> p1("����", 10);
//	//p1.showInfo();
//	
//}
template<class T>
class AnimalEat
{
public:
	T animal;
public:
	void show()const
	{
		this->animal.Ceat();
	}
};
class Cat
{
public:
	void Ceat()const
	{
		cout << "�����ڳ�è��" << endl;
	}

};

class Dog
{
public:
	void Deat()const
	{
		cout << "�����ڹ���" << endl;
	}
};
void test2()
{
	/*AnimalEat<Cat> c;
	c.show();*/
	/*AnimalEat<Dog> d;
	d.show();*/
}



int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}