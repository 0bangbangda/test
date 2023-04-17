#include<iostream>
using namespace std;
class AbstractDrink
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//扩展
class DrinkTea:public AbstractDrink
{
public:
	virtual void Boil()
	{
		cout << "煮自来水" << endl;
	}
	virtual void Brew()
	{
		cout << "把水倒入杯中" << endl;
	}
	virtual void PourInCup()
	{
		cout << "把茶叶放入杯中" << endl;
	}
	virtual void PutSomething()
	{
		cout << "加点蜂蜜" << endl;
	}
};
class DrinkCoffe:public AbstractDrink
{
public:
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	virtual void Brew()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PourInCup()
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void PutSomething()
	{
		cout << "加点牛奶和糖" << endl;
	}
};
void test1()
{
	//喝咖啡
	AbstractDrink *d1 = new DrinkCoffe;
	d1->MakeDrink();
	//喝茶
	AbstractDrink *d2 = new DrinkTea;
	d2->MakeDrink();
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}