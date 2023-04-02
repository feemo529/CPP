//#include<iostream>  
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//
//	vector<int> vTarget;
//	//取两个里面较小的值给目标容器开辟空间
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//返回目标容器的最后一个元素的迭代器地址
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//	//	求交集的两个集合必须的有序序列
//	//	目标容器开辟空间需要从两个容器中取小值 !!!
//	//	set_intersection返回值既是交集中最后一个元素的位置 !!!
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
