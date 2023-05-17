#include<iostream>
using namespace std;
//内联函数inline
inline void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
//求一个数的平方
//#define SQ(x) ((x)*(x))
inline int SQ(int x){ return x*x; };
int main(void)
{
	/*int a, b;
	cin >> a >> b;
	swap(a, b);
	cout << a << " " << b << endl;*/
	int n;
	cin >> n;
	cout << SQ(n) << endl;//81
	cout << SQ(n + 1) << endl;//100
	cout << 200 / SQ(n + 1) << endl;//2
	system("pause");
	return EXIT_SUCCESS;
}