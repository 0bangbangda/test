#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<int> v;
	v.reserve(10);
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//删除6
	/*for (vector<int>::iterator it = v.begin(); it != v.end();)
	{
		if (*it == 0)
		{
			it=v.erase(it);
		}
		it++;
	}*/
	/*vector<int>::iterator iter = v.begin();
	while (iter != v.end())
	{
		if (*iter == 0)
		{
			cout << &(*iter) << endl;
			iter = v.erase(iter);
			cout << &(*iter) << endl; 

		}
		else
		{
			cout << &(*iter) << endl;
			iter++;
		}
			
	}*/
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end();)
	{
		cout << "v.begin的指向的元素的地址:" << &(*it) << endl << "v.end()指向的元素的地址:" << &(*(v.end()-1)) << endl;
		it = v.erase(it);
	}
	system("pause");
	return EXIT_SUCCESS;
}