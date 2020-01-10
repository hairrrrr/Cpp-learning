#include<iostream>
#include<time.h>
using namespace std;
//struct A {
//	int arr[100000];
//};
//void testValue(A a) {
//
//}
//void testRef(A& ra) {
//
//}
//int main(){
//	A a;
//	int i = 0;
//	size_t begin,end;
//	begin = clock();
//	//因为程序跑的太快，所以我们用循环来增加他们跑的时间方便我们更具体的观察比较
//	for(i = 0;i<1000000;i++)
//		testValue(a);
//	end = clock();
//	cout << "testValue :" << (end - begin)/CLOCKS_PER_SEC << endl;
//	begin = clock();
//	for (i = 0; i < 1000000; i++)
//		testRef(a);
//	end = clock();
//	cout << "testRef :" << (end - begin)/ CLOCKS_PER_SEC << endl;
//	//(end - begin)/ CLOCKS_PER_SEC 计算程序运行的秒数
//}
////输出
////testValue:25
////testRef : 0
//#define Fun(x,y) x*y
//#define N 10
//int Mul(int x, int y) {
//	return x*y;
//}
//int main() {
//	cout << Fun(2, 3) << endl;
//	cout << 2 * 3 << endl;
//	cout << Mul(2, 3) << endl;//call Mull(首行地址)
//	return 0;
//}
//define定义的宏是不需要调用的，而函数Mul需要调用
//inline int Mul(int x, int y) {
//	return x * y;
//}
//int main() {
//	Mul(2, 3);
//	//cout << Mul(2, 3) << endl;
//	return 0;
//}
//#define Fun(x,y) x*y
//int main() {
//	cout << Fun(2 + 3, 4) << endl;
//	return 0;
//}
//输出
//14
//#define Fun(x,y) (x)*(y)
//int main() {
//	cout << Fun(2 + 3, 4) << endl;
//	return 0;
//}
////输出
////20
//int main() {
//	auto a = 1;
//	auto b = 'c';
//	auto c = 1.1;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//}
//输出
//int
//char
//double
//int main() {
//	auto a = 3;
//	auto p = &a;
//	auto* ptr = &a;//指针这两种写法都行
//	auto ra = a;
//	auto& rra = a;
//	cout << typeid(p).name()<< endl;
//	cout << typeid(ptr).name() << endl;
//	cout << typeid(rra).name() << endl;
//	cout << typeid(ra).name() << endl;
//}
////输出
////int*
////int*
////int
////int
//int main() {
//	auto a = 3, b = 2;
//	auto c = 3, d = 2.2;
//}
//int main() {
//	auto arr[3] = { 1,2,3 };
//}
//void test(auto a) {
//
//}
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	for (int e : arr)
//		cout << e << endl;//数组范围是确定的
//	return 0;
//}
////输出
////1
////2
////3
////4
////5
//void test(int arr[]) {
//	for (int e : arr)
//		cout << e << endl;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	test(arr);
//	return 0;
//}
//int main() {
//	int* a = nullptr;
//	int b = nullptr;
//}
//int main() {
//	int* ptr = nullptr;
//	cout << typeid(nullptr).name() << endl;
//	cout << typeid(ptr).name() << endl;
//}
////输出：
////std::nullptr_t
////int*
