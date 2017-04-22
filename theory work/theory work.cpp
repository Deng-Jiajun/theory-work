///*一本书被撕了一张（每页正面、背面各一连续页码），剩余页码之和为16023，问该书共多少页，被撕的一张两个页码是多少。*/
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	constexpr unsigned RemainTotalPages(16023);
//	unsigned TotalPages(0);
//	static unsigned page(0);
//	while (TotalPages < RemainTotalPages)
//	{
//		TotalPages += page;
//		++page;
//	}
//	cout << "total " << TotalPages;
//	unsigned page1 = (TotalPages - RemainTotalPages) / 2;
//	unsigned page2 = page1 + 1;
//	cout << "Two pages had been torn out of the book : "
//		<< page1 << " " << page2 << endl;
//	cout << page - 1 << "pages" << endl;
//
//	system("pause");
//	return 0;
//}



///*设有长度为n的浮点数组x，计算标准差*/
//#include<iostream>
//#include<array>
//#include<cmath>
//using namespace std;
//template<unsigned N>
//const double StandardDeviation(const double(&darray)[N])
//{
//	double mean(0);
//	for (const auto &d : darray)
//		mean += d;
//	mean /= N;
//
//	double variance(0);
//	for (const auto &d : darray)
//	{
//		double tmp(d - mean);
//		variance += pow(tmp, 2);
//	}
//	return sqrt(variance/N);
//}
//int main(void)
//{
//	const double darr[10]{ 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
//	cout << "darr[10] : ";
//	for (const auto &d : darr)
//		cout << d << " ";
//	cout << endl;
//	cout <<"StandardDeviation(darr) = "<< StandardDeviation(darr) << endl;
//	system("pause");
//	return 0;
//}


/*函数process()用于分解字符串mainstr中的各单词并存入结构体数组*/
//#include<iostream>
//#include"PROCESS.h"
//#include<string>
//#include<cstdio>
//using namespace std;
//
//int main(void)
//{
//	/*输入主串*/
//	string s;
//	cout << "Enter mainstr : ";
//	getline(cin, s);
//
//	char mainstr[999];
//	unsigned i = 0;
//	for (const auto &c : s)
//		mainstr[i++] = c;
//	mainstr[i] = '\0';
//
//	/*调用process*/
//	int count=process(mainstr, word);
//
//	/*输出数组内容、数组中最长单词*/
//	i = 0;
//	unsigned index;
//	while (i!=count)
//	{
//		static unsigned max_len(0);
//		if (word[i].w_len > max_len)
//		{
//			index = i;
//			max_len = word[i].w_len;
//		}
//		cout << word[i].w <<" "<< word[i].w_len << endl;
//		++i; 
//	}
//	cout << "The longest word : " << word[index].w << endl;
// 
//	system("pause");
//	return 0;
//}


/*编写一程序，通过重载函数abs(),实现求int和double类型数据的绝对值*/
//#include<iostream>
//using namespace std;
//const int my_abs(const int &i)
//{
//	return i > 0 ? i : -i;
//}
//const double my_abs(const double &d)
//{
//	return d > 0 ? d : -d;
//}
//int main(void)
//{
//	cout << my_abs(100)<<" " << my_abs(-1234) << endl;
//	cout << my_abs(-3.14)<<" "<< my_abs(1.5) << endl;
//	
//	system("pause");
//	return 0;
//}


///*约瑟夫环*/
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	unsigned m, n;
//	cout << "Enter m、n : ";
//	cin >> m >> n;
//	vector<int> ivec;
//	unsigned i(0);
//	while (i != m)
//	{
//		ivec.push_back(++i);
//	}
//	auto p = ivec.begin();
//	unsigned  OutNum(0);
//	while (OutNum != m)
//	{
//		
//		static unsigned index(0),count(0);
//		if (*(p + index) != 0)
//		{
//			++count;
//			if (count == n)
//			{
//				cout << "No." << *(p + index) << " drop out." << endl;
//				*(p + index) = 0;
//				count = 0;
//				++OutNum;
//			}
//		}
//		++index;
//		if (index == m)index = 0;
//	}
//	system("pause");
//	return 0;
//}



///*狼找兔子*/
////	0	2	5	9
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	unsigned n;
//	cout << "Enter the number of caves : "; cin >> n;
//	vector<unsigned> cave(n);
//	auto p = cave.begin();
//	for (unsigned i = 0; i != n; i++)
//		*(p + i) = i + 1;
//
//	unsigned times(9999);
//	while (--times)
//	{
//		static unsigned cave_num(0), interval(2);
//		
//		if (*(p + cave_num) != 0)
//			*(p + cave_num) = 0;
//
//		cave_num += interval;
//		cave_num %= n;
//		++interval;
//	}
//
//	cout << "The number of safe cave : ";
//	for (auto &u : cave)
//		if (u != 0)
//			cout << u-1 << " ";
//	cout << endl;
//	system("pause");
//	return 0;
//}









