#include <iostream>
using namespace std;

#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

void test() {
	Worker* worker = NULL;
	worker->showInfo();
	delete worker;
}

int main() {

	// ʵ���������߶���
	WorkerManager wm;

	int choice = 0; // �洢�û�ѡ��
	while (true) {
		// ����չʾ�˵�
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice; // ��¼ѡ��

		switch (choice) {
		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1: //���ְ��
			wm.AddEmp();
			break;
		case 2: //��ʾְ��
			wm.show_Emp();
			break;
		case 3: //ɾ��ְ��
			wm.del_Emp();
			break;
		case 4: //�޸�ְ��
			wm.mod_Emp();
			break;
		case 5: //����ְ��
			wm.Find_Emp();
			break;
		case 6: //����ְ��
			wm.sort_Emp();
			break;
		case 7: //����ļ�
			wm.clean_File();
			break;
		default:
			system("cls");
			break;
		}

	}
	system("pause");

	return 0;
}

