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
		//����Ա�˵�
		manager->operMenu();

		//������ָ��תΪ����ָ�룬���������������нӿ�
		Manager* man = (Manager*)manager; // ???

		int select = 0;
		cin >> select;

		if (select == 1) {
			//cout << "����˺�" << endl;
			man->addPerson();
		}
		else if (select == 2) {
			//cout << "�鿴�˺�" << endl;
			man->showPerson();
		}
		else if (select == 3) {
			//cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if (select == 4) {
			//cout << "���ԤԼ" << endl;
			man->clearFile();
		}
		else {
			//ע��
			delete manager; // ���ٶ�������
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void StudentMenu(Identity*& student) {
	while (true) {
		//ѧ���˵�
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
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void TeacherMenu(Identity*& teacher) {
	while (true) {
		//��ʦ�˵�
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
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void LoginIn(string fileName, int type) {
	Identity* person = NULL; // ����ָ�룬����ָ���������

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ļ����������
	if (!ifs.is_open()) {
		cout << "�ļ�������!" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) {
		cout << "���������ѧ��: ";
		cin >> id;
	}
	else if (type == 2) {
		cout << "���������ְ����: ";
		cin >> id;
	}

	cout << "�������û���: ";
	cin >> name;

	cout << "����������: ";
	cin >> pwd;

	if (type == 1) {
		//ѧ����֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "ѧ����֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//����ѧ���Ӳ˵�
				StudentMenu(person);
				return;
			}
		}
	}
	else if (type == 2) {
		//��ʦ��֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "��ʦ��֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//�����ʦ�Ӳ˵�
				TeacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3) {
		//����Ա
		string fName;
		string fPwd;
		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd) {
				cout << "����Ա��֤��¼�ɹ�!" << endl;
				//��¼�ɹ�����������������Ա����
				system("pause");
				system("cls");
				//��������Ա����
				person = new Manager(name, pwd);
				ManagerMenu(person);
				return;
			}
		}
	}

	cout << "��֤��¼ʧ��" << endl;

	system("pause");
	system("cls");

	return;
}

int main()
{
	int select = 0; //����ѡ��
	while (true) {
		cout << "==========================  ��ӭ��������ԤԼϵͳ  ==========================" << endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t --------------------------------- \n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    1.ѧ������\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    2.��    ʦ\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    3.�� �� Ա\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t|\t    0.��    ��\t\t  |\n";
		cout << "\t\t|\t\t\t\t  |\n";
		cout << "\t\t --------------------------------- \n";
		cout << "����������ѡ��: ";

		cin >> select;

		switch (select)
		{
		case 1: // ѧ��
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2: // ��ʦ
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3: // ����Ա
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0: // �˳�
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");

			break;
		}
	}

	system("pause");

	return 0;

}