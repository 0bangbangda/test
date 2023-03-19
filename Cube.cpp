#include"Cube.h"
void Cube::setInfo(int a, int b, int c){
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	sort(arr, arr + 3);
}
int Cube::getS(){
	return 2 * (arr[0] * arr[1] + arr[0] * arr[2] + arr[1] * arr[2]);
}
int Cube::getV(){
	return arr[0] * arr[1] * arr[2];
}
int Cube::getL(){
	return arr[0];
}
int Cube::getW(){
	return arr[1];
}
int Cube::getH(){
	return arr[2];
}
void Cube::isSame(Cube &c){
	if (arr[0] == c.arr[0] && arr[1] == c.arr[1] && arr[2] == c.arr[2])
		cout << "相等" << endl;
	else
		cout << "不相等" << endl;
}
//
Cube::Cube(int a, int b, int c){

	cout << "有参构造函数调用" << endl;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	sort(arr, arr + 3);
}