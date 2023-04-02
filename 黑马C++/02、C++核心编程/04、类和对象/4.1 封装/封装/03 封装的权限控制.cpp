//#include<iostream>
//using namespace std;
//
////三种权限
////公共权限  public     类内可以访问  类外可以访问
////保护权限  protected  类内可以访问  类外不可以访问
////私有权限  private    类内可以访问  类外不可以访问
//
//class Person
//{
//public:
//	//姓名 公共权限
//	string m_Name;
//
//	// 保护权限
//protected:
//	string m_Car;
//
//	// 私有权限
//private:
//	int m_Password;
//
//public	:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//
//int main() {
//
//	Person p1; 
//
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰"; // 保护权限内容，在类外访问不到
//	//p2.m_Password = 123; // 私有权限内容，类外无法访问
//
//	p1.func();
//
//	system("pause");
//
//	return 0;
//}