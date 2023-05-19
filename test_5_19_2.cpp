#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
const int NB = 5;
void SetVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		*it = rand() % 100;
	}
}
void SortVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		vector<int>::iterator it_max = it;
		for (vector<int>::iterator it2 = it + 1; it2 != v.end(); it2++)
		{
			if (*it2 > *it_max)
				it_max = it2;
		}
		int tmp = *it_max;
		*it_max = *it;
		*it = tmp;
	}
}
void printVector(const vector<int> &v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
double Average(vector<int> &v)
{
	vector<int>::iterator iter = v.begin();
	iter = v.erase(iter);
	v.pop_back();
	int sum = 0;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		sum += *it;
	}
	return (double)sum / v.size();
}
int main(void)
{
	srand((unsigned int)time(NULL));
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	vector<int> v5;
	//vector<int> arr[NB] = { v1, v2, v3, v4, v5 };
	vector<vector<int>> v;
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);
	int i = 1;
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		it->resize(10);//容器一定要设置大小
		SetVector(*it);
		printVector(*it);
		SortVector(*it);
		printVector(*it);
		cout << "第" << i++ << "号选手的平均成绩为：" << Average(*it) << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}