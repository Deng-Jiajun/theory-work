//一、3
//#include<iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//int main(void)
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int f(int x, int y, int z);
//	c = f(a, b, c);
//	cout << c << endl;
//	system("pause");
//	return 0;
//}
//
//int f(int x, int y, int z)
//{
//	int m;
//	m = x < y ? x : y;
//	m = m < z ? m : z;
//	return m;
//}

//一、6
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	vector<int> ivec;
//	int ival;
//	while (cin>>ival)
//	{
//		ivec.push_back(ival);
//	}
//	sort(ivec.begin(), ivec.end());
//	for (const auto &i : ivec)
//	{
//		cout << i << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//一、7
/*求2个或3个正整数中的最大数，用带有默认参数的函数实现*/
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

//一、8
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	unsigned a, b;
//	void OrderPrint(const unsigned &a, const unsigned &b);
//	while(cin>>a>>b)
//	{ 
//		OrderPrint(a, b);
//	}
//	system("pause");
//	return 0;
//}
//
//void OrderPrint(const unsigned &a, const unsigned &b)
//{
//	if (a > b)
//		cout << a <<" "<< b << endl;
//	else
//		cout << b << " " << a << endl;
//}

//一、9
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	unsigned u1, u2, u3;
//	void Sort(unsigned &a, unsigned &b, unsigned &c);
//	while (cin >> u1 >> u2 >> u3)
//	{
//		Sort(u1, u2, u3);
//		cout << u1 <<" "<< u2<<" " << u3 << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//
//void Sort(unsigned &a, unsigned &b, unsigned &c)
//{
//	unsigned tmp;
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//}


//一、10
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


//一、11
///*逆序输出字符串*/
//#include<string>
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	string str;
//	while (cin>>str)
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


//一、12
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	string word;
//	vector<string> svec;
//
//	/*5次*/
//	/*unsigned count(5);
//	while (count--)*/
//
//	while(cin >> word)
//	{
//		svec.push_back(word);
//	}
//
//	//sort(svec.begin(), svec.end());
//	void sort(vector<string> &svec);
//	sort(svec);
//	for (auto &s : svec)
//	{
//		cout << s << endl;
//	}
//	system("pause");
//	return 0;
//}
//
//void sort(vector<string> &svec)
//{
//	for (auto &strout : svec)
//	{
//		for (auto &strin : svec)
//		{
//			if (strout < strin)
//			{
//				string tmp;
//				tmp = strout;
//				strout = strin;
//				strin = tmp;
//			}
//		}
//	}
//}

//一、13，14
//#include<iostream>
//#include<vector>
//using namespace std;
//
//template<typename T>
//void my_swap(T &a, T &b)
//{
//	T tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
////void mysort(vector<int> &ivec)
////{
////	for (auto &out : ivec)	
////		for(auto &in:ivec)
////			if (out < in)
////				my_swap(out, in);
////}
////void mysort(vector<float> &ivec)
////{
////	for (auto &out : ivec)
////		for (auto &in : ivec)
////			if (out < in)
////				my_swap(out, in);
////}
////void mysort(vector<double> &ivec)
////{
////	for (auto &out : ivec)
////		for (auto &in : ivec)
////			if (out < in)
////				my_swap(out, in);
////}
//template<typename T>
//void mysort(vector<T> &ivec)
//{
//	for (auto &out : ivec)
//		for (auto &in : ivec)
//			if (out < in)
//				my_swap(out, in);
//}
//int main(void)
//{
//	vector<int> ivec{ 1,2,4,7,1,8,2,35,75,1,57,32,34,26,23 };
//	vector<double> dvec{ 214.24,241.2,2,56,2,36,3.352,325.325,124.2,35,35 };
//	vector<float> fvec{ 214.24f,241.2f,2,56,2,36,3.352f,325.325f,124.2f,35,35 ,214,214,124,1 };
//	mysort(ivec);
//	mysort(fvec);
//	mysort(dvec);
//	for (auto &i : ivec)
//		cout << i << " ";
//	cout << endl;
//	for (auto &i : fvec)
//	cout << i << " ";
//		cout << endl;
//	for (auto &i : dvec)
//		cout << i << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



//二、1
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




//二、3
//#include<iostream>
//using namespace std;
//class Time
//{
//
//public:
// void set_time(void);
// void show_time(void);
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//	void Time::set_time(void)
//	{
//		cin >> hour >> minute >> sec;
//	}
//
//	void Time::show_time(void)
//	{
//		cout << hour << minute << sec;
//	}
//Time t;
//int main(void)
//{
//	t.set_time();
//	t.show_time();
//	system("pause");
//	return 0;
//}



//二、6
//#include<iostream>
//#include<string>
//using namespace std;
//class cuboid;
//class cuboid
//{
//public:
//	friend void read(const istream &is, cuboid &item);
//	cuboid(double l, double w, double h) :length(l), width(w), height(h), volume(l*w*h) {}
//	cuboid(istream &is)
//	{
//		is >> length >> width >> height;
//		volume = length*width*height;
//	}
//
//	void print (ostream &os)
//	{
//		os << length << " " << width << " " << height << " " << volume << endl;
//	}
//private:
//	double length, width, height, volume;
//
//};
//
//
//int main(void)
//{
//	cuboid cub(cin);
//	cub.print(cout);
//	system("pause");
//	return 0;
//}