//#include <iostream>
//using namespace std;
//
//class Building {
//	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有成员
//	friend void goodGay(Building& building);
//public:
//	Building() {
//		this->SittingRoom = "客厅";
//		this->BedRoom = "卧室";
//	}
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//};
//
//// 全局函数
//void goodGay(Building& building) {
//	cout << "好基友的全局函数 正在访问: " << building.SittingRoom << endl;
//
//	cout << "好基友的全局函数 正在访问: " << building.BedRoom << endl;
//}
//
//void test01() {
//	Building building;
//	goodGay(building);
//
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