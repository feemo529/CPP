//#include<iostream>  
//using namespace std;
//#include <list>
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
//	list<int>L1;
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//遍历
//	printList(L1);
//
//	if (L1.empty()) {
//		cout << "list为空" << endl;
//	}
//	else {
//		cout << "list不为空" << endl;
//		cout << "L1元素个数：" << L1.size() << endl;
//	}
//
//	//重新指定大小
//	//L1.resize(10, 11);
//	L1.resize(2);
//
//	printList(L1);
//
//}
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