//#include <iostream>
//using namespace std;
//
////�������������
//class Person {
//public:
//	Person(int a, int b) {
//		A = a;
//		B = b;
//	}
//	friend ostream& operator<< (ostream& out, Person& p);
//private:
//
//	// ���ó�Ա�������� ���������
//	// �������ó�Ա��������<<���������Ϊ�޷�ʵ�� cout �����
//	//void operator<<(cout) {
//
//	//}
//
//	int A;
//	int B;
//};
//
//// ֻ������ȫ�ֺ����������������
//ostream& operator<< (ostream& out, Person& p) { // ���� operator<< (cout, p)�� cout << p
//	out << "A = " << p.A << "\nB =  " << p.B;
//	return out;
//}
//
//void test01() {
//	Person p(10, 10);
//	//p.A = 10
//	//p.B = 10;
//
//	cout << p << " ��ʽ���˼ά���Ƿ��ظö���" << endl;
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