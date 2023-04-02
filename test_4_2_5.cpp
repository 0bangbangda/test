#include<iostream>
using namespace std;
class Animal
{
public:
	double d;
	char c;
	int age;
};
class Sheep:virtual public Animal
{

};
class Tuo :virtual public Animal
{

};
class SheepTuo :public Sheep, public Tuo
{

};
void test1()
{
	Sheep s;
	s.age = 10;
	s.c = 'A';
	//cout << s.age;
	/*cout << *((int*)*(int*)&s + 1) << endl;
	cout << *(int*)((char*)&s + *((int*)*(int*)&s + 1)) << endl;
	cout << ((Animal*)((char*)&s + *((int*)*(int*)&s + 1)))->age << endl;*/
	cout << *((int*)*(int*)&s + 1) << endl;
	cout << *((char*)&s + *((int*)*(int*)&s + 1) + 8) << endl;
	cout << ((Animal*)((char*)&s + *((int*)*(int*)&s + 1)))->c << endl;

}
int main(void)
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}