//#include<iostream>
//using namespace std;
//
//// 成员属性设置为私有
//// 1、可以自己控制读写权限
//// 2、对于写可以检测数据的有效性
//
//class Person
//{
//public:
//	// set姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//get姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//	// 获取年龄
//	int getAge()
//	{
//		//m_Age = 0; // 初始化
//		return m_Age;
//	}
//
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "年龄有误！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	// 只写
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//private:
//	string m_Name; // 设置可读可写
//	int m_Age;	// 只读
//	string m_Lover;	// 只写
//};
//
//
//int main() {
//
//	Person p;
//	p.setName("张三");
//	cout << "姓名： " << p.getName() << endl;
//
//	p.setAge(14);
//	cout << "年龄： " << p.getAge() << endl;
//
//	p.setLover("李四");
//
//	system("pause");
//
//	return 0;
//}