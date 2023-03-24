#include<iostream>
#include<string>
using namespace std;
////静态成员变量和静态成员函数
//class Person
//{
//public:
//	Person()
//	{
//		this->m_age = 0;
//		this->m_name = "张三";
//		cout << "初始化：" << endl << "姓名：" << this->m_name << " " << "年龄：" << this->m_age << endl;
//	}
//	static void showInfo()//静态成员函数上不允许加const
//	{
//		//cout << "姓名：" << m_name << endl;
//		cout << "年龄：" << m_age << endl;
//	}
//	void showInfo2()const
//	{
//		cout << "姓名：" << this->m_name << " " << "年龄：" << this->m_age << endl;
//	}
//public:
//	static int m_age;
//	string m_name;
//};
//int Person::m_age = 1;//静态成员变量类内声明，类外定义，注意类外要加上数据类型 
//void test1()
//{
//	Person p1, p2;
//	p1.m_age = 20;
//	p1.m_name = "李四";
//	cout << "p2.m_age=" << Person::m_age << "p2.m_name:" << p2.m_name << endl;
//	Person::showInfo();
//	p1.showInfo2();
//}
//class chairMan
//{
//private:
//	string m_name;
//	static chairMan *singleman;
//private:
//	chairMan();
//	chairMan(const chairMan &c);
//public:
//	static void showName();
//	static chairMan* getInstance();
//};
//chairMan *chairMan::singleman = new chairMan;
//chairMan::chairMan()
//{
//	this->m_name = "习大大";
//}
//chairMan::chairMan(const chairMan &c)
//{
//
//}
//void chairMan::showName()
//{
//	//cout << "国家主席：" << m_name << endl;
//	cout << "国家主席：" << singleman->m_name << endl;
//}
//chairMan* chairMan::getInstance()
//{
//	return singleman;
//}
//
//void test2()
//{
//	chairMan::showName();
//}
//class Printer
//{
//private:
//	static int m_count;
//	static Printer *singlep;
//private:
//	Printer(){}//静态成员变量无法通过构造函数初始化
//	Printer(const Printer &p){}
//public:
//	static Printer* getInstance()
//	{
//		return singlep;
//	}
//	static void printText(string text)
//	{
//		cout << text << endl << "已打印" << ++m_count << "次" << endl;
//	}
//};
//int Printer::m_count = 0;
//Printer* Printer::singlep = new Printer;
//int main(void)
//{
//	//test1();
//	/*static int a;
//	int a = 1;*/
//	//test2();
//	/*chairMan *c1 = chairMan::getInstance();
//	chairMan *c2 = chairMan::getInstance();
//	c1->showName();
//	if (c1 == c2){
//		cout << "国家主席相同" << endl;
//	}*/
//	/*Printer *p1 = Printer::getInstance();
//	Printer *p2 = Printer::getInstance();
//	Printer::printText("离职报告");
//	p1->printText("就职报告");
//	p2->printText("退休申请");*/
//	cout << "sizeof(Printer) = " << sizeof(Printer) << endl;//
//	system("pause");
//	return EXIT_SUCCESS;
//}
//全局友元函数
//可以访问类中的私有权限的成员变量或函数
//整个类作为友元类
class Home;
class GoodGay
{
public:
	Home *h;
public:
	GoodGay();
	
	void visit();
	void visit2();
};
class Home
{
	//friend void goodGay(const Home &h);
	//friend class GoodGay;
	friend void GoodGay::visit();
private:
	string chambre;
public:
	string salon;
public:
	Home()
	{
		this->salon = "客厅";
		this->chambre = "卧室";
	}
	void print()
	{
		salon = "呵呵";
		cout << "解引用空指针访问对象成功" << endl;
	}
};
GoodGay::GoodGay()
{
	this->h = new Home;
}
void GoodGay::visit()
{
	cout << "好基友正在参观" << this->h->salon << endl;
	cout << "好基友正在参观" << this->h->chambre << endl;
}
void GoodGay::visit2()
{
	cout << "好基友正在参观" << this->h->salon << endl;
	//cout << "好基友正在参观" << h.chambre << endl;
}


//void goodGay(const Home &h);
//void test1()
//{
//	Home h1;
//	goodGay(h1);
//}
void test2()
{
	/*Home h1;
	GoodGay g1;
	g1.visit();
	g1.visit2();*/
	Home *h = NULL;
	h->print();
}
int main(void){
	//test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}
//void goodGay(const Home &h)
//{
//	cout << "好基友正在参观" << h.chambre << endl;
//	cout << "好基友正在参观" << h.salon << endl;
//}