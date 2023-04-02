//#include<iostream>  
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//// 1、查找内置数据类型
//class GreaterFive {
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找容器 是否有5个元素
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end()) {
//		cout << "没有找到" << endl;
//	}
//	else {
//		cout << "找到大于5的数字: " << *it << endl;
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
//	string name;
//	int age;
//};
//
//
//class Greater20
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.age > 20;
//	}
//};
//
////2、查找 自定义类型
//void test02() {
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//放入到容器中
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//
//	if (it == v.end()) {
//		cout << "没有找到" << endl;
//	}
//	else {
//		cout << "找到元素 姓名: " << it->name << " 年龄： " << it->age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//
//}