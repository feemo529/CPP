//#include <iostream>
//using namespace std;
//// 1、包含头文件 fstream
//#include <fstream>
//
//
////二进制文件 写文件
//class Person {
//public:
//	char name[64];
//	int age;
//};
//
//void test01() {
//	// 2、创建流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	// 3、打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	// 4、写文件
//	Person p = { "张三", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	// 5、关闭文件
//	ofs.close();
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