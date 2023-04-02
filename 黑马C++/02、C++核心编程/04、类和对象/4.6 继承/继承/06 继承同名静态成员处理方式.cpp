//#include <iostream>
//using namespace std;
//
//// 继承中的同名静态成员处理方式
//class Base {
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//	static int A;
//};
//int Base::A = 100;
//
//class Son :public Base {
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int A;
//};
//int Son::A = 200;
//
//// 同名静态成员属性
//void test01() {
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	cout << "Son  A = " << s.A << endl;
//	cout << "Base A = " << s.Base::A << endl;
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son  A = " << Son::A << endl;
//	cout << "Base A = " << Son::Base::A << endl;
//};
//
////同名成员函数
//void test02() {
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Base::func();
//	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
//	Son::Base::func(10);
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