#include<iostream>
#include<string>
using namespace std;
////��̬��Ա�����;�̬��Ա����
//class Person
//{
//public:
//	Person()
//	{
//		this->m_age = 0;
//		this->m_name = "����";
//		cout << "��ʼ����" << endl << "������" << this->m_name << " " << "���䣺" << this->m_age << endl;
//	}
//	static void showInfo()//��̬��Ա�����ϲ������const
//	{
//		//cout << "������" << m_name << endl;
//		cout << "���䣺" << m_age << endl;
//	}
//	void showInfo2()const
//	{
//		cout << "������" << this->m_name << " " << "���䣺" << this->m_age << endl;
//	}
//public:
//	static int m_age;
//	string m_name;
//};
//int Person::m_age = 1;//��̬��Ա�����������������ⶨ�壬ע������Ҫ������������ 
//void test1()
//{
//	Person p1, p2;
//	p1.m_age = 20;
//	p1.m_name = "����";
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
//	this->m_name = "ϰ���";
//}
//chairMan::chairMan(const chairMan &c)
//{
//
//}
//void chairMan::showName()
//{
//	//cout << "������ϯ��" << m_name << endl;
//	cout << "������ϯ��" << singleman->m_name << endl;
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
//	Printer(){}//��̬��Ա�����޷�ͨ�����캯����ʼ��
//	Printer(const Printer &p){}
//public:
//	static Printer* getInstance()
//	{
//		return singlep;
//	}
//	static void printText(string text)
//	{
//		cout << text << endl << "�Ѵ�ӡ" << ++m_count << "��" << endl;
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
//		cout << "������ϯ��ͬ" << endl;
//	}*/
//	/*Printer *p1 = Printer::getInstance();
//	Printer *p2 = Printer::getInstance();
//	Printer::printText("��ְ����");
//	p1->printText("��ְ����");
//	p2->printText("��������");*/
//	cout << "sizeof(Printer) = " << sizeof(Printer) << endl;//
//	system("pause");
//	return EXIT_SUCCESS;
//}
//ȫ����Ԫ����
//���Է������е�˽��Ȩ�޵ĳ�Ա��������
//��������Ϊ��Ԫ��
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
		this->salon = "����";
		this->chambre = "����";
	}
	void print()
	{
		salon = "�Ǻ�";
		cout << "�����ÿ�ָ����ʶ���ɹ�" << endl;
	}
};
GoodGay::GoodGay()
{
	this->h = new Home;
}
void GoodGay::visit()
{
	cout << "�û������ڲι�" << this->h->salon << endl;
	cout << "�û������ڲι�" << this->h->chambre << endl;
}
void GoodGay::visit2()
{
	cout << "�û������ڲι�" << this->h->salon << endl;
	//cout << "�û������ڲι�" << h.chambre << endl;
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
//	cout << "�û������ڲι�" << h.chambre << endl;
//	cout << "�û������ڲι�" << h.salon << endl;
//}