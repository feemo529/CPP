//#include<iostream>
//using namespace std;
//
////��Ա���� �� ��Ա���� �ֿ��洢
//
//class Person {
//public:
//	Person(int age) {
//		// this ָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//
//	// �����õķ�ʽ��һ������
//	Person& PersonAddPerson(Person& p) {
//		this->age += p.age;
//		// thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
//		return *this;
//	}
//
//	int age;
//};
//
//// 1��������Ƴ�ͻ
//void test01() {
//	Person p1(18);
//	cout << "p1 ������Ϊ:" << p1.age << endl;
//}
//
//// 2�����ض������� *this
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