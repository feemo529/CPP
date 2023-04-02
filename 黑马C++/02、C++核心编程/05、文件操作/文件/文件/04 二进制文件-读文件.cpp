#include <iostream>
using namespace std;
// 1、包含头文件 fstream
#include <fstream>


//二进制文件 读文件
class Person {
public:
	char name[64];
	int age;
};

void test01() {
	// 2、创建流对象
	ifstream ifs;

	// 3、打开文件 并且判断是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open()) {
		cout << "文件打开失败！" << endl;
		return;
	}

	// 4、读文件
	Person p;

	ifs.read((char*)&p, sizeof(p));

	cout << "姓名：" << p.name << " 年龄：" << p.age << endl;

	// 5、关闭文件
	ifs.close();
}

int main() {

	test01();

	system("pause");

	return 0;
}