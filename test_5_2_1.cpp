#include<iostream>
using namespace std;
//�쳣�������������ڣ�ָ�����쳣�ࣩ
class MyException
{
public:
	MyException()
	{
		cout << "Exception���Ĭ�Ϲ��캯������" << endl;
	}
	MyException(const MyException &e)
	{
		cout << "Exception��Ŀ������캯������" << endl;
	}
	~MyException()
	{
		cout << "MyException���������������" << endl;
	}
};
void Throw()
{
	//��Ϊ����ջ�����Ļ��ƣ������׳���ջ�ϴ�������������ĵ�ַ�����ܵ�ָ��ΪҰָ��
	//����Ҫ�ڶ���������������,Ҫע���ͷ�
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
		cout << "�����쳣" << endl;
	}*/
	/*catch (MyException &e)
	{
		cout << "�����쳣" << endl;
	}*/
	//������Ĭ�������ô���
	catch (...)
	{
		cout << "�����쳣" << endl;
		//delete e;
	}
}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}