#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include "orderFile.h"

//��ʦ��
class Teacher :public Identity {
public:
	Teacher();

	Teacher(int empId, string name, string pwd);

	virtual void operMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void vaildOrder();

	//��ʦ���
	int m_empId;
};