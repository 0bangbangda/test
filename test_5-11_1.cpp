#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
class Person
{
private:
	string m_name;
	int m_age;
public:
	Person(string name, int age) :m_name(name), m_age(age)
	{}
	void showInfo()const
	{
		cout << "姓名：" << this->m_name << " " << "年龄：" << this->m_age << endl;
	}
};
void print(int x)
{
	cout << x << " ";
}
void print2(const Person &p)
{
	p.showInfo();
}
void print3(Person *p)
{
	p->showInfo();
}
void print4(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//三种遍历方式
	/*vector<int>::iterator it1= v1.begin();
	vector<int > ::iterator it2 = v1.end();
	while (it1 != it2)
	{
		cout << *(it1) << " ";
		it1++;
	}*/
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	//使用STL的算法
	cout << endl;
	for_each(v1.begin(), v1.end(), print);
}
void test2()
{
	vector<Person> v1;
	Person p1("大头儿子", 10);
	Person p2("小头爸爸", 30);
	Person p3("围裙妈妈", 28);
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	//for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
	//{
	//	//it->showInfo();
	//	(*it).showInfo();
	//}
	for_each(v1.begin(), v1.end(), print2);
}
void test3()
{
	vector<Person*> v1;
	Person p1("大头儿子", 10);
	Person p2("小头爸爸", 30);
	Person p3("围裙妈妈", 28);
	v1.push_back(&p1);
	v1.push_back(&p2);
	v1.push_back(&p3);
	//for (vector<Person*>::iterator it = v1.begin(); it != v1.end(); it++)
	//{
	//	(*(*it)).showInfo();
	//	//(*it)->showInfo();
	//}
	for_each(v1.begin(), v1.end(), print3);
}
void test4()
{
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
		v3.push_back(i + 20);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	/*for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
		{
			cout << *it2 << " ";
		}
		cout << endl;
	}*/
	for_each(v.begin(), v.end(), print4);
}
int main(void)
{
//	test1();
	//test2();
	//test3();
	test4();
	system("pause");
	return EXIT_SUCCESS;
}