//#include <iostream>
//using namespace std;
//
////赋值运算符重载
//class Person {
//public:
//	Person(int age) {
//		Age = new int(age);
//	}
//
//	Person& operator=(Person& p) {
//		// 先判断是否有属性在堆区，如果有先释放干净，然后在深拷贝
//		if (Age != NULL) {
//			delete Age;
//			Age = NULL;
//		}
//		//m_Age = p.m_Age; //编译器提供的代码是浅拷贝
//
//		Age = new int(*p.Age); // 深拷贝
//		return *this;
//	}
//
//	~Person() {
//		if (Age != NULL) {
//			delete Age;
//			Age = NULL;
//		}
//	}
//
//	int* Age;
//};
//
////
//
//void test01() {
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3 = p2 = p1;
//
//	cout << "p1的年龄为多少：" << *p1.Age << endl;
//	cout << "p1的年龄为多少：" << *p2.Age << endl;
//	cout << "p1的年龄为多少：" << *p3.Age << endl;
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