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
//
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//
//	//ͷ��
//	L.push_front(30);
//	L.push_front(40);
//
//	printList(L);	 // 40 30 10 20
//
//	L.pop_back(); // βɾ
//	printList(L);	// 40 30 10
//
//	L.pop_front(); // ͷɾ
//	printList(L);	// 30 10
//
//	//����
//	L.insert(L.begin(), 200);
//	printList(L); // 1000 30 10
//
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//
//	//ɾ��
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//
//	//�Ƴ�
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//���
//	L.clear();
//	printList(L);
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