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
////1、类模板没有自动类型推导使用方式
//void test01() {
//	//Person p("张三", 123); // 报错
//	Person<string, int> p("张三", 123);
//	p.showPerson();
//}
////2、类模板在模板参数列表中可以有默认参数
//void test02() {
//	Person<string> t("李四", 321);
//	t.showPerson();
//
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//
//}