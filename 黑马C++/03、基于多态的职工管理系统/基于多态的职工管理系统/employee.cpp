#include "employee.h"

Employee::Employee(int id, string name, int DeptId) {
	this->m_id = id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

void Employee::showInfo() {
	cout << "ְ�����: " << this->m_id
		<< "\tְ������: " << this->m_Name
		<< "\t��λ: " << this->getDeptName()
		<< "\t��λְ��: ��ɾ�����������" << endl;
}

string Employee::getDeptName() {
	return string("Ա��");
}