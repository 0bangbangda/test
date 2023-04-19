#include"DragonSword.h"
#include"Hero.h"
DragonSword::DragonSword()
{
	this->Weapon_Name = "ÍÀÁú±¦µ¶";
	this->Base_Damage = 20;
	this->Suck_Rate = 30;
	this->Crit_Rate = 25;
	this->Hold_Rate = 20;
}
int DragonSword::SuckBlood(Hero *hero)
{
	int rate = rand() % 100 + 1;
	if (rate <= this->Suck_Rate)
		return (int)(hero->damage * 0.25);
	return 0;
}
bool DragonSword::IsCrit()
{
	int rate = rand() % 100 + 1;
	if (rate <= this->Crit_Rate)
		return true;
	return false;
}
bool DragonSword::IsHold()
{
	int rate = rand() % 100 + 1;
	if (rate <= this->Crit_Rate)
		return true;
	return false;
}