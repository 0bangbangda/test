#include<iostream>
using namespace std;
void test1()
{
	char c, d;
	c = cin.peek();
	//c = cin.get();
	cin.putback('A');
	cin.get(d);
	cout << c << " " << d << endl;
}

void test2()
{
	//判断输入的是一个数字还是字符串
	char c;
	//c = cin.peek();
	/*if (c >= '0'&& c <= '9')
	{
		int n;
		cin >> n;
		cout << "输入的数字是：" << n << endl;
	}
	else
	{
		char buf[1024];
		cin.getline(buf, 1024);
		cout << "输入的字符串是：" << buf << endl;
	}*/
	c = cin.get();
	if (c >= '0'&& c <= '9')
	{
		cin.putback(c);
		int n;
		cin >> n;
		cout << "输入的数字是：" << n << endl;
	}
	else
	{
		cin.putback(c);
		char buf[1024];
		cin.getline(buf, 1024);
		cout << "输入的字符串是：" << buf << endl;
	}

}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}