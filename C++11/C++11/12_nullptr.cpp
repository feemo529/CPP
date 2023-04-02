//#include<iostream>  
//using namespace std;
//
//void test01(int a)
//{
//	cout << __LINE__ << endl;
//}
//
//void test02(int* p)
//{
//	cout << __LINE__ << endl;
//}
//
//int main()
//{
//	int* p = NULL;
//	int* p2 = 0;
//
//	test01(NULL);
//
//	//nullptr,只能给指针赋值
//	p = NULL;
//	p2 = nullptr;
//	if (p == p2)
//	{
//		cout << "相等" << endl;
//	}
//
//	//不能给一个普通整型变量赋值给nullptr
//	//无法从"nullptr"转换位"int"
//	//int tmp = nullptr; // error
//
//	system("pause");
//
//	return 0;
//
//}