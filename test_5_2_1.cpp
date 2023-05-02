#include<iostream>
using namespace std;
//异常变量的生命周期（指的是异常类）
class MyException
{
public:
	MyException()
	{
		cout << "Exception类的默认构造函数调用" << endl;
	}
	MyException(const MyException &e)
	{
		cout << "Exception类的拷贝构造函数调用" << endl;
	}
	~MyException()
	{
		cout << "MyException类的析构函数调用" << endl;
	}
};
void Throw()
{
	//因为存在栈解旋的机制，所以抛出在栈上创建的匿名对象的地址，接受的指针为野指针
	//所以要在堆区创建匿名对象,要注意释放
	throw MyException();
}
void test1()
{
	try
	{
		Throw();
	}
	/*catch (MyException e)
	{
		cout << "捕获异常" << endl;
	}*/
	/*catch (MyException &e)
	{
		cout << "捕获异常" << endl;
	}*/
	//编译器默认用引用传递
	catch (...)
	{
		cout << "捕获异常" << endl;
		//delete e;
	}
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}