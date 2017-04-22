//Data.h
#ifndef DATA_H
#define DATA_H
//// Data类，将错误月份重置为2017/1/1 
#include<iostream>
class Data
{
public:
	Data() :year(2017), month(1), day(1) {}
	Data(int, int, int);
	~Data() = default;
	void PrintData(void);
private:
	const int month_days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	const int months = 12;
	int year;
	int month;
	int day;
	void resetting(void) { year = 2017; month = 1; day = 1; }
};

Data::Data(int y, int m, int d) :year(y), month(m), day(d)
{
	if (month < 1 || month>months)
	{
		resetting();
		return;
	}

	int maxDay(month_days[month - 1]);
	bool leapYear(const int&);
	if ((month == 2) && leapYear(year)) maxDay += 1;
	if (day<1 || day>maxDay)
	{
		resetting();
		return;
	}
}
void Data::PrintData(void)
{
	std::cout << month << '/' << day << '/' << year << std::endl;
}
//闰年判断
bool leapYear(const int &year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? true : false;
}


#endif // !DATA_H
