//#include<iostream>
//using namespace std;
//
//// 栈区数据注意事项
//// 栈区数据由编译器管理开辟和释放
//
//int* func(int b) // 形参数据也会放在栈区
//{
//	b = 100;
//	int a = 10; // 局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
//
//	return &a;	// 返回局部变量的地址
//}
//
//int main()
//{
//	int* p = func(1);
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}