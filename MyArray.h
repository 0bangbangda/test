#pragma once
#include<iostream>
#include<cassert>
using namespace std;
class MyArray
{
private:
	int *m_parr;
	int m_size;
	int m_capacity;
public:
	MyArray();
	MyArray(int capacity);
	MyArray(const MyArray &arr);
	~MyArray();
	void push_back(int x);
	int getSize()const;
	void setData(int pos, int x);
	int getData(int pos)const;
	int getCapacity()const;
	int& operator[](int pos);
};
