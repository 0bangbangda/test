#include<iostream>
#include<string>
using namespace std;
void test1()
{
	//string��Ĺ��캯��:Ĭ�Ϲ��죬�вι��죬�������죬
	string str1;
	string str2(str1);
	string str3("abcdef");
	string str4(5, 'a');
	cout << str1 << str2 << str3 << str4 << endl;
	//string��Ļ�����ֵ����
	//str1 = str3;
	//str2 = "12345";
	//str4 = 'a';
	//cout << str1 << endl << str2 << endl << str3 << endl<<str4 << endl;//abcdef 12345 abcdef a
	str1.assign(str3);
	str2.assign("12345");
	str4.assign(1, 'a');
	cout << str1 << endl << str2 << endl << str3 << endl << str4 << endl;
}
void test2()
{
	//���Ҳ���
	string s1 = string("abcdef");
	int pos = s1.find("cf");
	cout << " cd position is " << pos << endl;
	cout << " d position is " << s1.find('d',4) << endl;
	pos = s1.rfind("def");
	cout << "def position is " << pos << endl;
	//�滻����
	string s2("hello");
	s1.replace(0, 1, s2);//hellobcdef
	//cout << s1 << endl;
	s1.replace(1, 3, "hello");
	cout << s1 << endl;

}
void test3()
{
	//��ȡ�ַ�����
	string s1 = "123456";
	//cout << s1[2] << endl;
	s1[4] = 'a';
	//cout << s1.at(2) << endl;
	cout << s1 << endl;
	s1.at(5) = 'b';
	cout << s1 << endl;
}
void test4()
{
	string s1("��");
	string s2 = string("��");
	string s3("�й�");
	//s1 = s1 + s2 + s3;
	/*s1 += s2;
	s1 += s3;
	cout << s1 << endl;*/
	s1.append(s2).append(s3,2,2);
	cout << s1 << endl;
}
void test5()
{
	//string��Ƚϲ���
	string s1("abcdef");
	string s2("Aabcdef");
	int res = s1.compare(s2);
	if (res > 0)
	{
		cout << "s1>s2" << endl;
	}
	else if (res < 0)
	{
		cout << "s1<s2" << endl;
	}
	else
	{
		cout << "s1==s2" << endl;
	}
}
void test6()
{
	//�����Ӵ�����
	string s = "12345678";
	string s2 = s.substr(2, 3);
	cout << s2 << endl; 
	//����һ���ʼ����û���
	string s3("penghuadon@163.com");
	cout << s3.substr(0, s3.find('@'));
}
int main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	system("pause");
	return EXIT_SUCCESS;
}