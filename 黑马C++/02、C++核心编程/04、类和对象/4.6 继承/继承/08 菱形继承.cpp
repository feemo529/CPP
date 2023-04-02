#include <iostream>
using namespace std;

// 菱形继承
class Animal
{
public:
	int Age;
};

// 利用虚继承 解决菱形继承的问题
// 继承之前 加上关键字 virtual 变为虚继承
//此时公共的父类Animal称为虚基类
// 羊类
class Sheep :virtual public Animal {};

//驼类
class Tuo :virtual public Animal {};

//羊驼类
class SheepTuo :public Sheep, public Tuo {};


void test01() {
	SheepTuo st;

	st.Sheep::Age = 18;
	st.Tuo::Age = 28;

	cout << "st.Sheep::Age =" << st.Sheep::Age << endl;
	cout << "st.Tuo::Age =" << st.Tuo::Age << endl;
	cout << "st.Age =" << st.Age << endl;
}

// vbptr 虚基类指针
// 菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
// 利用虚继承可以解决菱形继承问题
int main() {

	test01();

	system("pause");

	return 0;
}