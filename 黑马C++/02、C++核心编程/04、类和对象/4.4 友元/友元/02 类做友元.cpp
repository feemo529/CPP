//#include <iostream>
//using namespace std;
//
//// ������Ԫ
//
//class Building;
//class GoodGay {
//public:
//
//	GoodGay();
//
//	void visit(); // �ιۺ��� ����Building�е�����
//
//	Building* building;
//};
//
//class Building {
//	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//};
//
//// ����д��Ա����
//Building::Building() {
//	this->SittingRoom = "����";
//	this->BedRoom = "����";
//}
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
//void GoodGay::visit() {
//	cout << "�û������ڷ���:" << building->SittingRoom << endl;
//	cout << "�û������ڷ���:" << building->BedRoom << endl;
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