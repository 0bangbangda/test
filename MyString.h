#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;
class MyString
{
	friend ostream& operator<<(ostream &cout, MyString &str);
private:
	char *pStr;
	int m_size;
public:
	MyString();
	MyString(const char *str);
	MyString(const MyString &str);
	~MyString();
	MyString& operator=(const MyString &str);
	MyString& operator=(const char *str);
	MyString operator+(const MyString &str);
	MyString operator+(const char* str);
	char operator[](int index);
	bool operator==(const MyString &str);
	bool operator==(const char *str);
};
ostream& operator<<(ostream &cout, MyString &str);