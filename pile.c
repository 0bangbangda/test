#include"pile.h"
const Pile initPile={0,{0}};
int estValid(const Pile *p)
{
	return p->size==0;
}
static int overflow(const Pile *p)
{
	return p->size==MAX;
}
void empiler(Pile *p,const int x)
{
	assert(!overflow(p));
	(p->elem)[p->size]=x;
	p->size++;
}
void depiler(Pile *p)
{
	assert(!estValid(p));
	p->size--;
}
int sommet(Pile *p)
{
	return (p->elem)[p->size-1];
}
