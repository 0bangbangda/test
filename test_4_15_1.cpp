#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
	virtual void eat()
	{
		cout << "动物在吃饭" << endl;
	}
};
class Cat :public Animal
{
public:
	virtual void speak()
	{
		cout << "小猫在说话" << endl;
	}
	virtual void eat()
	{
		cout << "小猫在吃鱼" << endl;
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