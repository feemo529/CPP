//#include<iostream>  
//using namespace std;
//#include <map>
//
//void printMap(map<int, int>& m) {
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����map����
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(5, 50));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//
//	if (m.empty()) {
//		cout << "m Ϊ��" << endl;
//	}
//	else {
//		cout << "m ��Ϊ��" << endl;
//		cout << "m�Ĵ�СΪ: " << m.size() << endl;
//	}
//
//	//����
//	map<int, int>m2;
//	m2.insert(pair<int, int>(6, 11));
//	m2.insert(pair<int, int>(7, 55));
//	m2.insert(pair<int, int>(8, 44));
//	m2.insert(pair<int, int>(9, 33));
//	m2.insert(pair<int, int>(10, 22));
//
//	cout << "����ǰ: " << endl;
//	printMap(m);
//	printMap(m2);
//
//	m.swap(m2);
//	cout << "������: " << endl;
//	printMap(m);
//	printMap(m2);
//};
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