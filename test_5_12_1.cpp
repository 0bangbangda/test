#include<iostream>
using namespace std;
#include<iomanip>
void test1()
{
	//���þ���һ�ξ���
	//���ó�Ա����
	double s = 34.588;
	double s2 = 12.456l;
	cout << s << endl;
	cout.setf(ios::fixed);
	cout << setprecision(6);
	cout << s << " " << s2 << endl;
	//ʹ�ÿ����ַ�
	cout << fixed << setprecision(7) << s << endl;
}
void test2()
{
	double s = 35.588;
	cout << setprecision(1) << s << endl;
	cout << setprecision(4) << s << endl;
	cout << setprecision(6) << s << endl;
	cout << setprecision(1) << fixed << s << endl;
}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}