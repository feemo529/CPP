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
////1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01() {
//	//Person p("����", 123); // ����
//	Person<string, int> p("����", 123);
//	p.showPerson();
//}
////2����ģ����ģ������б��п�����Ĭ�ϲ���
//void test02() {
//	Person<string> t("����", 321);
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