#include<iostream>
#include<algorithm>
using namespace std;
class Cube
{
private:
	int arr[3];
public:
	void setInfo(int a,int b,int c){
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		sort(arr, arr + 3);
	}
	int getS(){
		return 2 * (arr[0] * arr[1] + arr[0] * arr[2] + arr[1] * arr[2]);
	}
	int getV(){
		return arr[0] * arr[1] * arr[2];
	}
	int getL(){
		return arr[0];
	}
	int getW(){
		return arr[1];
	}
	int getH(){
		return arr[2];
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