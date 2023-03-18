#include<iostream>
using namespace std;
/*
设计一个圆类和点类
判断点与圆的关系
*/
class Point
{
private:
	int x;
	int y;
public:
	void setPos(int m_x, int m_y){
		x = m_x;
		y = m_y;
	}
	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}
};
class Circle
{
private:
	int r;
	int x;
	int y;
public:
	void setR(int a){
		r = a;
	}
	int getR() const{
		return r;
	}
	void setCentre(int m_x, int m_y){
		x = m_x;
		y = m_y;
	}
	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}
	void CrelateP(const Point &p){
		int distance = (x - p.getX())*(x - p.getX()) + (y - p.getY())*(y - p.getY());
		if (distance > r*r){
			cout << "点在圆外" << endl;
		}
		else if (distance == r*r){
			cout << "点在圆上" << endl;
		}
		else{
			cout << "点在圆内" << endl;
		}
	}
};
int main(void){
	Circle c;
	c.setCentre(0, 0);
	c.setR(4);
	Point p;
	p.setPos(0, 4);
	c.CrelateP(p);
	system("pause");
	return EXIT_SUCCESS;
}