#include<iostream>
#include<vector>
using namespace std;
void test1()
{
	//vector�����Ķ�̬����
	/*vector<int> v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
		cout << v.capacity() << endl;
	}*/
}
void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test2()
{
	//�������
	vector<int>v1;
	int arr[] = { 1, 2, 3, 4, 5 };
	vector<int>v2(arr, arr + sizeof(arr) / sizeof(int));
	//printVector(v2);
	vector<int> v3(v2.begin(), v2.end());
	printVector(v3);
	vector<int>v4(10, 100);
	printVector(v4);
}
void test3()
{
	//��ֵ���� : =,assign(),swap()
	vector<int> v1(10, 100);
	vector<int> v2;
	v2.assign(v1.begin(), v1.end());
	printVector(v2);
	int arr[] = { 1, 2, 3 };
	vector<int> v3;
	v3.assign(arr, arr + sizeof(arr) / sizeof(arr[0]));
	/*printVector(v3);
	v3 = v2;
	printVector(v3);*/
	v1.swap(v3);
	cout << "v1����" << v1.capacity() << endl;
	cout << "v1��ЧԪ�ظ���" << v1.size() << endl;

}
void test4()
{
	//��ȡ����:at(),[],front(),back()
	vector<int> v;
	v.push_back(10);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	cout << "��һ��Ԫ��:" << v.front() << endl;
	cout << "���һ��Ԫ��:" << v.back() << endl;
}
void test5()
{
	//��С����:size,capacity,resize(),reserve
	vector<int>v(10, 5);
	v.resize(11);
	//printVector(v);
	cout << "����:" << v.capacity() << endl;
	cout << "��ЧԪ�ظ���:" << v.size() << endl;
	v.resize(7);
	cout << "����:" << v.capacity() << endl;
	cout << "��ЧԪ�ظ���:" << v.size() << endl;
	vector<int>(v).swap(v);//��������ʱ���µĶ����size��capacity�����ڱ������Ķ����size
	cout << "����:" << v.capacity() << endl;
	cout << "��ЧԪ�ظ���:" << v.size() << endl;
}
void test6()
{
	//�����ɾ��:insert,erase,clear,pop_back()
	vector<int>v(3, 1);
	v.insert(v.begin() + 1, 2, 10);
	v.erase(v.begin() + 2);//1.10,1,1
	v.pop_back();
	//v.erase(v.begin(), v.end());
	if (v.empty())
	{
		cout << "��" << endl;
	}
	printVector(v);//1.10,10,1,1
}
void test7()
{
	//�������:rbegin(),rend(),reverse_iterator
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	/*for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	{
		cout << *it << " ";
	}*/
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test8()
{
	//����reserveԤ���ռ䣬����Ч��
	int *p = NULL;
	int count = 0;
	vector<int> v;
	v.reserve(10000);
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			count++;
			p = &v[0];
		}
	}
	cout << count << endl;
}
int main(void)
{
//	test1();
//	test2();
//	test3();
//	test4();
	//test5();
//	test6();
//	test7();
	test8();
	system("pause");
	return EXIT_SUCCESS;
}