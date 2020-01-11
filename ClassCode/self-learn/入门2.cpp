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
class A {
	int a;
};
class B {
	int a;
	void fun();
};
class C {

};
int main() {
	A a;
	B b;
	C c;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
}
