#include"Knife.h"
Knife::Knife()
{
	this->Weapon_Name = "С��";
	this->Base_Damage = 10;
}
int Knife::SuckBlood(Hero *hero)
{
	return 0;
}
bool Knife::IsCrit()
{
	return false;
}
bool Knife::IsHold()
{
	return false;
}