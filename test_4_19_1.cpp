#include<iostream>
#include<ctime>
#include"Hero.h"
#include"Monster.h"
#include"DragonSword.h"
#include"Knife.h"
#include"Weapon.h"
using namespace std;
void play()
{
	Hero *hero = new Hero;
	Monster *monster = new Monster;
	Weapon *knife = new Knife;
	Weapon *sword = new DragonSword;
	cout << "��ѡ������:" << endl;
	cout << "1.���ֿ�ȭ" << endl << "2.С��" << endl << "��������" << endl;
	int input;
	cin >> input;
	switch (input)
	{
	case 1:
		break;
	case 2:
		hero->EquipWeapon(knife);
		break;
	case 3:
		hero->EquipWeapon(sword);
		break;
	default:
		cout << "ѡ�����" << endl;
	}
	while (hero->m_CurHp > 0)
	{
		hero->Attack(monster);
		if (monster->m_CurHp <= 0)
		{
			cout << "��������" << endl;
			return;
		}
		monster->Attack(hero);

	}
	cout << "Ӣ������" << endl;
}
int main(void)
{
	play();
	srand((unsigned int)time(NULL));
	system("pause");
	return EXIT_SUCCESS;
}