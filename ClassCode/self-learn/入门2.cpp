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
//	//��Ϊ�����ܵ�̫�죬����������ѭ�������������ܵ�ʱ�䷽�����Ǹ�����Ĺ۲�Ƚ�
//	for(i = 0;i<1000000;i++)
//		testValue(a);
//	end = clock();
//	cout << "testValue :" << (end - begin)/CLOCKS_PER_SEC << endl;
//	begin = clock();
//	for (i = 0; i < 1000000; i++)
//		testRef(a);
//	end = clock();
//	cout << "testRef :" << (end - begin)/ CLOCKS_PER_SEC << endl;
//	//(end - begin)/ CLOCKS_PER_SEC ����������е�����
//}
////���
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
//	cout << Mul(2, 3) << endl;//call Mull(���е�ַ)
//	return 0;
//}
//define����ĺ��ǲ���Ҫ���õģ�������Mul��Ҫ����
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
//���
//14
//#define Fun(x,y) (x)*(y)
//int main() {
//	cout << Fun(2 + 3, 4) << endl;
//	return 0;
//}
////���
////20
//int main() {
//	auto a = 1;
//	auto b = 'c';
//	auto c = 1.1;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//}
//���
//int
//char
//double
//int main() {
//	auto a = 3;
//	auto p = &a;
//	auto* ptr = &a;//ָ��������д������
//	auto ra = a;
//	auto& rra = a;
//	cout << typeid(p).name()<< endl;
//	cout << typeid(ptr).name() << endl;
//	cout << typeid(rra).name() << endl;
//	cout << typeid(ra).name() << endl;
//}
////���
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
//		cout << e << endl;//���鷶Χ��ȷ����
//	return 0;
//}
////���
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
////�����
////std::nullptr_t
////int*
