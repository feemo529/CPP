//#include<iostream>  
//using namespace std;
//
//int tmp;
//
//int& func()
//{
//	static int tmp;
//
//	return tmp;
//}
//
//int func02()
//{
//	return 10;
//}
//
//void test(int& tmp)
//{
//	cout << "左值 = " << tmp << endl;
//}
//
//void test(int&& tmp)
//{
//	cout << "右值 = " << tmp << endl;
//}
//
//int main()
//{
//	//左值放左边，右值放右边
//	//左值可以&,右值不能&
//	//int a = 10;
//
//	//右值，字面量，函数返回的非引用变量
//
//	//左值引用
//	//int a;
//	//int& b = a; //ok
//	////int& c = 1; //err
//	//const int& d = a; //ok
//	//const int& e = 1; //ok
//	//const int& f = func(); //ok
//	//const int tmp = 10;
//	//const int& g = tmp;
//
//	//const int& 万能引用
//
//
//	//右值引用
//	//int&& a = 10;
//	//int&& b = func02();
//
//	//int i = 10;
//	//int j = 20;
//	//int&& c = i + j;
//
//	//int k = 10;
//	//int&& d = k; //err,不能把一个左值赋给一个右值引用
//
//	int a = 10;
//	test(a); //左值引用
//
//	test(111); //右值引用
//
//	system("pause");
//
//	return 0;
//
//}