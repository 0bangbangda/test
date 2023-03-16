//#include<iostream>
//using namespace std;
////extern const int b;
////int main(void){
////	const int a = 10;
////	int *p = (int*)&a;
////	*p = 20;
////	cout << "a = " << a <<" b = "<<b<< endl;
////	system("pause");
////	return EXIT_SUCCESS;
////}
////int main(void){
////	//引用&
////	int a = 10;
////	int &b = a;//int const *b=&a;
////	//int &c = 10;
////	//cout << " &b:" << &b << " " << "&a :" << &a << endl;
////	char arr[10];
////	for (int i = 0; i < 10; i++)
////		arr[i] = i+65;
////	typedef char ARR[10];
////	ARR &parr = arr;
////	for (int i = 0; i < 10; i++)
////		cout << parr[i] << " ";
////	system("pause");
////	return EXIT_SUCCESS;
////}
//void swap(int &x, int &y);
//struct ListNode{
//	int val;
//	struct ListNode *next;
//};
//void BuyListNode(ListNode *&p);
//inline void print(const int(&parr)[10]);
//int main(void){
//	/*int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a = " << a <<" "<< "b = " << b << endl;*/
//	/*ListNode *newnode = NULL;
//	BuyListNode(newnode);
//	cout << "newnode->val = " << newnode->val << endl;*/
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//		arr[i] = i;
//	print(arr);
//	system("pause");
//	return EXIT_SUCCESS;
//}
//void swap(int &x, int &y){
//	x = x^y;
//	y = x^y;
//	x = x^y;
//
//}
//void BuyListNode(ListNode *&p){
//	p = (ListNode*)malloc(sizeof(ListNode));
//	p->val = 1;
//	p->next = NULL;
//}
//inline void print(const int(&parr)[10])
//{
//	for (int i = 0; i < 10; i++)
//		cout << parr[i] << " ";
//	cout << endl;
//}
//#include<iostream>
//using namespace std;
//class Circle{
//public:
//	double getC(){
//		return 2 * pi*r;
//	}
//	void setR(double x){
//		r = x;
//	}
//	double getS(){
//		return pi*r*r;
//	}
//private:
//	double r;
//	double pi = 3.14;
//};
//#include<string>
//class Student{
//public:
//	string name;
//	int id;
//	void showInfo(){
//		cout << "姓名:" << name << " " << "学号:" << id << endl;
//	}
//};
//int main(void){
//	/*Circle c;
//	c.setR(2);
//	cout << "周长:" << c.getC() << "\t" << "面积:" << c.getS() << endl;*/
//	Student stu;
//	stu.name = "张三";
//	stu.id = 123456;
//	stu.showInfo();
//	system("pause");
//	return EXIT_SUCCESS;
//}
#include<iostream>
using namespace std;
//void func(int a , int b, int c,int);
void func();
void func(int a);
void func(double a);
void func(int a,double b);
void func(double a, int b);
int main(void){
	//func(1,2,3,4);
	func();
	func(1, 2.0);
	func(2.0);
	func(2.0, 1);
	func(1);
	system("pause");
	return EXIT_SUCCESS;
}
//void func(int a, int b,int c,int)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
void func()
{
	cout << "调用的是函数func()" << endl;
}
void func(int a)
{
	cout << "调用的是函数func(int a)" << endl;
}
void func(double a)
{
	cout << "调用的是函数func(double a)" << endl;
}
void func(int a, double b)
{
	cout << "调用的是函数func(int a,double b)" << endl;
}
void func(double a, int b)
{
	cout << "调用的是函数func(double a, int b)" << endl;
}