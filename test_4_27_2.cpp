#include<iostream>
#include<string>
#include<cassert>
using namespace std;
template<class T>
class Array
{
	friend void printArr(Array<T> &arr)
	{
		for (int i = 0; i < arr.m_size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
public:
	T *pAddress;
	int m_capacity;
	int m_size;
public:
	Array()
	{
		this->pAddress = new T[10];
		this->m_capacity = 10;
		this->m_size = 0;
	}
	explicit Array(int capacity)
	{
		this->m_capacity = capacity;
		this->pAddress = new T[this->m_capacity];
		this->m_size = 0;
	}
	Array(const Array &arr)
	{
		this->pAddress = new T[arr.m_capacity];
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		memcpy(this->pAddress, arr.pAddress, arr.m_capacity*sizeof(T));
		//memcpy拷贝类数组后，delete[]会出现问题
		/*for (int i = 0; i < arr.m_capacity; i++)
			this->pAddress[i] = arr.pAddress[i];*/
	}
	~Array()
	{
		if (this->pAddress != NULL)
		{
			
			delete[]this->pAddress;
			this->pAddress = NULL;
			cout << "析构函数调用" << endl;
		}
	}
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	void push_back(T& val)
	{
		assert(this->m_size < this->m_capacity);
		this->pAddress[this->m_size] = val;
		this->m_size++;
	}
	int getCapacity()const
	{
		return this->m_capacity;
	}
};

class Person
{
public:
	string m_name;
	int m_age;
public:
	//若数组的每个元素都是类，那么必须提供这个类的默认构造函数
	Person(){}
	Person(string name, int age) :m_name(name),m_age(age)
	{}
};
ostream& operator<<(ostream &cout, Person &p)
{
	cout << "姓名：" << p.m_name << "\t" << "年龄：" << p.m_age;
	return cout;
}
void test1()
{
	Array<int> arr1;
	for (int i = 0; i < arr1.getCapacity(); i++)
		arr1.push_back(i);
	printArr(arr1);
	Array<char> arr2(26);
	for (char c = 'A'; c <= 'Z';c++)
		arr2.push_back(c);
	printArr(arr2);
	Array<char> arr3(arr2);
	printArr(arr3);
		
}

void test2()
{
	Person p1("张三", 10);
	Person p2("李四", 20);
	Person p3("王五", 30);
	Array<Person> arr1(3);
	arr1.push_back(p1);
	arr1.push_back(p2);
	arr1.push_back(p3);
	printArr(arr1);
	Array<Person> arr2(arr1);
	printArr(arr2);
}
int main(void)
{
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}