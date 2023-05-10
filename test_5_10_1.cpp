#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
namespace Li
{
	FILE *fp = NULL;
}
namespace Han
{
	FILE *fp = NULL;
}
namespace Diy
{
	class Student
	{
	private:
		char *m_name;
		int m_age;
		double m_score;
	public:
		Student(char *name, int age, double score)
		{
			this->m_name = new char[strlen(name) + 1];
			strcpy(this->m_name, name);
			this->m_age = age;
			this->m_score = score;
		}
		~Student()
		{
			if (this->m_name)
			{
				delete[]this->m_name;
				this->m_name = NULL;
			}
		}
		void showInfo()const
		{
			cout << "姓名：" << this->m_name << endl << "年龄：" << this->m_age << endl << "成绩：" << this->m_score << endl;
		}
	};
}
int main(void)
{
	//using Li::fp;
	/*using namespace Li;
	fp = fopen("one,txt", "r");
	Han::fp = fopen("two.txt", "rb+");*/

	Diy::Student stu("小明", 13, 99.9);
	stu.showInfo();
	system("pause");
	return EXIT_SUCCESS;
}