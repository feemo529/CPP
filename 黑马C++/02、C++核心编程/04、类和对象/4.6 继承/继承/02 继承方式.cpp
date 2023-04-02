//#include <iostream>
//using namespace std;
//
//// 继承方式
//
////公共继承
//class Base1 {
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
//
//class Son1 :public Base1 {
//public:
//	void func() {
//		A = 10; // 父类中的公共权限成员 到子类中依然是公共权限
//		B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
//		//C = 10; // 父类中的私有权限成员 子类访问不到
//	}
//
//};
//void test01() {
//	Son1 s1;
//	s1.A = 100;
//	//s1.B = 100; // 保护权限类外无法访问
//}
//
//class Base2 {
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
//
//class Son2 :protected Base2 {
//public:
//	void func() {
//		A = 100; // 父类中的公共权限成员 到子类中变为 保护权限
//		B = 100; // 父类中的保护权限成员 到子类中依然是保护权限
//		//C; //不可访问
//	}
//};
//
//void test02() {
//	Son2 s1;
//	//s1.A = 100; // 不可访问, Son2中变为保护权限，所以类外无法访问
//}
//
////私有继承
//class Base3
//{
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		A = 100; //父类中的公共权限成员 到子类中变为 私有权限
//		B = 100; //父类中的保护权限成员 到子类中变为 私有权限
//		//C = 100; //不可访问
//	}
//};
//
//void test03() {
//	Son1 s1;
//	s1.A = 100; // 到Son3中 变为 私有成员 类外访问不到
//	//s1.B = 100; // 保护权限类外无法访问
//}
//
//class GrandSon3 :public Son3 {
//public:
//	void func() {
//		//A = 100; // Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
//		//B = 100;
//	}
//};
//
//int main() {
//
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}