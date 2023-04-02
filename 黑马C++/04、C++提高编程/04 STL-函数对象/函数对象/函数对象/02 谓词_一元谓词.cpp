//#include<iostream>  
//using namespace std;
//#include <vector>
//
////1、函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//class GreaterFive {
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找容器 大于5的数字
//	//GreaterFive() 匿名函数对象
//	vector<int>::iterator ret = find_if(v.begin(), v.end(), GreaterFive());
//	if (ret == v.end()) {
//		cout << "未找到" << endl;
//	}
//	else {
//		cout << "找到了,数字为: " << *ret << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//
//}