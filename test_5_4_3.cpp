#include<iostream>
#include<fstream>
using namespace std;
void test1()
{
	//��һ������ļ����������������
	ofstream ofs("test.txt", ios::out | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "���ļ�ʧ��" << endl;
	}
	ofs << "����������" << endl << "���䣺20" << endl << "�Ա���" << endl;
	ofs.close();
}
void test2()
{
	//��һ�������ļ�����ȡ����
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "���ļ�ʧ��" << endl;
	}
	//��һ�ֶ�ȡ��ʽ
	char buf[1024];
	while (!ifs.eof())//��ȡ��������Ϊ����ֵ
	{
		ifs >> buf;
		cout << buf << endl;
	}
	//�ڶ��ֶ�ȡ��ʽ
	

	ifs.close();
}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}