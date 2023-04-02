//#include<iostream>
//using namespace std;
//
//// 拷贝构造函数调用规则
////1、默认情况下，c++编译器至少给一个类添加3个函数
//// 默认构造函数(无参，函数体为空)
//// 默认析构函数(无参，函数体为空)
//// 默认拷贝构造函数，对属性进行值拷贝
//
//class Person {
//public:
//	//Person() {
//	//	cout << "Person 默认构造函数调用" << endl;
//	//}
//
//	//Person(int age) {
//	//	m_Age = age;
//	//	cout << "Person 有参构造函数调用" << endl;
//
//	//}
//
//	/*Person(const Person& p) {
//		m_Age = p.m_Age;
//		cout << "Person 拷贝构造函数调用" << endl;
//
//	}*/
//
//	~Person() {
//		cout << "Person 析构函数调用" << endl;
//	}
//	int m_Age;
//};
//
////void test01() {
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////
////	cout << "p2 的年龄为：" << p2.m_Age << endl;
////}
//
////2、如果用户提供有参构造（即自己写了有参构造函数)，编译器不会提供默认构造，但会提供拷贝构造
////	如果用户提供拷贝构造，编译器不会提供其他构造函数
//void test02() {
//	Person p(20);
//
//	Person p2(p);
//	cout << "p2 的年龄为：" << p2.m_Age << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}