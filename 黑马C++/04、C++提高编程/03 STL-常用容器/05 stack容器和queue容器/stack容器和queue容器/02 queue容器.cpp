#include<iostream>  
using namespace std;
#include <queue>

class Person
{
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

void test01()
{
	//�ص㣺�����Ƚ��ȳ����ݽṹ
	queue<Person>q;

	Person p1("��ɮ", 10);
	Person p2("���", 20);
	Person p3("�˽�", 30);
	Person p4("ɳɮ", 40);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);


	//ֻҪջ��Ϊ�վͲ鿴ջ��������ִ�г�ջ
	while (!q.empty()) {
		//�鿴ջ��Ԫ��
		cout << "��ͷԪ�� --- ����: " << q.front().name << "\t����: " << q.front().age << endl;
		cout << "��ͷԪ�� --- ����: " << q.back().name << "\t����: " << q.back().age << endl;

		//����
		q.pop();
	}

	cout << "���еĴ�С: " << q.size() << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;

}