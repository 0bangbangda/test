#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
	virtual void eat()
	{
		cout << "�����ڳԷ�" << endl;
	}
};
class Cat :public Animal
{
public:
	virtual void speak()
	{
		cout << "Сè��˵��" << endl;
	}
	virtual void eat()
	{
		cout << "Сè�ڳ���" << endl;
	}
};
void doSpeak(Animal &animal)
{
	animal.speak();
}
void test1()
{
	Cat cat;
	Animal* animal = new Cat;
	((void(*)())(*(int*)*(int*)animal))();
	((void(*)())(*((int*)*(int*)animal + 1)))();
	//doSpeak(cat);
	//doSpeak(ani);
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}