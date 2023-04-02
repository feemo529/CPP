#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include "orderFile.h"

//教师类
class Teacher :public Identity {
public:
	Teacher();

	Teacher(int empId, string name, string pwd);

	virtual void operMenu();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void vaildOrder();

	//教师编号
	int m_empId;
};