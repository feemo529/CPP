#include "employee.h"

Employee::Employee(int id, string name, int DeptId) {
	this->m_id = id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

void Employee::showInfo() {
	cout << "职工编号: " << this->m_id
		<< "\t职工姓名: " << this->m_Name
		<< "\t岗位: " << this->getDeptName()
		<< "\t岗位职责: 完成经理交给的需求" << endl;
}

string Employee::getDeptName() {
	return string("员工");
}