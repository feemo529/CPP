#include "boss.h"

Boss::Boss(int id, string name, int DeptId) {
	this->m_id = id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

void Boss::showInfo() {
	cout << "ְ�����: " << this->m_id
		<< "\tְ������: " << this->m_Name
		<< "\t��λ: " << this->getDeptName()
		<< "\t��λְ��: ����˾��������" << endl;
}

string Boss::getDeptName() {
	return string("�ܲ�");
}