///*各种排序算法 数据类型以 vector<int> 为例*/
///*冒泡 选择 插入 随机 快速排序 随机化快速排序*/
//#include<iostream>
//#include<vector>
//#include<random>
//#include<ctime>
//#include<iomanip>
//using namespace std;
//
///*随机范围函数*/
//const unsigned RangeRandom(const unsigned &a, const unsigned &b)
//{
//	std::uniform_int_distribution<unsigned> u(a, b);
//	static std::default_random_engine e(time(NULL));
//	return u(e);
//}
//
///*冒泡排序*/
//void BubbleSort(vector<int> &ivec)
//{
//	for (auto &out : ivec)
//		for (auto &in : ivec)
//			if (out < in)
//				swap(out, in);
//}
//
///*选择排序*/
//void SelectSort(vector<int> &ivec)
//{
//	for (size_t i = 0; i != ivec.size(); ++i)
//	{
//		auto min = ivec[i];
//		unsigned index(i);
//		for (size_t j = i+1; j != ivec.size(); ++j)
//		{
//			if (ivec[j] < min)
//			{
//				min = ivec[j];
//				index = j;
//			}
//		}
//		swap(ivec[i], ivec[index]);
//	}
//}
//
///*插入排序*/
//void InsertionSort(vector<int> &ivec)
//{
//	for (size_t i = 1; i != ivec.size(); ++i)
//	{
//		int tmp = ivec[i];
//		int j = i - 1;//	j的类型设为size_t会出现警告，原因不明
//
//		while (j >= 0 && ivec[j] > tmp)
//		{
//			ivec[j + 1] = ivec[j];
//			--j;
//		}
//		ivec[j + 1] = tmp;
//	}
//}
//
///*随机排序*/
//void RandomSort(vector<int> &ivec)
//{
//	const unsigned size = ivec.size();
//	for (unsigned i = 0; i != size; ++i)
//		swap(ivec[i], ivec[RangeRandom(i,size-1)]);
//}
//
///*分治*/
//int Partition(vector<int> &A, int p, int r)
//{
//	int x = A[r];
//	int i = p - 1;
//	for (int j = p; j != r; ++j)
//	{
//		if (A[j] <= x)
//		{
//			++i;
//			swap(A[i], A[j]);
//		}
//	}
//	swap(A[i + 1], A[r]);
//	return i + 1;
//}
///*快速排序*/
//void QuickSort(vector<int> &A, int p, int r)
//{
//	if (p < r)
//	{
//		int q = Partition(A, p, r);
//		QuickSort(A, p, q - 1);
//		QuickSort(A, q + 1, r);
//	}
//}
//
///*随机分治*/
//int RandomizedPartition(vector<int> &A, int p, int r)
//{
//	int i = RangeRandom(p, r);
//	swap(A[r], A[i]);
//
//	return Partition(A, p, r);
//}
//
//void RandomizedQuickSort(vector<int> &A, int p, int r)
//{
//	if (p < r)
//	{
//		int q = RandomizedPartition(A, p, r);
//		RandomizedQuickSort(A, p, q - 1);
//		RandomizedQuickSort(A, q + 1, r);
//	}
//}
//void Print(vector<int> &ivec)
//{
//	for (const auto &i : ivec)
//		cout << setw(3) << i << " ";//输出i占3个字符
//	cout << '\n' << endl;
//}
//int main(void)
//{
//
//	vector<int> ivec;
//	vector<int> ivec2;
//	vector<int> ivec3;
//	vector<int> ivec5;
//	vector<int> ivec6;
//	unsigned times(20);
//
//	while (--times)
//	{
//		ivec.push_back(RangeRandom(1, 100));
//		ivec2.push_back(RangeRandom(1, 100));
//		ivec3.push_back(RangeRandom(1, 100));
//		ivec5.push_back(RangeRandom(1, 100));
//		ivec6.push_back(RangeRandom(1, 100));
//	}
//	BubbleSort(ivec);
//	SelectSort(ivec2);
//	InsertionSort(ivec3);
//	QuickSort(ivec5, 0, ivec5.size() - 1);
//	RandomizedQuickSort(ivec6, 0, ivec5.size()-1);
//	vector<int> ivec4(ivec);
//	RandomSort(ivec4);
//
//	cout << left;//左对齐
//	cout << "冒泡排序 ： "; Print(ivec);
//
//	cout << "选择排序 ： "; Print(ivec2);
//
//	cout << "插入排序 ： "; Print(ivec3);
//
//	cout << "随机排序 ： "; Print(ivec4);
//
//	cout << "快速排序 ： "; Print(ivec5);
//
//	cout << "随机快排 ： "; Print(ivec6);
//
//	system("pause");
//	return 0;
//}

