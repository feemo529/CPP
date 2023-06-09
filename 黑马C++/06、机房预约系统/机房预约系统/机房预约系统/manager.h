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

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void clearFile();

	//初始化容器
	void initVector();

	//检测重复
	bool checkRepeat(int id, int type);

	//学生容器
	vector<Student> vStu;

	//教师容器
	vector<Teacher> vTea;

	//机房容器
	vector<ComputerRoom> vCom;
};