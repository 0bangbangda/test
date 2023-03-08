//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int sum(int n);
//int main(void){
//	int n;
//	cout << "input un interge:";
//	cin >> n;
//	cout << "total: " << sum(n) << endl;
//	return EXIT_SUCCESS;
//}
//int sum(int n){
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//		sum += i;
//	return sum;
//#include<vector>
//int main(void){
//	vector<int>a;
//	cout << a.size() << endl;
//	for (int i = 1; i <= 10; i++)
//		a.push_back(i);
//	cout << a.size() << endl;
//	vector<int>b(15);
//	for (int i = 0; i < b.size(); i++)
//		b[i] = 10;
//	for (int i = 0; i < b.size(); i++)
//		cout << b[i] << " ";
//	cout << endl;
//	vector<int>c(20, 3);
//	for (int i = 0; i < c.size(); i++)
//		cout << c[i] << " ";
//	cout << endl;
//	for (auto it = c.begin(); it != c.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	return EXIT_SUCCESS;
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<set>
using namespace std;
//int main(void){
//	int a = 1;
//	cout << &a << endl;
//	set<int>s1;
//	s1.insert(1);
//	for (int i = 0; i < 6; i++)
//		s1.insert(i);
//	for (auto it = s1.begin(); it != s1.end(); it++)
//		cout << *it << " ";
//	cout << endl<<(s1.find(2)!=s1.end())<< endl;
//	cout << (s1.find(10) != s1.end()) << endl;
//	s1.erase(1);
//	cout << (s1.find(1) != s1.end()) << endl;
//	return EXIT_SUCCESS;
//}
#include<map>
#include<string>
int main(void){
	map<int, string>m;
	m[1] = "success";
	cout << m[1] << endl;
	cout << m[0] << endl;
	m[0] = "fail";
	for (auto it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << " " << "value:" << it->second << endl;
	cout << m.rbegin()->first << " " << m.rbegin()->second << endl;
	cout << m.begin()->first << " " << m.begin()->second << endl;
	m[3] = "no such a file";
	m[4] = "****";
	cout << m.size() << endl;
	return EXIT_SUCCESS;
}
