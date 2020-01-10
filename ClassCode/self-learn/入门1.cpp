#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main() {
//	int a;
//	double b;
//	char c;
//	cin >> a >> b >> c;
//	cout << a << " " << b << " " << c<<endl;
//	return 0;
//}
//namespace 命名空间
//namespace N1 {
//	int a = 10;
//	int b = 5;
//	namespace N2{
//		int a = 5;
//	}
//}
////using namespace N1;//a = 10
////using  N1::N2::a;//a = 5
////using namespace N1::N2;//a = 5
//int main() {
//	cout << "a = " << a << endl;
//}
//缺省参数
//1.半缺省参数必须从右往左一次给出，不能间隔着给
//2.缺省参数不能在函数声明和定义中同时出现
//全缺省参数
//void TestFun(int a = 10, int b = 20) {
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//int main() {
//	TestFun();10  20
//	TestFun(5);5   20
//}
//半缺省参数：
//void test(int a ,int b = 10, int c = 20) {
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main() {
//	test(5);
//}
//函数重载（参数个数，类型或顺序）必须不同
//extern "C"
//引用
//1.定义时必须初始化
//2.一个变量可以有多个引用
//3.引用一旦引用一个实体，不能引用其他
//格式：类型& 引用变量名（对象名） = 引用实体；
//int a = 10;
//int& ra = a;

//namespace N1 {
//	int b;
//	int sub(int a, int b) {
//		return a - b;
//	}
//	namespace N2 {
//		int b;
//	}
//}
////using N1::b;
////using N1::sub;
////using N1::N2::b;
//using namespace N1;
//void test1() {
//	
////	N1::b = 10;
////	N1::sub(10, 5);
//	b = 10;
//	sub(10,5);
//	//嵌套
////	N1::N2::b = 5;
//	b = 5;
//}
//以上是自学代码
#include<iostream>
using namespace std;
//第一篇博客内容
//void testIO() {
//	//printf("!");
//	int a = 0;
//	double b = 0;
//	//std::cin >> a;
//	//std::cin >> b;
//	//std::cout << a;
//	//std::cout << '\n';
//	//std::cout << b;
//	cin >> a >> b;
//	cout << a << ' ' << b << endl;
//}
//int main() {
//	testIO();
//	return 0;
//}
//void fun(int a = 100, int b = 0) {
//	cout << a << ' ' << b << endl;
//}
//int main() {
//	fun();
//	fun(1, 2);
//	return 0;
//}
//输出：
//100 0
//1 2
//void fun(int a, int b = 0) {
//	cout << a <<' '<< b << endl;
//}
//int main() {
//	fun(1, 2);
//	fun(1);
//}
//输出：
//1 2
//1 0
//半缺省参数：缺省值从右到左连续赋值
//void fun(int a, int b = 0, int c = 0) {
//	cout << a << ' ' << b << ' ' << c << endl;
//}
//int main() {
//	fun(1, 2, 3);
//	fun(1, 2);
//	fun(1);
//}
//void fun(int a = 5) {
//	;
//}
////或
//void fun(int a = 0);
//void fun(int a) {//这时不能在定义中再次定义这个缺省参数
//	;
//}
//参数类型不同
//int add(int a, int b) {
//	return a + b;
//}
//double add(double a, double b) {
//	return a + b;
//}
//int main() {
//	cout << add(1, 2) << ' ' << add(1.2, 2.0) << endl;
//}
//输出
//3 3.2
//参数个数不同
//int add(int a, int b, int c) {
//	return a + b + c;
//}
//int add(int a, int b) {
//	return a + b;
//}
//int main() {
//	cout << add(1, 2, 3) << ' ' << add(1, 2) << endl;
//}
//输出
//6 3
//参数类型顺序不同
//void Print(char c, int a) {
//	cout << c << ' ' << a << endl;
//}
//void Print(int a, char c) {
//	cout << a <<' '<< c << endl;
//}
//int main() {
//	Print('a', 1);
//	Print(1, 'a');	
//}
//输出
//a 1
//1 a
//extern "C" {
//	int sub(float a, int b);
//}
////int sub(float a, int b);
//int main() {
//	sub(10, 5);
//	return 0;
//}
//void testRef() {
//	int a = 10;
//	int copy = a;
//	int& ra = a;
//	ra = 100;
//	copy = 1000;
//	cout << a << endl;
//}
////输出
////100
//int main() {
//	testRef();
//}
//void testRef() {
//	int a = 10;
//	int b = 20;
//	int& ra = a;
//	int& rra = a;
//	int& rrra = a;
//	ra = 100;
//	cout << a << endl;
//	rra = 1000;
//	cout << a << endl;
//	rrra = 10000;
//	cout << a << endl;
//	ra = b;
//	cout << a << endl;//改变的是ra的值也就是a的值
//}
////输出
////100
////1000
////10000
////说明一个变量可以有多个引用
//int main() {
//	testRef();
//	return 0;
//}
//void testRef() {
//	int c = 10;
//	const int& rc = 10;//指向常量
//	const int d = 5;
//	const int& rd = d;
//	float f = 2.0;
//	const int& rf = f;
//	//浮点数赋值给整形时会进行隐式类型转换，2.0 转化为 2，
//	//这个2是一个临时变量，它无法被修改，因此它具有常量的性质，因此需要加上const指向这个常量
//}
//int main() {
//	testRef();
//	return 0;
//}
//void Swap(int* a, int* b) {
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void Swap(int& a, int& b) {
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//int main() {
//	int a = 1;
//	int b = 2;
//	Swap(&a, &b);
//	Swap(a, b);
//	printf("%d %d", a, b);
//	return 0;
//}
////输出
////1 2
////证明引用有与指针同样的功能
//int& SelfAdd(int& a) {
//	a++;
//	return a;
//}
//int main() {
//	int a = 0;
//	int& ra = SelfAdd(a);
//	cout << a << endl;
//	return 0;
//}
//输出
//1
//int& SelfAdd(int& a) {
//	a++;
//	return a;
//}
//int main() {
//	int a = 0;
//	int& ra = SelfAdd(a);
//	cout << a << endl;
//	return 0;
//}
//int& add(int& a, int& b,int& c) {
//	c = a + b;
//	return c;
//}
//int main() {
//	int a = 2;
//	int b = 3;
//	int c = 0;
//	int& sum = add(a, b,c);
//	cout << a << ' + ' << b << ' = ' << sum << endl;
//}
//int& add(int& a, int& b) {
//	return (a+b);
//}
//int main() {
//	int a = 2;
//	int b = 3;
//	int& sum = add(a, b);
//	cout << a << ' + ' << b << ' = ' << sum << endl;
//}
