#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//Ա����
class Employee :public Worker {
public:

	Employee(int id, string name, int DeptId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();
};