///*随机生成加减乘除问题*/
//#include<iostream>
//#include<random>
//#include<ctime>
//#include<string>
//using namespace std;
//int calculate(const unsigned &lhd, const unsigned &rhd, const unsigned sign)
//{
//	if (sign == 0)	return lhd + rhd;
//	if (sign == 1)	return lhd - rhd;
//	if (sign == 2)	return lhd * rhd;
//	if (sign == 3)	return lhd / rhd;
//	cout << "wrong sign!" << endl;
//	return 0;
//}
//bool YesOrNo(void)
//{
//	char Yes_No;	cin >> Yes_No;
//	if (Yes_No == 'Y' || Yes_No == 'y')
//		return true;
//
//	return false;
//}
//void PrintEquation(const unsigned &lhd, const unsigned &rhd, const unsigned sign)
//{
//	const vector<string> OperatorWithSpace{ " + "," - "," * "," / " ," = " };
//	cout << lhd << OperatorWithSpace[sign] << rhd << OperatorWithSpace[4];
//}
//int main(void)
//{
//	// 范围随机数
//	static std::uniform_int_distribution<unsigned> u(0, 20), u2(0, 3);
//	static std::default_random_engine e;
//	e.seed(time(NULL));
//
//	while (true)
//	{
//		unsigned a(u(e)), b(u(e)), sign(u2(e));
//		int c;
//		PrintEquation(a, b, sign);
//		int tmp(calculate(a, b, sign));
//		while (true)
//		{
//			cin >> c;
//			if (c == tmp)
//			{
//				cout << "You are right!" << ends; break;
//			}
//			else
//			{
//				cout << "Answer wrong!" << ends << "Try again?(Y/N)" << ends;
//				if (YesOrNo())
//					PrintEquation(a, b, sign);
//				else
//					break;
//			}
//		}
//		cout << "New question?(Y/N)" << ends;
//		if (YesOrNo()) {/*空语句*/ }
//		else
//			break;
//	}
//	system("pause");
//	return 0;
//}


///*求2个或3个正整数中的最大数，用带有默认参数的函数实现*/
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	unsigned max_num(unsigned a, unsigned b, unsigned c = 0);	
//	cout << max_num(1, 2)<<endl;
//	cout << max_num(1, 2, 3)<<endl;
//	system("pause");
//	return 0;
//}
//unsigned max_num(unsigned a, unsigned b, unsigned c)
//{
//	a = a > b ? a : b;
//	a = a > c ? a : c;
//	return a;
//}

///*连接两个字符串*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		str1 += str2;
//		cout << str1 << endl;
//	}
//	system("pause");
//	return 0;
//}


/*逆序输出字符串*/
//#include<string>
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	string str;
//	while (cin >> str)
//	{
//		for (auto beg = str.crbegin(), end = str.crend(); beg != end; ++beg)
//			cout << *beg;
//		//for (auto beg = str.begin(), end = str.end(); end != beg;)
//		//cout << *(--end);
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


///*改正代码*/
//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	void set_time(void);
//	void show_time(void);
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//void Time::set_time(void)
//{
//	cin >> hour >> minute >> sec;
//}
//void Time::show_time(void)
//{
//	cout << hour << ':' << minute << ':' << sec << endl;
//}
//Time t;
//int main(void)
//{
//	t.set_time();
//	t.show_time();
//	system("pause");
//	return 0;
//}

/*
//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	int hour;
//	int minute;
//	int sec;
//};
//int main()
//{
//	Time t1;
//	Time &t2 = t1;
//	cin >> t2.hour;
//	cin >> t2.minute;
//	cin >> t1.sec;
//	cout << t1.hour << ":" << t1.minute << ":" << t2.sec << endl;
//}
*/
///*
//把上面代码改写
//1.数据成员私有
//2.输入输出改为成员函数实现
//3.在类体内定义成员函数
//*/
//#include<iostream>
//using std::cin; using std::cout; using std::endl;
//class Time
//{
//public:
//	void set_time(void)
//	{
//		cin >> hour >> minute >> sec;
//	}
//	void show_time(void)
//	{
//		cout << hour << ':' << minute << ':' << sec << endl;
//	}
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//
//int main()
//{
//	Time t1;
//	t1.set_time();
//	t1.show_time();
//	system("pause"); 
//	return 0;
//}


///*
//再把上面代码改写
//在类内声明成员函数，而在类外定义成员函数
//*/
//#include<iostream>
//using std::cin; using std::cout; using std::endl;
//class Time
//{
//public:
//	void set_time(void);
//	void show_time(void);
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//void Time::set_time(void)
//{
//	cin >> hour >> minute >> sec;
//}
//void Time::show_time(void)
//{
//	cout << hour << ':' << minute << ':' << sec << endl;
//}
//int main()
//{
//	Time t1;
//	t1.set_time();
//	t1.show_time();
//	system("pause");
//	return 0;
//}


///*定义有个名为complex的复数类，其属性数据为复数的实部和虚部，要求有构造函数和拷贝构造函数初始化数据成员，并能够打印复数的值*/
//
//#include<iostream>
////using namespace std;
//class complex;
//class complex
//{
//public:
//	complex(double a, double b) :RealPart(a), ImaginaryPart(b) {}
//	complex() :complex(0, 0) {}//默认构造，委托构造
//	complex(const complex&);//拷贝构造
//	void Print(void);
//private:
//	double RealPart;
//	double ImaginaryPart;
//};
//complex::complex(const complex &c)
//{
//	RealPart = c.RealPart;
//	ImaginaryPart = c.ImaginaryPart;
//}
//void complex::Print(void)
//{
//	std::cout << RealPart << '+' << ImaginaryPart << 'i' << std::endl;
//}
//
//int main(void)
//{
//	complex a;
//	complex b(1, 1);
//	complex c(b);
//	a.Print();
//	b.Print();
//	c.Print();
//	complex(0, 1).Print();
//	complex(1, 0).Print();
//	system("pause");
//	return 0;
//}

