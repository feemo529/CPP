//#include<iostream>
//using namespace std;
//
////成员变量 和 成员函数 分开存储
//
//class Person {
//public:
//	Person(int age) {
//		// this 指针指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	// 用引用的方式做一个返回
//	Person& PersonAddPerson(Person& p) {
//		this->age += p.age;
//		// this指向p2的指针，而*this指向的就是p2这个对象本体
//		return *this;
//	}
//
//	int age;
//};
//
//// 1、解决名称冲突
//void test01() {
//	Person p1(18);
//	cout << "p1 的年龄为:" << p1.age << endl;
//}
//
//// 2、返回对象本身用 *this
//void test02() {
//	Person p1(10);
//	cout << "p1.age = " << p1.age << endl;
//
//	Person p2(10);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "p2.age = " << p2.age << endl;
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