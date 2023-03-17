#include<iostream>
using namespace std;
class Cube
{
private:
	int length;
	int wide;
	int high;
public:
	void setInfo(int a,int b,int c){
		if (a > b){
			if (a > c){
				length = a;
				if (b > c){
					wide = b;
					high = c;
				}
				else{
					wide = c;
					high = b;
				}
			}
			else{
				length = c;
				wide = a;
				high = b;
			}
		}
		else{
			if (b > c){
				length = b;
				if (a > c){
					wide = a;
					high = c;
				}
				else{
					wide = c;
					high = a;
				}
			}
			else{
				length = c;
				wide = b;
				high = a;
			}
		}
	}
	int getS(){
		return 2 * (length*wide + length*high + wide*high);
	}
	int getV(){
		return length*wide*high;
	}
	int getL(){
		return length;
	}
	int getW(){
		return wide;
	}
	int getH(){
		return high;
	}
};
int Judge(Cube &c1, Cube &c2);
int main(void){
	Cube c1, c2;
	c1.setInfo(1, 2, 3);
	c2.setInfo(2,3,5);
	cout << "c1的表面积:" << c1.getS() <<" "<< "c1的体积：" << c1.getV() << endl;
	cout << "c2的表面积:" << c2.getS()<<" " << "c2的体积：" << c2.getV() << endl;
	if (Judge(c1, c2)){
		cout << "两个立方体相等" << endl;
	}
	else{
		cout << "两个立方体不相等" << endl;
	}
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