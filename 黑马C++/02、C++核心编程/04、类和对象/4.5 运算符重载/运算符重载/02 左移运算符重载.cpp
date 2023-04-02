//#include <iostream>
//using namespace std;
//
////左移运算符重载
//class Person {
//public:
//	Person(int a, int b) {
//		A = a;
//		B = b;
//	}
//	friend ostream& operator<< (ostream& out, Person& p);
//private:
//
//	// 利用成员函数重载 左移运算符
//	// 不会利用成员函数重载<<运算符，因为无法实现 cout 在左侧
//	//void operator<<(cout) {
//
//	//}
//
//	int A;
//	int B;
//};
//
//// 只能利用全局函数重载左移运算符
//ostream& operator<< (ostream& out, Person& p) { // 本质 operator<< (cout, p)简化 cout << p
//	out << "A = " << p.A << "\nB =  " << p.B;
//	return out;
//}
//
//void test01() {
//	Person p(10, 10);
//	//p.A = 10
//	//p.B = 10;
//
//	cout << p << " 链式编程思维，是返回该对象" << endl;
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