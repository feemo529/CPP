//#include <iostream>
//using namespace std;
//
////��ϵ���������
//class Person {
//public:
//	Person(string name, int age) {
//		Name = name;
//		Age = age;
//	}
//	// ���� == ��
//	bool operator==(Person& p) {
//		if (this->Name == p.Name && this->Age == p.Age) {
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(Person& p) {
//		if (this->Name == p.Name && this->Age == p.Age) {
//			return false;
//		}
//		return true;
//	}
//	string Name;
//	int Age;
//};
//
//
//void test01() {
//	Person p1("TOM", 18);
//
//	Person p2("TOM", 18);
//
//	if (p1 == p2) {
//		cout << "p1 �� p2 ����ȵ�" << endl;
//	}
//	else {
//		cout << "p1 �� p2 �ǲ���ȵ�" << endl;
//	}
//	if (p1 != p2) {
//		cout << "p1 �� p2 �ǲ���ȵ�" << endl;
//	}
//	else {
//		cout << "p1 �� p2 ����ȵ�" << endl;
//	}
//
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