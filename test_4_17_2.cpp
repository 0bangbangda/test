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
//��չ
class DrinkTea:public AbstractDrink
{
public:
	virtual void Boil()
	{
		cout << "������ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "��ˮ���뱭��" << endl;
	}
	virtual void PourInCup()
	{
		cout << "�Ѳ�Ҷ���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�ӵ����" << endl;
	}
};
class DrinkCoffe:public AbstractDrink
{
public:
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void Brew()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�ӵ�ţ�̺���" << endl;
	}
};
void test1()
{
	//�ȿ���
	AbstractDrink *d1 = new DrinkCoffe;
	d1->MakeDrink();
	//�Ȳ�
	AbstractDrink *d2 = new DrinkTea;
	d2->MakeDrink();
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}