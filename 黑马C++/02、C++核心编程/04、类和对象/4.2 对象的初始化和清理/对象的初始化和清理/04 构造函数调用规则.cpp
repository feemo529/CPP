//#include<iostream>
//using namespace std;
//
//// �������캯�����ù���
////1��Ĭ������£�c++���������ٸ�һ�������3������
//// Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//// Ĭ����������(�޲Σ�������Ϊ��)
//// Ĭ�Ͽ������캯���������Խ���ֵ����
//
//class Person {
//public:
//	//Person() {
//	//	cout << "Person Ĭ�Ϲ��캯������" << endl;
//	//}
//
//	//Person(int age) {
//	//	m_Age = age;
//	//	cout << "Person �вι��캯������" << endl;
//
//	//}
//
//	/*Person(const Person& p) {
//		m_Age = p.m_Age;
//		cout << "Person �������캯������" << endl;
//
//	}*/
//
//	~Person() {
//		cout << "Person ������������" << endl;
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
////	cout << "p2 ������Ϊ��" << p2.m_Age << endl;
////}
//
////2������û��ṩ�вι��죨���Լ�д���вι��캯��)�������������ṩĬ�Ϲ��죬�����ṩ��������
////	����û��ṩ�������죬�����������ṩ�������캯��
//void test02() {
//	Person p(20);
//
//	Person p2(p);
//	cout << "p2 ������Ϊ��" << p2.m_Age << endl;
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