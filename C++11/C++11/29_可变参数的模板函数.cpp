//#include<iostream>  
//using namespace std;
//
////可变参数的模板函数
//template<class ...T> // T叫模板参数包
//void func(T ...args) // args叫函数参数包
//{
//	//获取可变参数的个数
//	cout << "num = " << sizeof...(args) << endl;
//}
//
//int main()
//{
//	func<int>(10);
//	func<int, int>(10, 20);
//	func<char, int>(10, 'a');
//	func<char, const char*, int>('a', "abc", 250);
//
//
//	system("pause");
//
//	return 0;
//
//}