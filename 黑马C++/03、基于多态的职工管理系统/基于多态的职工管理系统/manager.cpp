#include "manager.h"

Manager::Manager(int id, string name, int DeptId) {
	this->m_id = id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

void Manager::showInfo() {
	cout << "ְ�����: " << this->m_id
		<< "\tְ������: " << this->m_Name
		<< "\t��λ: " << this->getDeptName()
		<< "\t��λְ��: ����ϰ彻�������񣬲��·������Ա��" << endl;
}

string Manager::getDeptName() {
	return string("����");
}