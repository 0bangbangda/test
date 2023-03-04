//#include<stdio.h>
//#include<stdlib.h>
//namespace Diy{
//	class Student{
//	public:
//		char *name;
//		int age;
//		double score;
//	public:
//		void print(){
//			printf("%s的年龄是:%d ,成绩是%.2lf\n", name, age, score);
//		}
//	};
//}
//int main(void){
//	Diy::Student s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 98.567;
//	s.print();
//	return EXIT_SUCCESS;
//}
#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>
#include<stdlib.h>

int main(){
	//cout << "!!!hello world " << "i am " << 18 << endl;
	/*cout << "hello world i am 18" << endl;
	int number;
	cin >> number;
	cout << "hello world" << "i am " << number << "." << endl;*/
	string str1;
	string str2;
	int pos;
	cin >> str1 >> str2 >> pos;
	cout << str1 << " " << str2 << " " << pos;
	return EXIT_SUCCESS;
}