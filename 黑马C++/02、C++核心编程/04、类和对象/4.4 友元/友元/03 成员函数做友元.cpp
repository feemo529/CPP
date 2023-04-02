#include <iostream>
using namespace std;

class Building;
class GoodGay {
public:

	GoodGay();

	void visit(); // 参观函数 访问Building中的属性
	void visit2(); // 让xisit2函数不可以访问Building中的私有成员

	Building* building;
};

// Building
class Building {
	//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
	friend void GoodGay::visit();
public:
	Building();
public:
	string SittingRoom;
private:
	string BedRoom;
};

Building::Building() {
	SittingRoom = "客厅";
	BedRoom = "卧室";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "visit 函数正在访问:" << building->SittingRoom << endl;
	cout << "visit 函数正在访问:" << building->BedRoom << endl;
}

void GoodGay::visit2() {
	cout << "visit2 函数正在访问:" << building->SittingRoom << endl;
	//cout << "visit函数正在访问:" << building->BedRoom << endl;
}



void test01() {
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main() {

	test01();

	system("pause");

	return 0;
}