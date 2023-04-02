#include<iostream>
using namespace std;

//常函数

class Person {
public:

	// this指针的本质是一个指针常量，指针的指向不可修改
	// 如果想让指针指向的值也不可以修改，需要声明常函数 加 const
	// 在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void ShowPerson() const {
		//this->A = 100;
		this->B = 100; //可修改 可变的
		//this->NULL;  // this指针不可以修改指针的指向的
	}

	void func() {}

	int A;
	mutable	int B; //特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

void test01() {
	Person p;

	p.ShowPerson();
}

// 常对象
void test02() {
	const Person p; //在对象前加const，变为常对象
	//p.A = 100; //常对象不能修改成员变量的值,但是可以访问
	p.B = 100;	//但是常对象可以修改 mutable 修饰成员变量

	//常对象只能调用常函数
	p.ShowPerson();
	//p.func(); // 常对象不能调用普通的成员函数
}

int main() {

	test01();
	//test02();

	system("pause");

	return 0;
}