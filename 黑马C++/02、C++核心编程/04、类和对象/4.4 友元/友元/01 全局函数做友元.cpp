//#include <iostream>
//using namespace std;
//
//class Building {
//	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽�г�Ա
//	friend void goodGay(Building& building);
//public:
//	Building() {
//		this->SittingRoom = "����";
//		this->BedRoom = "����";
//	}
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//};
//
//// ȫ�ֺ���
//void goodGay(Building& building) {
//	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ���: " << building.SittingRoom << endl;
//
//	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ���: " << building.BedRoom << endl;
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