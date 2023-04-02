//#include<iostream>
//using namespace std;
//#include <list>
//#include<algorithm>
//
//void printList(const list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L;
//	L.push_back(20);
//	L.push_back(10);
//	L.push_back(50);
//	L.push_back(40);
//	L.push_back(30);
//
//	cout << "反转前" << endl;
//	printList(L);
//
//	//反转
//	L.reverse();
//	cout << "反转后" << endl;
//	printList(L);
//
//}
//
//bool myCompare(int num1, int num2) {
//	// 降序 
//	return num1 > num2;
//}
//
//void test02() {
//	list<int>L;
//	L.push_back(20);
//	L.push_back(10);
//	L.push_back(50);
//	L.push_back(40);
//	L.push_back(30);
//
//	cout << "排序前" << endl;
//	printList(L);
//
//	//所有不支持随机访问迭代器的容器，不可以用标准算法
//	// 内部提供算法
//	//sort(L.begin(), L.end());
//	L.sort();
//	cout << "排序后" << endl;
//	printList(L);
//
//	L.sort(myCompare);
//	printList(L);
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//
//}