//#include<iostream>  
//using namespace std;
//
///*
//	注意：
//	1、基类构造函数不能是私有的
//	2、这种派生类无法初始化派生类成员变量
//	3、不能虚继承
//	4、用了继承构造，派生类不会再提供默认的构造函数
//*/
//
////基类
//class A
//{
//public:
//	A(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//protected:
//	int a;
//	int b;
//};
//
////派生类
//class B :public A
//{
//public:
//	//通过参数列表给基类构造函数传参
//	//B(int x, int y) :A(x, y)
//	//{
//
//	//}
//
//	//继承构造
//	using A::A;
//
//	void display()
//	{
//		cout << "a = " << a << ", b = " << b << endl;
//	}
//	//没有增加新的成员变量
//
//};
//
//int main()
//{
//	//派生类对象
//	B obj(10, 20);
//	obj.display();
//
//	system("pause");
//
//	return 0;
//
//}