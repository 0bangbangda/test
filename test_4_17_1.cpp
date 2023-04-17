#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Animal
{
public:
	virtual ~Animal() = 0;
	/*{
		cout << "Animal��������������" << endl;
	}*/
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
	
};
//��������������������������ʵ��
Animal::~Animal()
{
	cout << "Animal��������������" << endl;
}
class Cat :public Animal
{
private:
	char *m_name;
public:
	Cat(const char *name)
	{
		this->m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);
	}
	virtual void speak()
	{
		cout << "Сè��������" << endl;
	}
	~Cat()
	{
		if (this->m_name)
		{
			cout << "Cat��������������" << endl;
			delete[]this->m_name;
			this->m_name = NULL;
		}
	}
	void ShowNmae()
	{
		cout << this->m_name << endl;
	}
};
void test1()
{
	Animal *c1 = new Cat("TOM");
	c1->ShowName();
	delete c1;
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}