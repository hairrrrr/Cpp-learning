#include<iostream>
#include<time.h>
using namespace std;
//class Student2 {
//public:	//public,private,protected:只限制类外
//	//成员函数
//	void SetStudentIofo(const char* name, const char* gender, int age) {
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudentInfo() {
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//private://成员在类外不可见
//	//成员变量：在类内具有全局属性，任何地方都可以访问到
//	//			和访问符号无关，定义位置也关系
//	char _name[20];
//	char _gender[3];
//protected:
//	int age;
//};
//class Person 
//{ public: 
//	void PrintPersonInfo(); 
//	private: 
//		char _name[20]; 
//		char _gender[3];
//		int  _age; 
//}; // 这里需要指定PrintPersonInfo是属于Person这个类域 
//void Person::PrintPersonInfo() {  
//	cout<<_name<<" "_gender<<" "<<_age<<endl; 
//}
//class A {
//	int a;
//};
//class B {
//	int a;
//	void fun();
//};
//class C {
//
//};
//int main() {
//	//类对象的大小和结构体大小计算规则相同
//	A a;//对象中只存放成员变量
//	B b;//成员函数不放在对象中
//	C c;//空类大小为1
//	cout << sizeof(a) << endl;
//	cout << sizeof(b) << endl;
//	cout << sizeof(c) << endl;
//}
////输出
////4
////4
////1
//#pragma pack(1)//修改默对齐数
//vs 默认对齐数为8
//class A {
//	int a;//从地址偏移为0处开始即“1”
//	char b;//8~1 最小值为1 偏移4的整数倍 从地址为“5”开始存储
//	double c;//8~8 最小值为8 偏移8的整数倍 从地址为“9”开始存贮 
//	//整体占16个字节 但是整个结构体要继续和8对齐
//	//结构体大小为最大偏移数的整数倍 16刚好
//};
//int main() {
//	A a;
//	cout << sizeof(a) << endl;
//	return 0;
//}
//输出
//16
//class A {
//	char a;//地址1 大小1
//	double b;//地址9 大小 8
//	int c;//地址17 大小4
//	//上述加起来大小为20 补齐至8的倍数--最终大小为24
//};
//int main() {
//	A a;
//	cout << sizeof(a) << endl;
//	return 0;
//}
//输出
//24
//#pragma pack(1)
//class A {
//	char a;
//	double b;	
//	int c;
//};
//int main() {
//	A a;
//	cout << sizeof(a) << endl;
//	return 0;
//}
//输出
//13
//class A {
//	char a;
//	double b;
//	int c;
//	class B {
//		char a;
//		double b;
//		int c;
//	};
//};
//以下我们标注的都是每个成员变量的在内存中的起始位置，默认第一个的地址为1
//class A {
//	char a;//1
//	double b;//9
//	int c;//17
//	class B {
//		char a;//25
//		double b;//33
//		int c;//45
//	};
//	B d;
//};
//内存为48个字节
//注意每一个成员变量都要内存对齐
//class A {
//public:
//	char a;
//	double b;
//	int c;//17-20
//	class B {
//	public:
//		char a;//25-25
//		double b;//33
//		int c;
//	};
//	B d;
//};
//int main() {
//	//求B中的成员变量b距离起始位置偏移的位置
//	A a;
//	cout << ((char*) & (a.d.a) - (char*)&a)<< endl;
//	return 0;
//}
//值得一提得是，建议强制类型转换用char* 
//用其他的不一定会是整数
//输出
//32（33-1）
//class Date {
//public:/*
//	   this指针：类类型*const
//		指向当前函数调用对象的指针-->谁调用指向谁
//		作为成员函数的第一个参数
//		只存在于成员函数中
//	   */
//	//void SetDate(Date* const this,int year,int month,int day)
//	void SetDate(int year, int month, int day) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Display() {
//		cout <<_year << "-" <<_month << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void testDate() {
//	Date d1;//实例化
//
//	//this指针 -->d1
//	d1.SetDate(2020, 1, 10);
//	d1.Display();
//
//	Date d2;
//	//this指针 -->d2
//	d2.SetDate(2020, 1, 11);
//	d2.Display();
//}
//int main() {
//	testDate();
//	return 0;
//}
//class A {
//public:
//	void PrintA() { 
//	cout << _a << endl; 
//}
//void Show() { 
//	cout << "Show()" << endl;
//} 
//private:    
//	int _a;
//};
//int main() {
//	A* p = NULL; 
////	p->PrintA(); 
//	p->Show();
//}
