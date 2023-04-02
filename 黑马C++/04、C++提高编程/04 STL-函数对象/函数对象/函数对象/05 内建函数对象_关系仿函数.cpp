//#include<iostream>  
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//class MyCompare {
//public:
//	bool operator()(int v1, int v2) {
//		return v1 > v2;
//	}
//};
//
////大于 greater
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	//sort(v.begin(), v.end(), MyCompare()); // 自己实现
//	sort(v.begin(), v.end(), greater<int>()); // 内置函数对象 greater
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//}
//
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