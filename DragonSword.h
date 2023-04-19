#include"Weapon.h"
class DragonSword:public Weapon
{
public:
	int Suck_Rate;
	int Crit_Rate;
	int Hold_Rate;
public:
	DragonSword();
	virtual int SuckBlood(Hero *hero);
	virtual bool IsCrit();
	virtual bool IsHold();
};