//#include<iostream>
//using namespace std;
//
////空指针访问成员函数
//
//class Person {
//public:
//
//	void ShowClassName() {
//		cout << "我是Person类!" << endl;
//	}
//
//	void showPersonAge() {
//		if (this == NULL) {
//			return;
//		}
//		// 报错原因是因为传入的指针是为NULL
//		cout << "age = " << age << endl;
//	}
//
//	int age;
//};
//
//void test01() {
//	Person* p = NULL;
//
//	p->ShowClassName(); //空指针，可以调用成员函数
//
//	//p->showPersonAge(); //但是如果成员函数中用到了this指针，就不可以了
//}
//
//int main() {
//
//	test01();
//	//test02();
//
//	system("pause");
//
//	return 0;
//}