#include<iostream>
#include<string>
#include<cctype>
#include<stdexcept>
using namespace std;
int main(void)
{
	string str("12345");
	//cin >> str;
	//for (int i = 0; i < str.size(); i++)
	//{
	//	//str[i] = toupper(str[i]);
	//	str.at(i) = toupper(str.at(i));
	//}
	//cout << str << endl;
	//cout << str[6] << endl;
	try{
		cout << str.at(6) << endl;
	}
	catch (out_of_range e)
	{
		cout << e.what() << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}