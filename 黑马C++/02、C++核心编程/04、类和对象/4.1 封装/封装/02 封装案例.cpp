//#include<iostream>
//using namespace std;
//
//// 设计一个学生类，属性有姓名和学号
//// 可以给姓名和学号赋值，可以显示学生的姓名和学号
//
//// 设计学生类
//class Student
//{
//	// 访问权限
//	// 公共权限
//public:	// 公共权限
//
//	// 类中的属性和行为 统一称为 成员
//	// 属性 成员属性 成员变量
//	// 行为 成员函数 成员方法
//	string name;
//	int id;
//
//	void showStudent()
//	{
//		cout << "姓名: " << name << "\t学号: " << id << endl;
//	}
//
//	void setName(string m_Name)
//	{
//		name = m_Name;
//	}
//
//	void setId(int Id)
//	{
//		id = Id;
//	}
//};
//
//
//int main() {
//
//	// 创建一个具体的学生
//	Student xm;
//	//xm.name = "小明";
//	xm.setName("小明");
//	//xm.id = 123;
//	xm.setId(123);
//
//	// 显示学生信息
//	xm.showStudent();
//
//	Student ls;
//	ls.name = "李四";
//	ls.id = 321;
//
//	ls.showStudent();
//
//	system("pause");
//
//	return 0;
//}