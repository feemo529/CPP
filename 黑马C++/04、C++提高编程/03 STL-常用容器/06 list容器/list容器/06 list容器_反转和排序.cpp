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
//	cout << "��תǰ" << endl;
//	printList(L);
//
//	//��ת
//	L.reverse();
//	cout << "��ת��" << endl;
//	printList(L);
//
//}
//
//bool myCompare(int num1, int num2) {
//	// ���� 
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
//	cout << "����ǰ" << endl;
//	printList(L);
//
//	//���в�֧��������ʵ��������������������ñ�׼�㷨
//	// �ڲ��ṩ�㷨
//	//sort(L.begin(), L.end());
//	L.sort();
//	cout << "�����" << endl;
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