/////*SavingAccount类*/
//#include<iostream>
//class SavingAccount;
//class SavingAccount
//{
//	friend double modifyInterestRate(const double &);//友元
//public:
//	SavingAccount(double money) :savingsBalance(money) {}
//	SavingAccount() :SavingAccount(0) {}
//	double calculateMonthlyInterest(void);
//	
//private:
//	double savingsBalance;
//	static double annualInterestRate;
//};
//double SavingAccount::annualInterestRate(0.01);//年利率默认值1%
//double SavingAccount::calculateMonthlyInterest(void)
//{
//	constexpr int months(12);
//	double MonthlyInterest(savingsBalance*annualInterestRate / months);
//	savingsBalance += MonthlyInterest;
//	return savingsBalance;
//}
//
//static double modifyInterestRate(const double &);
//double modifyInterestRate(const double &newinterest)
//{
//	SavingAccount::annualInterestRate = newinterest;
//	return SavingAccount::annualInterestRate;
//}
//
//
//int main(void)
//{
//	SavingAccount saver1(2000), saver2(3000);
//	modifyInterestRate(0.03);
//	std::cout << saver1.calculateMonthlyInterest() << std::endl;
//	std::cout << saver2.calculateMonthlyInterest() << std::endl;
//
//	modifyInterestRate(0.04);
//	std::cout << saver1.calculateMonthlyInterest() << std::endl;
//	std::cout << saver2.calculateMonthlyInterest() << std::endl;
//
//	system("pause");
//	return 0;
//}




///*Emloyee类*/
//#include<iostream>
//#include<string>
//class Employee;
//class Employee
//{
//public:
//	Employee(std::string fir, std::string sec,int mon);
//	Employee():Employee("NULL","NULL",0){}
//	Employee(std::string fir, std::string sec):Employee(fir,sec,0){}
//	void setFirstName(std::string);
//	void setSecondName(std::string);
//	void setMonthlySalary(int);
//	std::string getFirstName(void) { return FirstNmae; }
//	std::string getSecondName(void) { return SecondName; }
//	int getMonthlySalary(void) { return MonthlySalary; }
//private:
//	std::string FirstNmae, SecondName;
//	int MonthlySalary;
//};
//
//Employee::Employee(std::string fir, std::string sec, int mon):FirstNmae(fir),SecondName(sec),MonthlySalary(mon){}
//
//void Employee::setFirstName(std::string fir) 
//{
//	FirstNmae = fir;
//}
//void Employee::setSecondName(std::string sec)
//{
//	SecondName = sec;
//}
//void Employee::setMonthlySalary(int mon)
//{
//	MonthlySalary = mon<0?0:mon;
//}
//
//
//int main(void)
//{
//	Employee A("Afirstname", "Asecondname"), B;
//	A.setMonthlySalary(5000);
//	B.setFirstName("Bfirstname");
//	B.setSecondName("Bsecondname");
//	B.setMonthlySalary(6000);
//
//	std::cout << A.getFirstName() <<" "<< A.getSecondName()<<" "<< A.getMonthlySalary() << std::endl;
//	std::cout << B.getFirstName() << " " << B.getSecondName() << " " << B.getMonthlySalary() << std::endl;
//
//	A.setMonthlySalary(A.getMonthlySalary()*1.1);
//	B.setMonthlySalary(B.getMonthlySalary()*1.1);
//	std::cout << A.getMonthlySalary() << " " << B.getMonthlySalary() << std::endl;
//
//	system("pause");
//	return 0;
//}

///*Date类*/
//#include<iostream>
//class Date;
//class Date
//{
//public:
//	Date(int, int, int);
//	void setmonth(int);
//	void setday(int);
//	void setyear(int);
//	int getmonth(void) { return month; }
//	int getday(void) { return day; }
//	int getyear(void) { return year; }
//	void displayDate(void) { std::cout << month << "/" << day << "/" << year << std::endl; }
//private:
//	int month, day, year;
//};
//
//Date::Date(int m, int d, int y) :month(m), day(d), year(y)
//{
//	if (month < 1 || month>12)month = 1;
//}
//
//void Date::setmonth(int m) { month = (m < 1 || m>12) ? 1 : m; }
//void Date::setday(int d) { day = d; }
//void Date::setyear(int y) { year = y; }
//
//int main(void)
//{
//	Date day1(10, 2, 3), day2(20, 2, 3), day3(-3, 2, 3);
//	day1.displayDate();day2.displayDate();day3.displayDate();
//	day1.setmonth(-1);day1.setday(30);day1.setyear(2017);
//	std::cout << day1.getmonth() << " " << day1.getday() << " " << day1.getyear() << std::endl;
//	system("pause");
//	return 0;
//}

