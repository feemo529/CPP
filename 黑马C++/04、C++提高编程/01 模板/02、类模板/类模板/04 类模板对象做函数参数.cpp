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
////1��ָ����������� �� ֱ����ʾ�������������
//void printPerson1(Person<string, int>& p) {
//	p.showPerson();
//}
//void test01() {
//	Person<string, int>p("����", 100);
//	printPerson1(p);
//}
//
////2������ģ�廯 �� �������еĲ�����Ϊģ����д���
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p) {
//	p.showPerson();
//	cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;
//
//}
//void test02() {
//	Person<string, int>p("����", 99);
//	printPerson2(p);
//}
//
//
////3��������ģ�廯 �� ������������� ģ�廯���д���
//template<class T>
//void printPerson3(T& p) {
//	p.showPerson();
//	cout << "T����������Ϊ��" << typeid(T).name() << endl;
//}
//void test03() {
//	Person<string, int>p("����", 23);
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