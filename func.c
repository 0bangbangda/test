#include"func.h"

Complexe initComplexe(double reel,double img)
{
static Complexe c;
c.reel=reel;
c.img=img;
return c;
}
void ecrireComplexe(Complexe c)
{
printf("(%.4f,%.4f)",c.reel,c.img);
}
const double pi=3.1415926;
const double eps=1E-10;
const Complexe I={0,1.0};
double partieReelle(const Complexe *c)
{
return c->reel;
}
double partieImaginaire(const Complexe *c)
{
return c->img;
}
double rho(const Complexe  *c)
{
return sqrt(c->reel*c->reel+c->img*c->img);
}
double theta(const Complexe *c)
{
return atan2(c->reel,c->img);
}
double theta2(const Complexe *c)
{
if(c->reel<eps)
{
if(c->img<eps)
	return 0;
else
	return c->img>0?pi/2:-pi/2;
}
else
{
if(c->reel>0)
	return atan(c->img/c->reel);
else
	return c->img>0?atan(c->img/c->reel)+pi:atan(c->img/c->reel)-pi;
}
}
Complexe polComplexe(double rho,double theta)
{
Complexe c={rho*cos(theta),rho*sin(theta)};
return c;
}
Complexe plus(const Complexe *a,const Complexe *b)
{
	static Complexe c;
	c.reel=a->reel+b->reel;
	c.img=a->img+b->img;
	return c;
}

Complexe moins(const Complexe *a,const Complexe *b)
{
	static Complexe c;
	c.reel=a->reel-b->reel;
	c.img=a->img-b->img;
	return c;
}
Complexe multi(const Complexe *a,const Complexe *b)
{
return polComplexe(rho(a)+rho(b),theta(a)+theta(b));
}

Complexe Div(const Complexe *a,const Complexe *b)
{
return polComplexe(rho(a)/rho(b),theta(a)-theta(b));
}
int egal(Complexe *c1,Complexe *c2)
{
if(fabs(c1->reel-c2->reel)<eps&&fabs(c1->img-c2->img)<eps)
return 1;
return 0;
}
int different(Complexe *c1,Complexe *c2)
{
if(fabs(c1->reel-c2->reel)>eps||fabs(c1->img-c2->img)>eps)
	return 1;
return 0;
}
