#include"Circle.h"
Circle::Circle(Point &centre, int r) :m_centre(centre), m_r(r){
	cout << "有参构造函数调用" << endl;
}
void Circle::setR(int r){
	m_r = r;
}
void Circle::setCentre(const Point &p)
{
	m_centre = p;
}
int Circle::getR()const
{
	return m_r;
}
int Circle::getX() const
{
	return m_centre.getX();
}
int Circle::getY()const
{
	return m_centre.getY();
}