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
//	//L[0]; // ��������[]����list�����е�Ԫ��
//
//	//L.at(0) ��������at��ʽ����lsit����Ԫ��
//	cout << "��һ��Ԫ�أ�" << L.front() << endl;
//	cout << "���һ��Ԫ�أ�" << L.back() << endl;
//
//	//list�����ĵ�������˫�����������֧���������
//	list<int>::iterator it = L.begin();
//	it++;
//	it--; // ֧��˫��
//	//it = it + 1;//���󣬲�������Ծ���ʣ���ʹ��+1
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