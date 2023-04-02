//#include<iostream>  
//using namespace std;
//
////template<class T> void func(const T&)
////{
////	cout << "const T &" << endl;
////}
////
////template<class T> void func(T&)
////{
////	cout << "T &" << endl;
////}
////
////template<class T> void forward_val(const T& tmp)
////{
////	func(tmp); //定义
////}
////
////template<class T> void forward_val(T& tmp)
////{
////	func(tmp); //定义
////}
////
////int main()
////{
////	int a = 0;
////	const int& b = 1;
////	//需要给函数重载两个版本
////	forward_val(a); // T&
////	forward_val(b); // T&
////	forward_val(1111); // T&
////
////	system("pause");
////
////	return 0;
////
////}
//
//
//template<class T> void func(const T&)
//{
//	cout << "const T &" << endl;
//}
//
//template<class T> void func(T&)
//{
//	cout << "T &" << endl;
//}
//
//template<class T> void func(T&&)
//{
//	cout << "T &&" << endl;
//}
//
//template<class T> void forward_val(T&& tmp) //参数为右值引用
//{
//	//保持参数的左值和右值属性
//	func(std::forward<T>(tmp)); //定义
//}
//
//int main()
//{
//	int a = 0;
//	const int& b = 1;
//	forward_val(a); // T &
//	forward_val(b); // const T &
//	forward_val(1111); // T &&
//
//	system("pause");
//
//	return 0;
//
//}