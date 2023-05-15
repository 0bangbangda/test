#include<iostream>
using namespace std;
#include<string>
void print(const char *str)
{
	cout << str << endl;
}
void test1()
{
	string s("abcdef");
	const char *pstr = s.c_str();
	cout << pstr << endl;
	//print(pstr);
	//print(s);
}
void test2()
{
	string s("abcdefg");
	char &b = s[1];
	char &c = s.at(2);
	b = '1';
	c = '2';
	cout << (int*)(s.c_str()) << endl;
	cout << s << endl;
	s = "ppppppppppppppppppppp";
	cout << (int*)s.c_str << endl;
}
int main(void)
{
	test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}