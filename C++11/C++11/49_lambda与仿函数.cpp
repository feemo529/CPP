//#include<iostream>  
//using namespace std;
//
//class MyFunctor
//{
//public:
//	MyFunctor(int i) :r(i) {}
//
//	int operator()(int tmp)
//	{
//		return tmp + r;
//	}
//private:
//	int r;
//};
//int main()
//{
//	int tmp = 10;
//
//	//仿函数调用
//	MyFunctor obj(tmp);
//
//	//调用仿函数
//	cout << "result1 = " << obj(1) << endl;
//
//	//仿函数时编译器实现lambda得一种方式
//	//lambda表达式
//	auto f = [tmp](int t)
//	{
//		return tmp + t;
//	};
//	cout << "result2 = " << f(1) << endl;
//
//	system("pause");
//
//	return 0;
//
//}