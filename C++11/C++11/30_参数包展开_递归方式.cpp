//#include<iostream>  
//using namespace std;
//
////递归终止函数1
////void func()
////{
////	cout << "empty" << endl;
////}
//
////递归终止函数2
//template<class T>
//void func(T tmp)
//{
//	cout << "tmp = " << tmp << endl;
//}
//
////可变参数的模板函数
////参数包展开函数
//template<class T1, class ... T2> // T叫模板参数包
//void func(T1 first, T2... last) // args叫函数参数包
//{
//	cout << first << endl;
//	//递归调用函数本身
//	func(last...);
//}
//
//int main()
//{
//	func(1, 2, 3, 4);
//	/*
//	* 递归终止函数1调用过程
//	func(1, 2, 3, 4);
//	func(2, 3, 4);
//	func(3, 4);
//	func(4);
//	func();
//	*/
//	/*
//	* 递归终止函数2调用过程
//	func(1, 2, 3, 4);
//	func(2, 3, 4);
//	func(3, 4);
//	func(4);
//	*/
//	//func(1, "mike", 3.11, 'a');
//
//	system("pause");
//
//	return 0;
//
//}