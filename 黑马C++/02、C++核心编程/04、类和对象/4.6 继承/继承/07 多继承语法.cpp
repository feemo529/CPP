//#include <iostream>
//using namespace std;
//
//// ��̳��﷨
//class Base1 {
//public:
//	Base1() {
//		A = 100;
//	}
//	int A;
//};
//
//class Base2 {
//public:
//	Base2() {
//		B = 200;
//	}
//	int B;
//};
//
//class Son :public Base1, public Base2 {
//public:
//	Son() {
//		C = 300;
//		D = 400;
//	}
//
//	int C;
//	int D;
//};
//
////��̳����ײ�����Աͬ�������
////ͨ��ʹ������������������ֵ�����һ������ĳ�Ա
//void test01() {
//	Son s;
//
//	cout << "sizeof Son = " << sizeof(s) << endl;
//	cout << s.A << endl;
//	// ��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
//	cout << "Base1::A = " << s.Base1::A << endl;
//	cout << "Base1::A = " << s.Base2::B << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}