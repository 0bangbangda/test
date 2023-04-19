#pragma once
#include<iostream>
#include<string>
#include"Weapon.h"
#include"Monster.h"
using namespace std;
class Hero
{
public:
	string m_name;
	int m_Atk;
	int m_Def;
	int m_Hp;
	int m_CurHp;
	int damage;
	Weapon *m_weapon;
public:
	Hero();
	void Attack(Monster *monster);
	void EquipWeapon(Weapon *weapon);
};