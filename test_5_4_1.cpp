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
	//�ж��������һ�����ֻ����ַ���
	char c;
	//c = cin.peek();
	/*if (c >= '0'&& c <= '9')
	{
		int n;
		cin >> n;
		cout << "����������ǣ�" << n << endl;
	}
	else
	{
		char buf[1024];
		cin.getline(buf, 1024);
		cout << "������ַ����ǣ�" << buf << endl;
	}*/
	c = cin.get();
	if (c >= '0'&& c <= '9')
	{
		cin.putback(c);
		int n;
		cin >> n;
		cout << "����������ǣ�" << n << endl;
	}
	else
	{
		cin.putback(c);
		char buf[1024];
		cin.getline(buf, 1024);
		cout << "������ַ����ǣ�" << buf << endl;
	}

}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}