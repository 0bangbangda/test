#include<iostream>
using namespace std;
//int main(void){
//	std::cout << "hello world" << endl;
//	system("pause");
//	return EXIT_SUCCESS;
//}
//作用域运算符::
//namespace A{
//	int atk = 30;
//	namespace B{
//		int atk = 40;
//	}
//}
//int atk = 10;
//namespace A{
//	int speed = 100;
//}
//void test01(){
//	int atk = 20;
//	cout << A::B::atk << endl << "speed:" << A::speed;
//}
//namespace{
//	int m = 0;
//	int n = 0;
//}
//#include"game1.h"
//#include"game2.h"
//void test02(){
//	namespace g1 = game1;
//	g1::print();
//	game2::print();
//	m = n = 1;
//	cout << "m=n=" << m << endl;
//}
//void test03(){
//	//声明指令
//	/*using game1::print;
//	print();*/
//	//编译指令
//	int name = 20;
//	using namesapce game1;
//	cout << name << endl;
//}
//int main(void){
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}
struct A{
	int a;
	void func(){};
};
int main(void){
	int a = 10;
	int b = 20;
	(a < b ? a : b) = 100;
	cout << "a=" << a << " " << "b=" << b << endl;
	system("pause");
	return EXIT_SUCCESS;
}