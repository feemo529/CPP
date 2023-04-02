//#include<iostream>
//#include<functional>
//using namespace std;
//
////1、普通函数
//
//void test01()
//{
//	cout << __func__ << endl;
//}
//
////2、类中静态函数
//class Test
//{
//public:
//	static int test_func(int a)
//	{
//		cout << __func__ << "(" << a << "）->:";
//		return a;
//	}
//};
//
////3、类中仿函数
//class MyFunctor
//{
//public:
//	int operator()(int a)
//	{
//		cout << __func__ << "(" << a << "）->:";
//		return a;
//	}
//};
//
//int main()
//{
//	//1、绑定普通函数
//	function<void(void)> f1 = test01;
//	f1(); //等价于 test01();
//
//	//2、绑定类中得静态函数
//	function<int(int)> f2 = Test::test_func;
//	cout << f2(10) << endl;
//
//	//2、绑定类中得仿函数
//	MyFunctor obj;
//	function<int(int)> f3 = obj;
//	cout << obj(22) << endl;
//
//	system("pause");
//
//	return 0;
//
//}