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
//namespace �����ռ�
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
//ȱʡ����
//1.��ȱʡ���������������һ�θ��������ܼ���Ÿ�
//2.ȱʡ���������ں��������Ͷ�����ͬʱ����
//ȫȱʡ����
//void TestFun(int a = 10, int b = 20) {
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//int main() {
//	TestFun();10  20
//	TestFun(5);5   20
//}
//��ȱʡ������
//void test(int a ,int b = 10, int c = 20) {
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main() {
//	test(5);
//}
//�������أ��������������ͻ�˳�򣩱��벻ͬ
//extern "C"
//����
//1.����ʱ�����ʼ��
//2.һ�����������ж������
//3.����һ������һ��ʵ�壬������������
//��ʽ������& ���ñ��������������� = ����ʵ�壻
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
//	//Ƕ��
////	N1::N2::b = 5;
//	b = 5;
//}
//��������ѧ����
#include<iostream>
using namespace std;
//��һƪ��������
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
//�����
//100 0
//1 2
//void fun(int a, int b = 0) {
//	cout << a <<' '<< b << endl;
//}
//int main() {
//	fun(1, 2);
//	fun(1);
//}
//�����
//1 2
//1 0
//��ȱʡ������ȱʡֵ���ҵ���������ֵ
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
////��
//void fun(int a = 0);
//void fun(int a) {//��ʱ�����ڶ������ٴζ������ȱʡ����
//	;
//}
//�������Ͳ�ͬ
//int add(int a, int b) {
//	return a + b;
//}
//double add(double a, double b) {
//	return a + b;
//}
//int main() {
//	cout << add(1, 2) << ' ' << add(1.2, 2.0) << endl;
//}
//���
//3 3.2
//����������ͬ
//int add(int a, int b, int c) {
//	return a + b + c;
//}
//int add(int a, int b) {
//	return a + b;
//}
//int main() {
//	cout << add(1, 2, 3) << ' ' << add(1, 2) << endl;
//}
//���
//6 3
//��������˳��ͬ
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
//���
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
////���
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
//	cout << a << endl;//�ı����ra��ֵҲ����a��ֵ
//}
////���
////100
////1000
////10000
////˵��һ�����������ж������
//int main() {
//	testRef();
//	return 0;
//}
//void testRef() {
//	int c = 10;
//	const int& rc = 10;//ָ����
//	const int d = 5;
//	const int& rd = d;
//	float f = 2.0;
//	const int& rf = f;
//	//��������ֵ������ʱ�������ʽ����ת����2.0 ת��Ϊ 2��
//	//���2��һ����ʱ���������޷����޸ģ���������г��������ʣ������Ҫ����constָ���������
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
////���
////1 2
////֤����������ָ��ͬ���Ĺ���
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
//���
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
