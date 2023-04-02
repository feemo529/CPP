//#include<iostream>  
//using namespace std;
//
////final 防止类的进一步派生，虚函数的第一步重写
//class A1 final //加上final关键字，意味A1不能给继承
//{
//	int a;
//};
//
//class A2 :public A1
//{
//};
//
//class B1 //加上final关键字，意味A1不能给继承
//{
//public:
//	virtual void func() final {} //派生类不能重写虚函数
//};
//
////派生类重写基类的虚函数
//class B2 :public B1
//{
//public:
//	virtual void func() {}
//
//};
//
//
//int main()
//{
//
//	system("pause");
//
//	return 0;
//
//}