#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	char *m_name;
	int m_age;
	Person();
	Person(char *name, int age);
	Person(const Person &p);
	~Person();
};