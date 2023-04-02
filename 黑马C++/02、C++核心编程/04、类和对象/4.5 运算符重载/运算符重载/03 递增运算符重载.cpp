//#include <iostream>
//using namespace std;
//
//// 重载递增运算符
//
////自定义整型
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger() {
//		num = 0;
//	}
//
//	//重载前置++运算符	返回引用是为了一直对一个数据进行递增操作
//	MyInteger& operator++() {
//		num++; // 先运算
//		return *this; // 再将自身做返回
//	}
//	//重载后置++运算符
//	//void operator++(int) int 代表占位参数，可以用于区分前置和后置！！！
//	MyInteger& operator++(int) {
//		// 先记录结果
//		MyInteger temp = *this;
//		// 后 递增
//		num++;
//		return temp;
//	}
//
//private:
//	int num;
//};
//
//// 重载<< 运算符
//ostream& operator<<(ostream& cout, MyInteger myint) {
//	cout << myint.num;
//	return cout;
//}
//
//
//void test01() {
//	MyInteger myint;
//
//	cout << ++myint << endl;
//	cout << myint << endl;
//}
//
//void test02() {
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}