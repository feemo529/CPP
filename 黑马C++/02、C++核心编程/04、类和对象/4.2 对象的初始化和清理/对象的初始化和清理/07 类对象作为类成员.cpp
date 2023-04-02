//#include<iostream>
//using namespace std;
//
//// 类对象作为类成员
//
//// Phone类
//class Phone {
//public:
//	Phone(string pName) {
//		m_PName = pName;
//		cout << "Phone 构造函数调用" << endl;
//
//	}
//
//	~Phone() {
//		cout << "Phone 析构函数调用" << endl;
//	}
//
//	string m_PName;
//};
//
//class Person {
//public:
//
//	// Phone m_Phone = pName 隐式转换
//	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
//		cout << "Person 构造函数调用" << endl;
//	}
//
//	~Person() {
//		cout << "Person 析构函数调用" << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//};
//
//// 当其他类对象作为本类成员，构造时候先构造类对象，再构造自身
//
//void test01() {
//	Person p("张三", "苹果");
//
//	cout << p.m_Name << "拿着:" << p.m_Phone.m_PName << endl;
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