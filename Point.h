#pragma once
#include<iostream>
using namespace std;
class Point
{
private:
	int m_x;
	int m_y;
public:
	Point(int x, int y);
	Point(const Point &p);
	void setX(int x);
	void setY(int y);
	int getX()const;
	int getY()const;
};