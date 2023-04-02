#include<iostream>  
using namespace std;
#include <list>

class Person {
public:
	Person(string name, int age, int height) {
		this->name = name;
		this->age = age;
		this->height = height;
	}
	string name;
	int age;
	int height;
};

void printList(list<Person>& L) {
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "姓名: " << it->name
			<< " 年龄: " << it->age
			<< " 身高: " << it->height << endl;
	}
}

bool ComparePerson(Person& p1, Person& p2)
{
	//按照年龄
	if (p1.age != p2.age) {
		return p1.age < p2.age;
	}
	else {
		return p1.height < p2.height;
	}

}

void test01()
{
	list<Person>L;
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	printList(L);
	cout << "--------------------------------" << endl;
	L.sort(ComparePerson);
	printList(L);

}

int main()
{
	test01();

	system("pause");

	return 0;

}