//#include<iostream>  
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
////find
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�������� �Ƿ���5��Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//
//	if (it == v.end()) {
//		cout << "û���ҵ�" << endl;
//	}
//	else {
//		cout << "�ҵ�: " << *it << endl;
//	}
//}
//
//class Person {
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	//���� == �ײ�find֪����ζԱ�person��������
//	bool operator==(const Person& p)
//	{
//		if (this->name == p.name && this->age == p.age)
//		{
//			return true;
//		}
//		return false;
//	}
//	string name;
//	int age;
//};
//
////���� �Զ�������
//void test02() {
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//���뵽������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person pp("bbb", 20);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//
//	if (it == v.end()) {
//		cout << "û���ҵ�" << endl;
//	}
//	else {
//		cout << "�ҵ�Ԫ�� ����: " << it->name << " ���䣺 " << it->age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//
//	return 0;
//
//}