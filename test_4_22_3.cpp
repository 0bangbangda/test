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
//���廯�Զ�����������ʱ�������е�δ֪����ȫ����ָ�����ͣ�ͬʱ�ں�������ָ���Զ�����������,����ȫ������
//�ú����ĺ������������ͷ���ֵ������ԭ����һ��һ��
template<> bool MyCmp<Person>(Person &a, Person &b)
{
	if (a.m_age == b.m_age)
		return true;
	return false;
}
template<class T>
int Add(T &a, T &b)
{
	cout << "���ú���ģ��" << endl;
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
//	cout << "������ͨ����" << endl;
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
	Person p1("����", 10);
	Person p2("����", 20);
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