#include"Point.h"
Point::Point(int x, int y) :m_x(x), m_y(y)
{
	cout << "point�вκ�������" << endl;
}
Point::Point(const Point &p) :m_x(p.getX()), m_y(p.getY())
{
	cout << "�������캯������" << endl;

}
Point::~Point()
{
	cout << "Point������������" << endl;
}
void Point::setX(int x)
{
	m_x = x;
}
void Point::setY(int y)
{
	m_y = y;
}
int Point::getX()const
{
	return m_x;
}
int Point::getY()const
{
	return m_y;
}