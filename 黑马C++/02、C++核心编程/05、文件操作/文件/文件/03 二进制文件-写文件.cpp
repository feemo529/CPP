//#include <iostream>
//using namespace std;
//// 1������ͷ�ļ� fstream
//#include <fstream>
//
//
////�������ļ� д�ļ�
//class Person {
//public:
//	char name[64];
//	int age;
//};
//
//void test01() {
//	// 2������������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	// 3�����ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	// 4��д�ļ�
//	Person p = { "����", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	// 5���ر��ļ�
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