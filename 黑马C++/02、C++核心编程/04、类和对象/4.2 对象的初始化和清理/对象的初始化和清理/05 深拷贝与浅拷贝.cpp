//#include<iostream>
//using namespace std;
//
//// 深拷贝与浅拷贝
//
//class Person {
//public:
//	Person() {
//		cout << "Person 默认构造函数调用" << endl;
//	}
//
//	Person(int age, int height) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person 有参构造函数调用" << endl;
//
//	}
//
//	//自己实现拷贝构造函数 解决浅拷贝带来的问题
//	Person(const Person& p) {
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height; // 编译器默认实现就是这行代码
//		// 深拷贝
//
//		m_Height = new int(*p.m_Height);
//		cout << "Person 拷贝构造函数调用" << endl;
//
//	}
//
//	~Person() {
//		// 析构代码，将堆区开辟数据做释放条件
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person 析构函数调用" << endl;
//	}
//	int m_Age;
//	int* m_Height; // 用指针的形式接收堆区数据
//};
//
//void test01() {
//	Person p1(18, 160);
//
//	cout << "p1 的年龄为:" << p1.m_Age << "\t身高为:" << p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2 的年龄为:" << p2.m_Age << "\t身高为:" << p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}