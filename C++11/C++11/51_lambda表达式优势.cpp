//#include<iostream>  
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> nums;
//vector<int> largeNums;
//
//int tmp = 5;
//
//void func(int& n)
//{
//	if (n > tmp)
//	{
//		largeNums.push_back(n);
//	}
//}
//
//void print(int& n)
//{
//	cout << n << ", ";
//}
//
//int main()
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		nums.push_back(i + 1);
//	}
//	int tmp = 5;
//
//	//1、传统操作
//	//for (auto itr = nums.begin(); itr != nums.end(); ++itr)
//	//{
//	//	if (*itr > tmp)
//	//	{
//	//		largeNums.push_back(*itr);
//	//	}
//	//}
//
//	//for (auto itr = largeNums.begin(); itr != largeNums.end(); ++itr)
//	//{
//	//	cout << *itr << ", ";
//	//}
//	//cout << endl;
//
//
//	//2、使用库函数
//	//for_each(nums.begin(), nums.end(), func);
//	//for_each(largeNums.begin(), largeNums.end(), print);
//	//cout << endl;
//
//	//3、使用lambda表达式
//	for_each(nums.begin(), nums.end(),
//		[&](int& n)
//		{
//			if (n > tmp)
//			{
//				largeNums.push_back(n);
//			}
//		}
//	);
//	for_each(largeNums.begin(), largeNums.end(),
//		[](int& n)
//		{
//			cout << n << ", ";
//		}
//	);
//	cout << endl;
//
//
//
//
//
//	system("pause");
//
//	return 0;
//
//}