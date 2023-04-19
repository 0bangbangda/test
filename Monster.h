#pragma once
#include<iostream>
#include<string>
#include"Hero.h"
using namespace std;
class Monster
{
public:
	string m_name;
	int m_Atk;
	int m_Def;
	int m_CurHp;
	bool m_IsHold;
	int damage;
public:
	Monster();
	void Attack(Hero *hero);
};