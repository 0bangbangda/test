#include<iostream>
#include<algorithm>
#include"Cube.h"
#include"Node.h"
using namespace std;
int Judge(Cube &c1, Cube &c2);
int main(void){
	Cube c1{ 1, 2, 3 };
	Cube c2{ 2, 3, 5 };
	/*c1.setInfo(1, 2, 3);
	c2.setInfo(2,3,5);*/
	/*cout << "c1的表面积:" << c1.getS() <<" "<< "c1的体积：" << c1.getV() << endl;
	cout << "c2的表面积:" << c2.getS()<<" " << "c2的体积：" << c2.getV() << endl;
	if (Judge(c1, c2)){
		cout << "两个立方体相等" << endl;
	}
	else{
		cout << "两个立方体不相等" << endl;
	}
	c1.isSame(c2);*/
	Node n1;
	Node n2(1, 'A');
	cout << "n1:" << n1.geti() << " " << n1.getc() << " " << n1.getP() << " " << n1.getN() << endl;
	cout << "n2:" << n2.geti() << " " << n2.getc() << " " << n2.getP() << " " << n2.getN() << endl;
	system("pause");
	return EXIT_SUCCESS;
}
int Judge(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
		return 1;
	else{
		return 0;
	}
}