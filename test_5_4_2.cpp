#include<iostream>
#include<iomanip>
using namespace std;
void test1()
{
	//ͨ����׼�������Ա�������������ʽ
	int num = 99;
	cout.width(10);
	//cout.fill('*');
	cout.setf(ios::left);
	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout.setf(ios::showbase);
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << num << endl;
}
void test2()
{
	//ֱ�����ÿ��Ʒ����������ʽ
	int num = 99;
	cout << setw(10) << setiosflags(ios::left) << setiosflags(ios::showbase) << oct << num << endl;
}
int main(void)
{
	test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;

}