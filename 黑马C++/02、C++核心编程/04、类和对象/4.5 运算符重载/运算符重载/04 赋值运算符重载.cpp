//#include <iostream>
//using namespace std;
//
////��ֵ���������
//class Person {
//public:
//	Person(int age) {
//		Age = new int(age);
//	}
//
//	Person& operator=(Person& p) {
//		// ���ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
//		if (Age != NULL) {
//			delete Age;
//			Age = NULL;
//		}
//		//m_Age = p.m_Age; //�������ṩ�Ĵ�����ǳ����
//
//		Age = new int(*p.Age); // ���
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
//	cout << "p1������Ϊ���٣�" << *p1.Age << endl;
//	cout << "p1������Ϊ���٣�" << *p2.Age << endl;
//	cout << "p1������Ϊ���٣�" << *p3.Age << endl;
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