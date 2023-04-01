#include<iostream>
using namespace std;
class MyPrint
{
public:
	void operator()()
	{
		cout << "hello world" << endl;
	}
};
void test1()
{
	MyPrint myPrint;
	myPrint();
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}