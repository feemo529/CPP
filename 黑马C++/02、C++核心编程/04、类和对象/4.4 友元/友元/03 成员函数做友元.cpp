#include <iostream>
using namespace std;

class Building;
class GoodGay {
public:

	GoodGay();

	void visit(); // �ιۺ��� ����Building�е�����
	void visit2(); // ��xisit2���������Է���Building�е�˽�г�Ա

	Building* building;
};

// Building
class Building {
	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
	friend void GoodGay::visit();
public:
	Building();
public:
	string SittingRoom;
private:
	string BedRoom;
};

Building::Building() {
	SittingRoom = "����";
	BedRoom = "����";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "visit �������ڷ���:" << building->SittingRoom << endl;
	cout << "visit �������ڷ���:" << building->BedRoom << endl;
}

void GoodGay::visit2() {
	cout << "visit2 �������ڷ���:" << building->SittingRoom << endl;
	//cout << "visit�������ڷ���:" << building->BedRoom << endl;
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