//#include<iostream>  
//using namespace std;
//#include <vector>
//
////2、vs2022不支持函数形参是auto变量，Qt可以
//void func(auto a) // 报错
//{
//
//}
//
////3、auto变量不能作为自定义类型的成员变量
//struct Test
//{
//	int a;
//	auto b = 10; // 报错
//};
//
//int main()
//{
//	//1、定义变量是，必须初始化
//	auto a; // 报错
//	a = 10;
//
//	//4、不能是一个数组
//	auto arr[3] = { 1,2,3 }; // 报错
//
//	//5、模板实例化类型不能是auto类型
//	vector<int>a;
//	vector<auto>b = { 1 }; // 报错
//
//	system("pause");
//
//	return 0;
//
//}