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
		cout << "小猫在喵喵叫" << endl;
	}
};
//void Animal::speak()
//{
//	cout << "动物在说话" << endl;
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