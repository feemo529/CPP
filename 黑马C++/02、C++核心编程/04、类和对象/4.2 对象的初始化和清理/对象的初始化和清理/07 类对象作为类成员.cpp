//#include<iostream>
//using namespace std;
//
//// �������Ϊ���Ա
//
//// Phone��
//class Phone {
//public:
//	Phone(string pName) {
//		m_PName = pName;
//		cout << "Phone ���캯������" << endl;
//
//	}
//
//	~Phone() {
//		cout << "Phone ������������" << endl;
//	}
//
//	string m_PName;
//};
//
//class Person {
//public:
//
//	// Phone m_Phone = pName ��ʽת��
//	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
//		cout << "Person ���캯������" << endl;
//	}
//
//	~Person() {
//		cout << "Person ������������" << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//};
//
//// �������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������
//
//void test01() {
//	Person p("����", "ƻ��");
//
//	cout << p.m_Name << "����:" << p.m_Phone.m_PName << endl;
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