#include"MyArray.h"
MyArray::MyArray()
{
	this->m_capacity = 100;
	this->m_parr = new int[this->m_capacity];
	this->m_size = 0;
}
MyArray::MyArray(int capacity)
{
	this->m_capacity = capacity;
	this->m_parr = new int[capacity];
	this->m_size = 0;

}
MyArray::MyArray(const MyArray &arr)
{
	this->m_parr = new int[arr.m_capacity];
	this->m_capacity = arr.m_capacity;
	this->m_size = arr.m_size;
	for (int i = 0; i < this->m_size; i++)
	{
		this->m_parr[i] = arr.m_parr[i];
	}
}
MyArray::~MyArray()
{
	cout << "析构函数调用" << endl;
	delete[]this->m_parr;
	this->m_parr = NULL;
}
void MyArray::push_back(int x)
{
	assert(this->m_size < this->m_capacity);
	this->m_parr[this->m_size] = x;
	this->m_size++;
}
int MyArray::getSize()const
{
	return this->m_size;
}
void MyArray::setData(int pos, int x)
{
	assert(pos <= this->m_capacity);
	if (pos <= this->m_size)
	{
		this->m_parr[pos - 1] = x;
	}
	else
	{
		this->m_parr[pos - 1] = x;
		this->m_size++;
	}
}
int MyArray::getData(int pos)const
{
	return this->m_parr[pos];
}
int MyArray::getCapacity()const
{
	return this->m_capacity;
}
int& MyArray::operator[](int pos)
{
	return this->m_parr[pos];
}