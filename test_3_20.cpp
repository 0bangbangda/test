#include<iostream>
using namespace std;
class Point
{
private:
	int m_x;
	int m_y;
public:
	explicit Point(int x=0, int y=0) :
		m_x(x), m_y(y){}
	void show ()const
	{
		cout << "(" << m_x << "," << m_y << ")" << endl;
	}
};
int main(void)
{
	/*Point p = Point(1);
	p.show();*/
	const int a = 100;
	int *p = (int*)&a;
	*p = 200;
	cout << "a = " << a << endl<<"*p = " << *p << endl;
	system("pause");
	return EXIT_SUCCESS;
}