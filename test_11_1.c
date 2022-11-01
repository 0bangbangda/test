#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main(void){
//	/*double a = fabs(10);*/
//	//printf("%f\n",a);
//	double angle;
//	angle = atan2(1, 2);
//	printf("%f", angle);
//}
struct date
{
	int year;
	int month;
	int day;
};
int LeapYear(int m);
int month(int input, int y);
int calculer(struct date*s);
int main(void){
	struct date s = { 0 };
	scanf("%d %d %d", &s.year, &s.month, &s.day);
	//先确定每月的天数，注意闰年
	//计算天数
	
	printf("%d", calculer(&s));
	return EXIT_SUCCESS;
}
int LeapYear(int m)
{
	//是闰年，返回1；不是，则返回0；
	if ((m % 4 == 0 && m % 100 != 0) || m % 400 == 0)
		return 1;
	return 0;
}
int month(int input, int y)
{
	switch (input)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:return 31;
	case 4:
	case 6:
	case 9:
	case 11:return 30;
	case 2:
		if (LeapYear(y))
			return 29;
		else
			return 28;
	default:
		fprintf(stderr, " month is error");
		return EXIT_FAILURE;
	}
}
int calculer(struct date*s)
{
	int days = s->day;
	for (int i = 1; i < s->month; i++)
	{
		days += month(i,s->year);
	}
	return days;
}