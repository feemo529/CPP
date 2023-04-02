//#include <iostream>
//using namespace std;
//
//// 继承中同名成员处理方式
//class Base {
//public:
//	Base() {
//		A = 100;
//	}
//
//	void func() {
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//	int A;
//};
//
//class Son :public Base {
//public:
//	Son() {
//		A = 200;
//	}
//	void func() {
//		cout << "Son - func()调用" << endl;
//	}
//	int A;
//};
//
//// 同名成员属性
//void test01() {
//	Son s;
//	cout << "Son A = " << s.A << endl;
//	//如果想访问父类中被隐藏的同名成员，需要加父类的作用域
//	cout << "Base A = " << s.Base::A << endl;
//};
//
//// 同名成员函数
//void test02() {
//	Son s;
//	s.func();	// 同理
//	s.Base::func();
//
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//s.func(100); // 报错
//	s.Base::func(100);
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