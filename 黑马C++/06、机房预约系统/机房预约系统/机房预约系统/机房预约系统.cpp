#include<iostream>  
using namespace std;
#include "identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"
#include "globalFile.h"
#include <fstream>

void ManagerMenu(Identity*& manager) {
	while (true) {
		//管理员菜单
		manager->operMenu();

		//将父类指针转为子类指针，用来调用子类特有接口
		Manager* man = (Manager*)manager; // ???

		int select = 0;
		cin >> select;

		if (select == 1) {
			//cout << "添加账号" << endl;
			man->addPerson();
		}
		else if (select == 2) {
			//cout << "查看账号" << endl;
			man->showPerson();
		}
		else if (select == 3) {
			//cout << "查看机房" << endl;
			man->showComputer();
		}
		else if (select == 4) {
			//cout << "清空预约" << endl;
			man->clearFile();
		}
		else {
			//注销
			delete manager; // 销毁堆区对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void StudentMenu(Identity*& student) {
	while (true) {
		//学生菜单
		student->operMenu();

		Student* stu = (Student*)student;

		int select = 0;
		cin >> select;

		if (select == 1) {
			stu->applyOrder();
		}
		else if (select == 2) {
			stu->showMyOrder();
		}
		else if (select == 3) {
			stu->showAllOrder();
		}
		else if (select == 4) {
			stu->cancelOrder();
		}
		else {
			delete student;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void TeacherMenu(Identity*& teacher) {
	while (true) {
		//教师菜单
		teacher->operMenu();

		Teacher* tea = (Teacher*)teacher;

		int select = 0;
		cin >> select;

		if (select == 1) {
			tea->showAllOrder();
		}
		else if (select == 2) {
			tea->vaildOrder();
		}
		else {
			delete teacher;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void LoginIn(string fileName, int type) {
	Identity* person = NULL; // 父类指针，用来指向子类对象

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//文件不存在情况
	if (!ifs.is_open()) {
		cout << "文件不存在!" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) {
		cout << "请输入你的学号: ";
		cin >> id;
	}
	else if (type == 2) {
		cout << "请输入你的职工号: ";
		cin >> id;
	}

	cout << "请输入用户名: ";
	cin >> name;

	cout << "请输入密码: ";
	cin >> pwd;

	if (type == 1) {
		//学生验证
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "学生验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//进入学生子菜单
				StudentMenu(person);
				return;
			}
		}
	}
	else if (type == 2) {
		//教师验证
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "教师验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//进入教师子菜单
				TeacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3) {
		//管理员
		string fName;
		string fPwd;
		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd) {
				cout << "管理员验证登录成功!" << endl;
				//登录成功，按任意键进入管理员界面
				system("pause");
				system("cls");
				//创建管理员对象
				person = new Manager(name, pwd);
				ManagerMenu(person);
				return;
			}
		}
	}

	cout << "验证登录失败" << endl;

	system("pause");
	system("cls");

	return;
}

int main()
{
	int select = 0; //保存选项
	while (true) {
		cout << "==========================  欢迎来到机房预约系统  ==========================" << endl;
		cout << endl << "请输入您得身份" << endl;
		cout << "\t\t --------------------------------- \n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    1.学生代表\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    2.老    师\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    3.管 理 员\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    0.退    出\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t --------------------------------- \n";
		cout << "请输入您得选择: ";

		cin >> select;

		switch (select)
		{
		case 1: // 学生
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2: // 老师
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3: // 管理员
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0: // 退出
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");

			break;
		}
	}

	system("pause");

	return 0;

}