//////test.cpp
//#include<iostream>
//#include"Data.h"
//using std::cout; using std::cin; using std::endl;
//int main(void)
//{
//	Data D, D2(2007, 20, 7), D3(2008, 2, 29), D4(2009, 2, 29), D5(2100, 2, 29), D6(2000, 100, 1);
//	D.PrintData(); D2.PrintData(); D3.PrintData(); D4.PrintData(); D5.PrintData(); D6.PrintData();
//	system("pause");
//	return 0;
//}

//////test.cpp
//#include<iostream>
//#include"Rational.h"
//using std::cout; using std::cin; using std::endl;
//int main(void)
//{
//	Rational result,R(-1, 2), R2(3, 4),R3(0,1),R4(-10,2),R5(5,0);
//
//	result = R + R2;
//	result.PrintInFloat(); result.PrintInfraction();
//
//	result = R2 - R3;
//	result.PrintInFloat(); result.PrintInfraction();
//
//	result = R3*R4;
//	result.PrintInFloat(); result.PrintInfraction();
//
//	(Rational(5, 6)*Rational(7, 8)).PrintInFloat();
//	(Rational(5, 6)*Rational(7, 8)).PrintInfraction();
//
//	result = R4/R5;
//	result.PrintInFloat(); result.PrintInfraction();
//
//	(Rational(5, 6)/Rational(-7, 8)).PrintInFloat();
//	(Rational(5, 6)/Rational(-7, 8)).PrintInfraction();
//	                
//	system("pause");
//	return 0;
//}

////10.
//#include <iostream>
//using namespace std;
//class Date;
//class Time
//{
//	friend	void display(const Date&, const Time&);
//
//public:
//	Time(int, int, int);
//	void display(const Date&);
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//
//class Date
//{
//	friend	void display(const Date&, const Time&);
//public:
//	Date(int, int, int);
//	friend void Time::display(const Date &);
//private:
//	int month;
//	int day;
//	int year;
//};
//
//Time::Time(int h, int m, int s)
//{
//	hour = h;
//	minute = m;
//	sec = s;
//}
//
//void Time::display(const Date &da)
//{
//	cout << da.month << "/" << da.day << "/" << da.year << endl;
//	cout << hour << ":" << minute << ":" << sec << endl;
//}
//
//void display(const Date &D, const Time &T)
//{
//	cout << D.month << "/" << D.day << "/" << D.year << endl;
//	cout << T.hour << ":" << T.minute << ":" << T.sec << endl;
//}
//
//
//Date::Date(int m, int d, int y)
//{
//	month = m;
//	day = d;
//	year = y;
//}
//
//int main()
//{
//	Time t1(10, 13, 56);
//	Date d1(12, 25, 2004);
////	t1.display(d1);
//	display(d1,t1);
//	system("pause");
//	return 0;
//}

////11.
//#include <iostream>
//using namespace std;
//class Date;
//class Time
//{
//public:
//	Time(int, int, int);
//	void display(const Date&);
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//
//class Date
//{
//	friend class Time;
//public:
//	Date(int, int, int);
//private:
//	int month;
//	int day;
//	int year;
//};
//
//Time::Time(int h, int m, int s)
//{
//	hour = h;
//	minute = m;
//	sec = s;
//}
//
//void Time::display(const Date &da)
//{
//	cout << da.month << "/" << da.day << "/" << da.year << endl;
//	cout << hour << ":" << minute << ":" << sec << endl;
//}
//
//
//Date::Date(int m, int d, int y)
//{
//	month = m;
//	day = d;
//	year = y;
//}
//
//int main()
//{
//	Time t1(10, 13, 56);
//	Date d1(12, 25, 2004);
//	t1.display(d1);
//	system("pause");
//	return 0;
//}

//#include<iostream>
////using namespace std;
//class Time
//{
//public:
//	Time():Time(0,0,0){}
//	Time(int, int, int);
//	~Time()=default;
//	int CalculatePassSec(void);
//	void TransformGiveSec(void);
//	void ShowTime(void);
//private:
//	int hour_;
//	int minute_;
//	int second_;
//	int pass_sec_;
//	int give_sec_;
//};
//
//
//Time::Time(int h, int m, int s):hour_(h),minute_(m),second_(s)
//{
//	give_sec_ = CalculatePassSec();
//}
//int Time::CalculatePassSec(void)
//{
//	return hour_ * 3600 + minute_ * 60 + second_;
//}
//
//void Time::TransformGiveSec(void)
//{
//
//	int tmp_hour, tmp_minute, tmp_second,tmp_sec;
//	tmp_sec = give_sec_;
//	tmp_hour = tmp_sec / 3600;
//	tmp_sec %= 3600;
//	tmp_minute = tmp_sec / 60;
//	tmp_sec %= 60;
//	tmp_second = tmp_sec;
//	std::cout << tmp_hour << ':' << tmp_minute << ':' << tmp_second << std::endl;
//}
//void Time::ShowTime(void)
//{
//	std::cout << hour_ << ':' << minute_ << ':' << second_ << std::endl;
//}
//
//int main(void)
//{
//	Time t(1, 1, 1);
//	std::cout << t.CalculatePassSec() << std::endl;
//	t.ShowTime(); t.TransformGiveSec();
//	system("pause");
//	return 0;
//}

