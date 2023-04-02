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

	// 实例化管理者对象
	WorkerManager wm;

	int choice = 0; // 存储用户选项
	while (true) {
		// 调用展示菜单
		wm.Show_Menu();
		cout << "请输入您的选择" << endl;
		cin >> choice; // 记录选项

		switch (choice) {
		case 0: //退出系统
			wm.exitSystem();
			break;
		case 1: //添加职工
			wm.AddEmp();
			break;
		case 2: //显示职工
			wm.show_Emp();
			break;
		case 3: //删除职工
			wm.del_Emp();
			break;
		case 4: //修改职工
			wm.mod_Emp();
			break;
		case 5: //查找职工
			wm.Find_Emp();
			break;
		case 6: //排序职工
			wm.sort_Emp();
			break;
		case 7: //清空文件
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

