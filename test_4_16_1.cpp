#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak() = 0;
};
class Cat :public Animal
{
public:
	virtual void speak()
	{
		cout << "Сè��������" << endl;
	}
};
//void Animal::speak()
//{
//	cout << "������˵��" << endl;
//}
void test1()
{
	//Animal ani;
	/*Cat c1;
	c1.speak();*/
	Animal *ani = new Cat;
	ani->speak();
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}