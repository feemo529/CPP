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
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//
//	//L[0]; // 不可以用[]访问list容器中的元素
//
//	//L.at(0) 不可以用at方式访问lsit容器元素
//	cout << "第一个元素：" << L.front() << endl;
//	cout << "最后一个元素：" << L.back() << endl;
//
//	//list容器的迭代器是双向迭代器，不支持随机访问
//	list<int>::iterator it = L.begin();
//	it++;
//	it--; // 支持双向
//	//it = it + 1;//错误，不可以跳跃访问，即使是+1
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