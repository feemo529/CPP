//#include <iostream>
//using namespace std;
//
//// 类做友元
//
//class Building;
//class GoodGay {
//public:
//
//	GoodGay();
//
//	void visit(); // 参观函数 访问Building中的属性
//
//	Building* building;
//};
//
//class Building {
//	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//};
//
//// 类外写成员函数
//Building::Building() {
//	this->SittingRoom = "客厅";
//	this->BedRoom = "卧室";
//}
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
//void GoodGay::visit() {
//	cout << "好基友正在访问:" << building->SittingRoom << endl;
//	cout << "好基友正在访问:" << building->BedRoom << endl;
//}
//
//void test01() {
//	GoodGay gg;
//	gg.visit();
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