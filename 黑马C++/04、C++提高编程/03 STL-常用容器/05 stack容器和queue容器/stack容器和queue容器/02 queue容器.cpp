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
	//特点：符合先进先出数据结构
	queue<Person>q;

	Person p1("唐僧", 10);
	Person p2("悟空", 20);
	Person p3("八戒", 30);
	Person p4("沙僧", 40);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);


	//只要栈不为空就查看栈顶，并且执行出栈
	while (!q.empty()) {
		//查看栈顶元素
		cout << "队头元素 --- 姓名: " << q.front().name << "\t年龄: " << q.front().age << endl;
		cout << "队头元素 --- 姓名: " << q.back().name << "\t年龄: " << q.back().age << endl;

		//出队
		q.pop();
	}

	cout << "队列的大小: " << q.size() << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;

}