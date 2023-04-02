//#include <iostream>
//using namespace std;
//
//// 多继承语法
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
////多继承容易产生成员同名的情况
////通过使用类名作用域可以区分调用哪一个基类的成员
//void test01() {
//	Son s;
//
//	cout << "sizeof Son = " << sizeof(s) << endl;
//	cout << s.A << endl;
//	// 多继承可能会引发父类中有同名成员出现，需要加作用域区分
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