//#include<iostream>  
//using namespace std;
//
//
//int main()
//{
//	int a = 10;
//	//lambda表达式，新建一个变量，外部变量给这个变量复制一份，这就是值传递
//	auto f1 = [=]() mutable
//	{
//		a = 111;
//		cout << "a = " << a << endl;
//	};
//	f1();
//	cout << "a = " << a << endl;
//	auto f2 = [&]() mutable
//	{
//		a = 111;
//	};
//	f2();
//	cout << "a = " << a << endl;
//
//
//	system("pause");
//
//	return 0;
//
//}