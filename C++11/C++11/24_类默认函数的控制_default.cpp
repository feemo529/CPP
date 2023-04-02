//#include<iostream>  
//using namespace std;
//
//class X
//{
//public:
//	X() = default; //让编译器提供一个默认构造函数
//
//	X(int i)
//	{
//		//写了带参的构造函数，编译器不会提供无参的构造函数
//		a = i;
//	}
//
//	int a;
//};
//
////default只能修饰类中默认提供的构造函数：无参构造，拷贝构造，赋值运算符重载，析构函数等
//class X2
//{
//public:
//	//int f() = default; // err
//	//X2(int a) = default; // err
//};
//
//class X3
//{
//public:
//	X3(); //声明
//
//	X3(int i)
//	{
//		//写了带参的构造函数，编译器不会提供无参的构造函数
//		a = i;
//	}
//
//	int a;
//};
//
//X3::X3() = default; //类外定义
//
//int main()
//{
//	X obj;
//
//	system("pause");
//
//	return 0;
//
//}