////1.
//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//public:
//	void get_value()
//	{
//		cin >> num >> name >> sex;
//	}
//	void display()
//	{
//		cout << "num: " << num << endl;
//		cout << "name: " << name << endl;
//		cout << "sex: " << sex << endl;
//	}
//private:
//	int num;
//	string name;
//	char sex;
//};
//
//class Student1 : public Student
//{
//public:
//	void get_value_1()
//	{
//		get_value();
//		cin >> age >> addr;
//	}
//	void display_1()
//	{  
//		display();
//		cout << "age: " << age << endl; 
//		cout << "address: " << addr << endl;
//	}
//private:
//	int age;
//	string addr;
//};
//
//int main()
//{
//	Student1 stud1;
//	stud1.get_value_1();
//	stud1.display_1();
//	system("pause");
//	return 0;
//}

////2.
//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//public:
//	void get_value()
//	{
//		cin >> num >> name >> sex;
//	}
//	void display()
//	{
//		cout << "num: " << num << endl;
//		cout << "name: " << name << endl;
//		cout << "sex: " << sex << endl;
//	}
//private:
//	int num;
//	string name;
//	char sex;
//};
//
//class Student1 : private Student
//{
//public:
//	void get_value_1()
//	{
//		get_value();
//		cin >> age >> addr;
//	}
//
//	void display_1()
//	{
//		display();
//		cout << "age: " << age << endl;          
//		cout << "address: " << addr << endl;
//	}   
//private:
//	int age;
//	string addr;
//};
//
//int main()
//{
//	Student1 stud1;
//	stud1.get_value_1();
//	
//	stud1.display_1();
//	system("pause");
//	return 0;
//}


//#include"Package.h"
//int main(void)
//{
//	Information sender("送件人姓名", "送件人地址", "送件人所在城市", "送件人所在州", "送件人所在地邮编");
//	Information receiver("收件人姓名", "收件人地址", "收件人所在城市", "收件人所在州", "收件人所在地邮编");
//	Package P(sender, receiver, 50, 1);
//	PrintTotal(std::cout, P);
//	std::cout << std::endl;
//
//	TwoDayPackage TP(sender, receiver, 50, 1, 5);
//	PrintTotal(std::cout, TP);
//	std::cout << std::endl;
//
//	OvernightPackage OP(sender, receiver, 50, 1, 1);
//	PrintTotal(std::cout, OP);
//
//	system("pause");
//	return 0;
//}




//#include"TeacherCadre.h"
//int main(void)
//{
//	TeacherCadre TC("名字", 30, "男", "地址", "123456", "职称","职务",2000);
//	TC.show();
//	system("pause");
//	return 0;
//}


//#include<string>
//#include<iostream>
//class Teacher
//{
//public:
//	Teacher();
//	Teacher(int num,const std::string name,char sex):num(num),name(name),sex(sex){}
//	virtual ~Teacher()=default;
//	virtual void display(void)
//	{
//		std::cout << "num: " << num
//			<< "\nname: " << name
//			<< "\nsex: " << sex << std::endl;
//	}
//private:
//	int num;
//	std::string name;
//	char sex;
//};
//
//class BirthDate
//{
//public:
//	BirthDate()=default;
//	BirthDate(int y, int m, int d):year(y),month(m),day(d){}
//	~BirthDate()=default;
//	void display(void)
//	{
//		std::cout << "birthday: " << month
//			<< '/' << day
//			<< '/' << year << std::endl;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//
//class Professor:public Teacher
//{
//public:
//	Professor()=default;
//	Professor(int num, const std::string name, char sex,const BirthDate &birthday):Teacher(num,name,sex),birthday(birthday){}
//	virtual ~Professor()=default;
//	virtual void display(void)override
//	{
//		Teacher::display();
//		birthday.display();
//		//cout<<
//	}
//	void ChangeBirthDate(const BirthDate &new_birthday) { birthday = new_birthday; }
//private:
//	BirthDate birthday;
//};
//
//int main(void)
//{
//	
//	Professor prof1(123, "姓名", 'm', BirthDate(2010, 9, 9));
//	prof1.display();
//	prof1.ChangeBirthDate(BirthDate(2015, 1, 1));
//	prof1.display();
//
//	system("pause");
//	return 0;
//}


