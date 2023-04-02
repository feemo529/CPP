//#include <iostream>
//using namespace std;
//
////关系运算符重载
//class Person {
//public:
//	Person(string name, int age) {
//		Name = name;
//		Age = age;
//	}
//	// 重载 == 号
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
//		cout << "p1 和 p2 是相等的" << endl;
//	}
//	else {
//		cout << "p1 和 p2 是不相等的" << endl;
//	}
//	if (p1 != p2) {
//		cout << "p1 和 p2 是不相等的" << endl;
//	}
//	else {
//		cout << "p1 和 p2 是相等的" << endl;
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