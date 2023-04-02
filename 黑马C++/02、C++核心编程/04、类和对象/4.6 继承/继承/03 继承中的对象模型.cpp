//#include <iostream>
//using namespace std;
//
////继承中的对象模型
//
//class Base {
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C; //私有成员只是被隐藏了，但是还是会继承下去
//};
//
//class Son :public Base {
//public:
//	int D;
//};
//
//// 利用开发人员命令提示工具查看对象模型
//
//void test01() {
//
//	// 父类中所有的非静态成员属性都会被子类继承下去
//	// 父类中私有成员属性 是被编译器隐藏了，因此是访问不到，但是确实被继承下去了
//	cout << "size of Son = " << sizeof(Son) << endl; // 16
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}