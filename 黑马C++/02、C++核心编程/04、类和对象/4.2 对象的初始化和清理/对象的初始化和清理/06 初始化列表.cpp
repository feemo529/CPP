//#include<iostream>
//using namespace std;
//
//// 初始化列表
//
//class Person {
//public:
//	// 传统初始化操作
//	//Person(int a, int b, int c) {
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	~Person() {
//		cout << "Person 析构函数调用" << endl;
//	}
//
//	//初始化列表初始化属性
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {
//
//	}
//
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01() {
//	//Person p(10, 20, 30);
//	Person p(30, 20, 10);
//
//	cout << "m_A为:" << p.m_A << "\nm_B为:" << p.m_B << "\nm_C为:" << p.m_C << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}