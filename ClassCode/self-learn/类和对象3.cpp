#include<iostream>
#include<time.h>
using namespace std;
//class Date
//{
//public:
//	Date(int year, int month, int day) 
//	{
//		_year = year;
//		_month = month;
//		_day = day; 
//	}
//
//private: 
//	int _year;
//	int _month;
//	int _day;
//}

//class Date {
//private:
//	int _year;
//	int _month;
//	int _day;
//public:
//	void operator<<(ostream& _cout)
//	{
//		_cout << this->_year << this->_month << this->_day << endl;
//	}
//};
//int main() {
//	Date d;
//	//this指针在左侧，所以操作对象应该在左侧
//	d.operator<<(cout);
//	d << cout;
//}
//class Date {
//	//破坏了封装，数据安全有风险
//public:
//	int _year;
//	int _month;
//	int _day;
//};
//void operator<<(ostream& _cout,const Date& d)
//{
//	_cout << d._year <<d._month << d._day << endl;
//}
//int main() {
//	Date d;
//	operator<<(cout, d);
//	cout << d;
//}
//友元函数
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend iostream& operator>>(iostream& _cin, Date& d);
//public:
//	Date(int year = 2020, int month = 1, int day = 12)
//	
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//	
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//istream& operator>>(iostream& _cin, Date& d)
//{
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//	return _cin;
//}
//int main() {
//	Date d;
//	cin >> d;
//	cout << d << endl;//连续的输出需要返回值
//	return 0;
//}
//友元类
//class Date;//前置声明
//class Time
//{
//	friend class Date;//声明日期类为时间的友元，则在日期类中就直接访问Time类中的私有成员变量
//public:
//	Time(int hour = 1,int minute = 1,int second = 1)
//		:_hour(hour)
//		,_minute(minute)
//		,_second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//public:
//	Date(int year = 2020, int month = 1, int day = 12)
//		:_year(year)
//		, _month(month)
//		,_day(day)
//	{}
//		void SetTimeofDate(int hour, int minute, int second)
//		{
//			//直接访问时间类私有成员变量
//			_t._hour = hour;
//			_t._minute = minute;
//			_t._second = second;
//		}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//class Date
//{
//public:
//	Date(int year,int month,int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B(int a,int ref)
//		:__aobj(a)
//		,_ref(ref)
//		,_n(10)
//	{}
//private:
//	A _aobj;
//	int& _ref;
//	const int _n;
//};
//class B
//{
//public:
//	B(int b = 0)
//		:_b(b)
//	{}
//	int _b;
//};
//class A
//{
//public:
//	void Print()
//	{
//		cout << a << endl;
//		cout << b._b << endl;
//		cout << p << endl;
//	}
//private:
//	//非静态成员变量可以在成员声明时给缺省值
//	int a = 10;
//	B b = 20;
//	int* p = (int*)malloc(4);
//	static int n;
//};
//int A::n = 10;
//int main() {
//	A a;
//	a.Print();
//	return 0;
//}
//class F;
//class E
//{
//	friend class F;
//	int _e = 10;
//	static int _i;
//public:
//	class G
//	{
//	public:
//		void Display(const E& e)
//		{
//			cout << e._e << endl;
//			//外部类的静态成员内部类可以直接访问
//			cout << _i << endl;
//		}
//	};
//};
//class F
//{
//public:
//	void Display(const E& e)
//	{
//		cout << e._e << endl;
//		cout << E::_i  << endl;
//	}
//};
//int main() {
//	E e;
//	F f;
//	f.Display(e);//F为E的友元类
//	E::G g;
//	g.Display(e);//G为E的内部类
//	return 0;
//}