////1.cerr
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(void)
//{
//	double a, b, c; 
//	cout << "Input a,b,c: ";
//	cin >> a >> b >> c;
//	double s = (a + b + c) / 2;
//	if ((a + b > c) && (a + c > b) && (b + c > a))
//		cout << "area = " << sqrt(s*(s - a)*(s - b)*(s - c))<<std::endl;
//	else
//		cerr << "condition is not meet！" << std::endl;
//	system("pause");
//	return 0;
//}
//
//
////2.格式化输出
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main(void)
//{
//	double dvalue;
//	
//	cout << fixed << setprecision(2)<<right;
//	while (cin >> dvalue)
//	{
//		cout <<setw(20)<< dvalue << endl;
//	}
//	system("pause");
//	return 0;
//}
//
//
////3.'B'金字塔
//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//int main(void)
//{
//	unsigned i(-1),count(10);
//	while(++i<=count)
//	cout <<setw(count-i)<<setfill(' ')<<""<<string(i*2+1,'B')<< endl;
//	system("pause");
//	return 0;
//}


////2017年4月13日20:16:07
////1.文件流读写
//#include<iostream>
//#include<fstream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void Task1(void);
//void Task2(void);
//void Task3(void);
//int main(void)
//{
//	Task1();
//	Task2();
//	Task3();
//	system("pause");
//	return 0;
//}
//
//void Task1(void)
//{
//	ofstream file1("f1.dat");
//	ofstream file2("f2.dat");
//	if (file1)
//	{
//		for (int i = 0; i != 10; ++i)
//			file1 << i << ' ';
//	}
//	else
//	{
//		cerr << "open file1 fail!";
//		exit(1);
//	}
//
//	if (file2)
//	{
//		for (int i = 10; i != 0; --i)
//			file2 << i << ' ';
//		file1.close();
//		file2.close();
//	}
//	else
//	{
//		cerr << "open file2 fail!";
//		exit(1);
//	}
//}
//
//void Task2(void)
//{
//	ifstream file1("f1.dat");
//	ofstream file2("f2.dat", ofstream::app);
//	if (file1)
//	{
//		if (file2)
//		{
//			for (int i = 0; i != 10; ++i)
//			{
//				int tmp;
//				file1 >> tmp;
//				file2 << tmp << ' ';
//			}
//		}
//		else
//		{
//			cerr << "open file2 fail!";
//			exit(1);
//		}
//		file1.close();
//		file2.close();
//	}
//	else
//	{
//		cerr << "open file1 fail!";
//		exit(1);
//	}
//}
//void Task3(void)
//{
//	vector<int> ivec;
//	fstream file2("f2.dat", ifstream::in);
//	if (file2)
//	{
//		for (int i = 0; i != 20; ++i)
//		{
//			int tmp;
//			file2 >> tmp;
//			ivec.push_back(tmp);
//		}
//		sort(ivec.begin(), ivec.end());
//		file2.close();
//	}
//	else
//	{
//		cerr << "open file2 fail!";
//		exit(1);
//	}
//
//	file2.open("f2.dat", ofstream::out);
//	if (file2)
//	{
//		for (auto &i : ivec)
//			file2 << i << ' ';
//		file2.close();
//	}
//	else
//	{
//		cerr << "open file2 fail!";
//		exit(1);
//	}
//}



////2017年4月13日20:59:55
////2.
//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//struct Worker
//{
//	//string id;
//	//string name;
//	//string 数据成员长度不一,读取长度不同可能出错
//	int id;
//	char name[10];
//	int age;
//	int wages;
//};
//void Task1(void)
//{
//	constexpr int count(5);
//	Worker workers[count] = { { 1001,"name1",20,2000 },{ 1002,"name2",30,3000 },{ 1003,"name3",40,4000 },{ 1004,"name4",50,5000 },{ 1005,"name5",60,6000 } };
//	ofstream file("workers infomation");
//	if (file)
//	{
//		for (int i = 0; i != count; ++i)
//			file.write((char*)&workers[i], sizeof(workers[i]));
//
//		file.close();
//	}
//	else
//	{
//		cerr << "workers infomation file open fail!" << endl;
//		exit(1);
//	}
//}
//void Task2(void)
//{
//	constexpr int count(2);
//	Worker workers[count];
//	ofstream file("workers infomation", ofstream::app);
//	if (file)
//	{
//		for (int i = 0; i != count; ++i)
//		{
//			cout << "Input new workers information:\n";
//			cout << "ID: " << ends; cin >> workers[i].id;
//			cout << "name: " << ends; cin >> workers[i].name;
//			cout << "age: " << ends; cin >> workers[i].age;
//			cout << "wages: " << ends; cin >> workers[i].wages;
//		}
//		for (int i = 0; i != count; ++i)
//			file.write((char*)&workers[i], sizeof(workers[i]));
//
//		file.close();
//	}
//	else
//	{
//		cerr << "workers infomation file open fail!" << endl;
//		exit(1);
//	}
//}
//void Task3(void)
//{
//	constexpr int count(7);
//	Worker workers[count];
//	ifstream file("workers infomation");
//
//	if (file)
//	{
//		for (int i = 0; i != count; ++i)
//		{
//			if (!file.eof())
//				file.read((char*)&workers[i], sizeof(workers[i]));
//		}
//		cout << "workers information:\n" << endl;
//		for (int i = 0; i != count; ++i)
//		{
//			cout << " ID: " << workers[i].id;
//			cout << " name: " << workers[i].name;
//			cout << " age: " << workers[i].age;
//			cout << " wages: " << workers[i].wages << endl;
//		}
//		file.close();
//	}
//	else
//	{
//		cerr << "workers infomation file open fail!" << endl;
//		exit(1);
//	}
//}
//void Task4(void)
//{
//	constexpr int count(7);
//	Worker workers[count];
//	ifstream file("workers infomation");
//
//	if (file)
//	{
//		for (int i = 0; i != count; ++i)
//		{
//			if (!file.eof())
//				file.read((char*)&workers[i], sizeof(workers[i]));
//		}
//		file.close();
//	}
//	else
//	{
//		cerr << "workers infomation file open fail!" << endl;
//		exit(1);
//	}
//
//	while (true)
//	{
//		int id;
//		cout << "Find worker by id:(input '0' to quit)" << ends;
//		cin >> id;
//		if (id == 0)
//			break;
//		else
//		{
//			bool flag(false);
//			for (int i = 0; i != count; ++i)
//			{
//				if (id == workers[i].id)
//				{
//					cout << "Found!" << endl;
//					cout << " ID: " << workers[i].id;
//					cout << " name: " << workers[i].name;
//					cout << " age: " << workers[i].age;
//					cout << " wages: " << workers[i].wages << '\n' << endl;
//					flag = true;
//					break;
//				}
//			}
//			if (!flag)
//				cout << "No found." << endl;
//		}
//	}
//}
//int main(void)
//{
//	Task1();
//	Task2();
//	Task3();
//	Task4();
//	system("pause");
//	return 0;
//}





