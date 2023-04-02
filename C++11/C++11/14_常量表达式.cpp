//#include<iostream>  
//using namespace std;
//
//int GetNum()
//{
//	return 3;
//}
//
//const int GetNum2()
//{
//	return 3;
//}
//
//constexpr int GetNum3()
//{
//	//常量表达式，发生再编译阶段
//	return 3;
//}
//
//int main()
//{
//	//枚举成员初始化，必须是整型常量
//	//enum { e1 = GetNum(), e2 }; // 报错
//	//enum { e1 = GetNum2(), e2 }; // 报错
//	enum { e1 = GetNum3(), e2 };
//
//	constexpr int tmp = GetNum3(); //同样发生在编译阶段
//	enum { a1 = tmp, a2 };
//
//
//	system("pause");
//
//	return 0;
//
//}