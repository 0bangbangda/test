#include"MyString.h"
MyString::MyString() :pStr(NULL), m_size(0){}
MyString::MyString(const char *str)
{
	this->pStr = new char[strlen(str) + 1];
	strcpy(this->pStr, str);
	this->m_size = strlen(str);
}
MyString::MyString(const MyString &str)
{
	//深拷贝
	//cout << "拷贝构造函数调用" << endl;
	this->pStr = new char[strlen(str.pStr) + 1];
	strcpy(this->pStr, str.pStr);
	this->m_size = str.m_size;
}
MyString::~MyString()
{
	if (this->pStr)
	{
		//cout << "析构函数调用" << endl;
		delete[]this->pStr;
		this->pStr = NULL;
	}
}
MyString& MyString::operator=(const MyString &str)
{
	if (this->pStr)
	{
		delete[]this->pStr;
	}
	this->pStr = new char[strlen(str.pStr) + 1];
	strcpy(this->pStr, str.pStr);
	this->m_size = str.m_size;
	return *this;
}
MyString& MyString::operator=(const char *str)
{
	//cout << "调用operator=(const char *str)" << endl;
	if (this->pStr)
	{
		delete[]this->pStr;
	}
	this->pStr = new char[strlen(str) + 1];
	strcpy(this->pStr, str);
	this->m_size = strlen(str);
	return *this;
}
ostream& operator<<(ostream &cout, MyString &str)
{
	cout << str.pStr;
	return cout;
}
MyString MyString::operator+(const MyString &str)
{
	//cout << "调用operator+" << endl;
	int newSize = this->m_size + str.m_size + 1;
	char *tmp = new char[newSize];
	strcpy(tmp, this->pStr);
	strcat(tmp, str.pStr);
	MyString tmp2(tmp);
	return tmp2;
}
MyString MyString::operator+(const char* str)
{
	int newSize = this->m_size + strlen(str)+ 1;
	char *tmp = new char[newSize];
	strcpy(tmp, this->pStr);
	strcat(tmp, str);
	MyString tmp2(tmp);
	return tmp2;
}
char MyString::operator[](int index)
{
	return this->pStr[index-1];
}
bool MyString::operator==(const MyString &str)
{
	return strcmp(this->pStr, str.pStr) == 0 ? true : false;
}
bool MyString::operator==(const char *str)
{
	return strcmp(this->pStr, str) == 0 ? true : false;
}