////2017年4月13日23:28:11
////3.string流读写
//#include<iostream>
//#include<sstream>
//using namespace std;
//struct student
//{
//	int num;
//	char name[20];
//	float score;
//};
//int main(void)
//{
//	student stud[6] = { 1001,"Li",78,1002,"Wang",89.5,1004,"Fun",90 };
//
//	stringstream strstream;
//	for (int i = 0; i != 3; ++i)
//		strstream << stud[i].num << ' ' << stud[i].name << ' ' << stud[i].score << endl;
//
//	for (int i = 3; i != 6; ++i)
//		strstream >> stud[i].num >> stud[i].name >> stud[i].score;
//
//	for (int i = 3; i != 6; ++i)
//		cout << stud[i].num << ' ' << stud[i].name << ' ' << stud[i].score << endl;
//	system("pause");
//	return 0;
//}

////2017年4月15日00:48:31
////二维数组鞍点
//#include<iostream>
//using namespace std;
//bool IsCowMax(int **p, int col, int i, int j)
//{
//	for (int k = 0; k != col; ++k)
//	{
//		if (p[i][k] > p[i][j])
//			return false;
//	}
//	return true;
//}
//bool IsColMin(int **p, int cow, int i, int j)
//{
//	for (int k = 0; k != cow; ++k)
//	{
//		if (p[k][j] < p[i][j])
//			return false;
//	}
//	return true;
//}
//int** NewTwoDimensionalArray(int cow, int col)
//{
//	int **p = new int*[cow];
//	for (int i = 0; i != cow; ++i)
//		p[i] = new int[col];
//
//	return p;
//}
//int main(void)
//{
//	int cow, col;
//	cin >> cow >> col;
//	int **p = NewTwoDimensionalArray(cow, col);
//	for (int i = 0; i != cow; ++i)
//		for (int j = 0; j != col; ++j)
//			cin >> p[i][j];
//
//	//for (int i = 0; i != cow; ++i)
//	//{
//	//	for (int j = 0; j != col; ++j)
//	//		cout << p[i][j] << ' ';
//	//	cout << endl;
//	//}
//
//	bool flag(false);
//	for (int i = 0; i != cow; ++i)
//	{
//		for (int j = 0; j != col; ++j)
//		{
//			if (IsCowMax(p, col, i, j) && IsColMin(p, cow, i, j))
//			{
//				cout << p[i][j];
//				//goto 找到鞍点;
//				flag = true;
//			}
//		}
//	}
//	if (!flag)
//		cout << "No solution" << endl;
////找到鞍点:
//	system("pause");
//	return 0;
//}


////test
//#include<iostream>
//#include"Complex.h"
//using namespace std;
//int main(void)
//{
//	Complex a(1, 1), b(2, 2),c;
//	c = a + b;
//	c.Print();
//	c = a - b;
//	c.Print();
//	c = a * b;
//	c.Print();
//	c = a / b;
//	c.Print();
//
//	system("pause");
//	return 0;
//}


#include<iostream>
#include"Set.h"
using namespace std;
int main(void)
{
	std::cout << "hello world\n";
	Set s1(vector<int>{1, 5, 6, 3, 3, 4, 7, 5, 2, 1, 9, 3, 6, 4, 2, 1});
	Set s2(vector<int>{1, 2, 3, 8,9});
	s1.Display();
	s2.Display();
	(s1 + s2).Display();
	(s1-s2).Display();
	(s1 * s2).Display();

	system("pause");
	return 0;
}




//#include<iostream>
//int main(void)
//{
//	std::cout << "hello world\n";
//
//	system("pause");
//	return 0;
//}