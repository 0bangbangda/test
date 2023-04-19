#include"Weapon.h"
class Knife:public Weapon
{
public:
	Knife();
	virtual int SuckBlood(Hero *hero);
	virtual bool IsCrit();
	virtual bool IsHold();
};