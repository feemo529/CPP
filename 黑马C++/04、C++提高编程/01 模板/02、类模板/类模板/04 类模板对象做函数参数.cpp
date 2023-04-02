//#include<iostream>  
//using namespace std;
//
//template<class NameType, class AgeType = int>
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson() {
//		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1、指定传入的类型 — 直接显示对象的数据类型
//void printPerson1(Person<string, int>& p) {
//	p.showPerson();
//}
//void test01() {
//	Person<string, int>p("张三", 100);
//	printPerson1(p);
//}
//
////2、参数模板化 — 将对象中的参数变为模板进行传递
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p) {
//	p.showPerson();
//	cout << "T1 的类型为：" << typeid(T1).name() << endl;
//	cout << "T2 的类型为：" << typeid(T2).name() << endl;
//
//}
//void test02() {
//	Person<string, int>p("李四", 99);
//	printPerson2(p);
//}
//
//
////3、整个类模板化 — 将这个对象类型 模板化进行传递
//template<class T>
//void printPerson3(T& p) {
//	p.showPerson();
//	cout << "T的数据类型为：" << typeid(T).name() << endl;
//}
//void test03() {
//	Person<string, int>p("王五", 23);
//	printPerson3(p);
//}
//
//
//int main()
//{
//	test01();
//	cout << "---------" << endl;
//	test02();
//	cout << "---------" << endl;
//	test03();
//
//	system("pause");
//
//	return 0;
//
//}