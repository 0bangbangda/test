#include<iostream>
using namespace std;
void test1()
{
	char c;
	c = cin.get();
	cout << c << endl;
	cin.get(c);
	cout << c << endl;
	char a, b;
	cin.get(a).get(b).get();
	cin.get(c);
	cout << a << " " << b << " " << c << endl;
}
void test2()
{
	/*char buf[1024];
	cin.get(buf, 1024);
	char c = cin.get();
	cout << buf << c;*/
	char buf[1024];
	cin.getline(buf, 1024);
	char c = cin.get();
	cout << buf << c;
}
void test3()
{
	char c;
	cin.ignore(2);
	cin.get(c);
	cout << c << endl;

}
int main(void)
{
	//test1();
	//test2();
	test3();
	system("pause");
	return EXIT_SUCCESS;
}