#include<iostream>
#include<time.h>
using namespace std;
//class Date {
//public:
//	  //如果已经定义构造函数了，编译器就不会再去生成
//
//  /*  Date()
//	 { 
//		cout<<"Date()"<<endl;
//	 }
//  */
//	Date(int year, int month, int day) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//void testConstrust() {
//	Date d1;
//	Date d2(2020, 1, 11);
//}
//int main() {
//	testConstrust();
//	return 0;
//}
//默认构造：（只能有一个）
		  /*1.无参构造
		  2.编译器默认生成的
		  3.全缺省的构造函数*/
//class Date {
//public:
//    Date()
//	 { 
//		cout<<"Date()"<<endl;
//	 }
//  
//	Date(int year, int month, int day) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//void test() {
//	//构造函数在实例化时编译器自动调用，整个生命周期只调用一次。
//	Date d1;//无参构造不需要加括号
//	Date d2(2020, 1, 11);//有参构造
//	Date d3();//变成了调用返回值为Date函数d3
//}
//class Date {
//public:
//	Date(int a)
//	{
//		cout << "Date()" << endl;
//	}
//	//一般写一个全缺省的构造函数
//	Date(int year = 2020, int month = 1, int day = 11) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//void test() {
//	Date d1;
//}
//class String {
//public:
//	String(char* str)
//	{
//		_str = (char*)malloc(strlen(str) + 1);//申请sizeof(str)大小的空间
//		strcpy(_str, str);
//	}
//	//如果有资源，显示定义析构，完成资源清理，否则会有内存泄漏
//	//编译器归还给系统栈上的空间（销毁对象），而malloc申请的空间在堆上，需要手动归还给系统
//	~String()
//	{
//		if (_str) {
//			free(_str);//释放空间
//			_str = nullptr;//置为空指针
//		}
//	}
//private:
//	char* _str;
//};
//class String
//{
//public:
//	String(char* str = nullptr)
//		{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//		}
//		~String()
//	{
//		if (_str) {
//			free(_str);
//			_str = nullptr;
//			cout << "~String" << endl;
//		}
//	}
//private:
//	char* _str;
//};
//void test() {
//	String p;
//}
//class Date
//{	
//public:
//	//默认构造函数
//	Date(int year = 2020, int month = 1,int day = 11) {
//		cout << "Date()" << endl;
//	}
//	//拷贝构造函数
//	Date(const Date& date) {//需要用常饮用来接收
//		_year = date._year;
//		_month = date._day;
//		_day = date._day;
//	}
//	~Date() {
//		cout << "~Date" << endl;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//int main() {
//	Date d2(1,2,3);
//	//拷贝构造，只调用一次
//	Date d3(Date(2020,1,11));//传如匿名临时变量
//	return 0;
//}
//class Date
//{
//public:
//	//默认构造函数
//	Date(int year = 2020, int month = 1, int day = 11) {
//		cout << "Date()" << endl;
//	}
//	//拷贝构造函数
//	Date(const Date date) {
//		_year = date._year;
//		_month = date._day;
//		_day = date._day;
//	}
//	~Date() {
//		cout << "~Date" << endl;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//int main() {
//	Date d2(1, 2, 3);
//	Date d3(d2);
//	return 0;
//}
////程序会报错
//class String {
//public:   
//	String(const char* str = "jack") { 
//		_str = (char*)malloc(strlen(str) + 1);       
//		strcpy(_str, str); 
//}
//	//申请资源需要深拷贝，需要自己写拷贝构造函数
//	~String() { 
//	cout << "~String()" << endl;        
//	free(_str); 
//	} 
//private:  
//	char* _str;
//};
//int main() { 
//	String s1("hello");
//	String s2(s1);
//}
//判断两个类是否相同

 // bool operator==(Date* this, const Date& d2) 
 // 这里需要注意的是，左操作数是this指向的调用函数的对象

//class Date {
//public:
//	int _year;
//	int _month;
//	int _day;
//	Date(int year = 2020, int month = 1, int day = 12) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//bool Equal(Date* this,const Date& d2)//this指向当对象的成员和传入的对象成员是否相同
//	bool Equal(const Date& d2) {
//		return _year == d2._year &&
//			_month == d2._month &&
//			_day == d2._day;
//	}
//	
//};
//int main() {
//	Date d2(2019, 10);
//	Date d3(d2);
//	Date d4 = d3;
//	cout << d3.Equal(d4) << endl;
//}
//class Date {
//public:
//	int _year;
//	int _month;
//	int _day;
//	Date(int year = 2020, int month = 1, int day = 12) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//             Date* this
//	bool operator==(const Date& d2) {
//		return _year == d2._year &&
//			_month == d2._month &&
//			_day == d2._day;
//	}
//
//};
//int main() {
//	Date d2(2019, 10);
//	Date d3(d2);
//	/*int a = 1;
//	int b = 2;
//	cout << (a == b) << endl;*/
//	//d3 是this指针指向的对象
//	d3.operator==(d2);
//	d3 == d2;
//}