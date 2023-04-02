#include <iostream>
using namespace std;
// 1������ͷ�ļ� fstream
#include <fstream>


//�������ļ� ���ļ�
class Person {
public:
	char name[64];
	int age;
};

void test01() {
	// 2������������
	ifstream ifs;

	// 3�����ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open()) {
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}

	// 4�����ļ�
	Person p;

	ifs.read((char*)&p, sizeof(p));

	cout << "������" << p.name << " ���䣺" << p.age << endl;

	// 5���ر��ļ�
	ifs.close();
}

int main() {

	test01();

	system("pause");

	return 0;
}