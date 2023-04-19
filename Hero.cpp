#include"Hero.h"
Hero::Hero()
{
	this->m_name = "ËïÎò¿Õ";
	this->m_Atk = 50;
	this->m_Def = 50;
	this->m_Hp = 500;
	this->m_CurHp = this->m_Hp;
	this->damage = 0;
	this->m_weapon = NULL;
}
void Hero::EquipWeapon(Weapon *weapon)
{
	this->m_weapon = weapon;
}
void Hero::Attack(Monster *monster)
{
	if (this->m_weapon == NULL)
	{
		this->damage = this->m_Atk - monster->m_Def > 0 ? this->m_Atk - monster->m_Def:1;
		monster->m_CurHp -= damage;
		return;
	}
	this->damage = this->m_Atk + this->m_weapon->Base_Damage - monster->m_Def > 0 ? this->m_Atk + this->m_weapon->Base_Damage - monster->m_Def : 1;
		bool IsCrit = this->m_weapon->IsCrit();
		if (IsCrit)
		{
			damage *= 2;
		}
		int AddHp = this->m_weapon->SuckBlood(this);
		bool IsHold = this->m_weapon->IsHold();
		if (IsHold)
		{
			monster->m_IsHold = true;
		}
	monster->m_CurHp -= damage;
	this->m_CurHp = this->m_CurHp + AddHp >= this->m_Hp ? this->m_Hp : m_CurHp + AddHp;
}