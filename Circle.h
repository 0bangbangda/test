#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class Circle
{
private:
	Point m_centre;
	int m_r;
public:
	Circle(Point &centre, int r);
	void setR(int r);
	void setCentre(const Point &p);
	int getR()const;
	int getX() const;
	int getY()const;
};