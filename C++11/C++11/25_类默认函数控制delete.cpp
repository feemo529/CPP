//#include<iostream>  
//using namespace std;
//
//class X
//{
//public:
//	X() {} //普通无参
//	X(const X&) = delete; //拷贝构造，禁用拷贝构造
//	X& operator = (const X&) { return *this; } // 赋值运算重载函数
//
//	X(int) = delete; //禁用
//
//	//void* operator new(size_t) = delete;
//	//void* operator new[](size_t) = delete;
//};
//
//int main()
//{
//	X obj1; //普通无参
//	//X obj2 = obj1; //拷贝构造, 
//
//	//obj2 = obj1;
//
//	//X obj3(10);
//
//	//X* p = new X; //err
//	//X* p = new X[10]; //err
//
//	system("pause");
//
//	return 0;
//
//}