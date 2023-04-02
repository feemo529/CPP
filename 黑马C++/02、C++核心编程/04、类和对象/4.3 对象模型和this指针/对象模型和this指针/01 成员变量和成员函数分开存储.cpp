//#include<iostream>
//using namespace std;
//
////成员变量 和 成员函数 分开存储
//
//class Person {
//	int m_A; // 非静态成员变量占对象空间
//
//	static int m_B; // 静态成员变量不占对象空间
//
//	void func() {} //函数也不占对象空间，所有函数共享一个函数实例
//
//	static void sfunc() {} //静态成员函数也不占对象空间
//};
//
//int Person::m_B = 0;
//
//void test01() {
//
//	Person p;
//	// 空对象占用内存空间为: 1
//	// C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	// 每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//void test02() {
//	Person p;
//
//	cout << "size of p = " << sizeof(p) << endl;
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