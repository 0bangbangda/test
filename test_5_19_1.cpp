#include<iostream>
#include<deque>
#include<vector>
using namespace std;
void printDeque(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void printVector(const vector<int>&v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	//²åÈë£ºpush_front()
	deque<int>d1;
	d1.push_front(10);
	d1.push_front(20);
	d1.push_front(30);
	printDeque(d1);
	//É¾³ý:pop_front()
	d1.pop_front();
	printDeque(d1);
}
void test2()
{
	vector<int> v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	cout << &v[0] << endl;
	v.resize(3);
	cout << &v[0] << endl;
	printVector(v);
	v.resize(200);
	//printVector(v);
	cout << &v[0] << endl;
}
int main(void)
{
	//test1();
	//test2();

	system("pause");
	return EXIT_SUCCESS;
}