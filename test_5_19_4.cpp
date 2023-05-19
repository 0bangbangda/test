#include<iostream>
using namespace std;
//void func();
//inline void func()
//{
//	cout << "c.biancheng.net" << endl;
//}
void func(int a, int b = 10, char c,char d='&')
{
	cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << endl;
}
int main(void)
{
	func(1, 20, 'A');
	func(1, 20);
	func(1);
	system("pause");
	return EXIT_SUCCESS;
}