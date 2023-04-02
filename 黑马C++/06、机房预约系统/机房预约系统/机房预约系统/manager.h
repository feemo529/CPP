#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include "student.h"
#include "teacher.h"
#include "globalFile.h"
#include <fstream>
#include <vector>
#include <algorithm>
#include "computerRoom.h"

class Manager :public Identity {
public:
	Manager();

	Manager(string name, string pwd);

	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void clearFile();

	//��ʼ������
	void initVector();

	//����ظ�
	bool checkRepeat(int id, int type);

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//��������
	vector<ComputerRoom> vCom;
};