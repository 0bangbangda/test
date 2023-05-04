#include<iostream>
#include<fstream>
using namespace std;
void test1()
{
	//打开一个输出文件并向其中输出内容
	ofstream ofs("test.txt", ios::out | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "打开文件失败" << endl;
	}
	ofs << "姓名：张三" << endl << "年龄：20" << endl << "性别：男" << endl;
	ofs.close();
}
void test2()
{
	//打开一个输入文件并读取内容
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "打开文件失败" << endl;
	}
	//第一种读取方式
	char buf[1024];
	while (!ifs.eof())//读取的内容作为返回值
	{
		ifs >> buf;
		cout << buf << endl;
	}
	//第二种读取方式
	

	ifs.close();
}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}