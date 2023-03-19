#include<iostream>
using namespace std;
#include"Point.h"
#include"Circle.h"
/*
设计一个圆类和点类
判断点与圆的关系
*/
void IsInCircle(const Circle &c, const Point &p);
int main(void){
	Point p1(0, 0);
	Circle c(p1, 4);
	Point p2(0,2);
	c.setCentre(p2);
	IsInCircle(c, p2);
	/*c.setCentre(0, 0);
	c.setR(4);*/
	/*Point p;
	p.setPos(0, 4);
	c.CrelateP(p);*/
	system("pause");
	return EXIT_SUCCESS;
}
void IsInCircle(const Circle &c, const Point &p)
{
	int r2 = c.getR()*c.getR();
	int distance = (p.getX() - c.getX())*(p.getX() - c.getX()) + (p.getY() - c.getY())*(p.getY() - c.getY());
	if (distance < r2)
		cout << "点在圆内" << endl;
	else if (distance == r2)
		cout << "点在圆上" << endl;
	else
		cout << "点在圆外" << endl;
}