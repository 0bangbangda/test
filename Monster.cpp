#include"Monster.h"
Monster::Monster()
{
	this->m_name = "比克大魔王";
	this->m_Atk = 70;
	this->m_Def = 40;
	this->m_CurHp = 250;
	this->damage = 0;
	this->m_IsHold = false;
}
void Monster::Attack(Hero *hero)
{
	if (this->m_IsHold)
	{
		return;
	}
	this->damage = this->m_Atk - hero->m_Def > 0 ? this->m_Atk - hero->m_Def:1;
	hero->m_CurHp -= this->damage;
}