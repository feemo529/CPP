#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "worker.h"

WorkerManager::WorkerManager() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1、文件不存在情况
	if (!ifs.is_open()) {
		//cout << "文件不存在" << endl;
		this->m_EmpNum = 0;	//初始化人数
		this->m_EmpArray = NULL; //初始化数组指针
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2、文件存在但内容为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//cout << "文件为空！" << endl;
		this->m_EmpNum = 0;	//初始化人数
		this->m_EmpArray = NULL; //初始化数组指针
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 3、文件存在，并且记录数据
	int num = this->get_EmpNum();
	cout << "职工个数为: " << num << endl; // 测试代码
	this->m_EmpNum = num; // 更新成员属性

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件中数据存到数组中
	this->init_Emp();

	//测试
	//for (int i = 0; i < this->m_EmpNum; i++) {
	//	cout << "职工号： " << this->m_EmpArray[i]->m_id
	//		<< " 职工姓名： " << this->m_EmpArray[i]->m_Name
	//		<< " 部门编号： " << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

WorkerManager::~WorkerManager() {
	if (this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

void WorkerManager::Show_Menu() {
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::AddEmp() {
	cout << "请输入增加职工数量：" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0) {
		//计算新空间大小
		//新空间人数 = 原来记录人数 + 新增人数
		int newSize = this->m_EmpNum + addNum;

		//开辟新空间
		Worker** newSpace = new Worker * [newSize];

		//将原来空间下数据，拷贝到新空间下
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < addNum; i++) {
			int id;// 职工编号
			string name; // 职工姓名
			int dSelect; // 部门

			cout << "请输入第" << i + 1 << "个新职工编号: " << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工姓名: " << endl;
			cin >> name;

			cout << "请输入该职工岗位： " << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			}
			//将创建的职工职责，保存到数组中
			newSpace[this->m_EmpNum + i] = worker;

		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间指向
		this->m_EmpArray = newSpace;

		//更新新职工人数
		this->m_EmpNum = newSize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		// 提示添加成功
		cout << "成功添加" << addNum << "名新职工" << endl;

		//保存到文件中
		this->save();

	}
	else {
		cout << "输入数据有误" << endl;
	}

	//
	system("pause");
	system("cls");
}

void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++) {
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << " " << endl;
	}

	ofs.close();
}

int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		// 记录人数
		num++;
	}
	ifs.close();

	return num;
}

void WorkerManager::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		Worker* worker = NULL;
		//根据
		if (dId == 1) {
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) {
			worker = new Manager(id, name, dId);
		}
		else {
			worker = new Boss(id, name, dId);
		}

		//存放在数组中
		this->m_EmpArray[index] = worker;
		index++;
	}

	ifs.close();
}

void WorkerManager::show_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或者内容为空" << endl;
	}
	else {
		for (int i = 0; i < this->m_EmpNum; i++) {
			//利用多态调用接口
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::del_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	}
	else {
		//按照职工编号删除
		cout << "请输入想要删除职工编号" << endl;
		int id = 0;
		cin >> id;

		int index = this->isExist(id);
		if (index != -1) {
			for (int i = index; i < this->m_EmpNum - 1; i++) {
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save();
			cout << "删除成功！" << endl;
		}
		else {
			cout << "删除失败，未找到该职工" << endl;
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::isExist(int id) {
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++) {
		if (this->m_EmpArray[i]->m_id == id) {
			index = i;
			break;
		}
	}
	return index;
}

void WorkerManager::mod_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	}
	else {
		cout << "请输入想要修改职工编号" << endl;
		int id = 0;
		cin >> id;

		int index = this->isExist(id);
		if (index != -1) {
			delete this->m_EmpArray[index];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到：" << id << "号职工，请输入新职工号：" << endl;
			cin >> newId;

			cout << "请输入姓名：" << endl;
			cin >> newName;

			cout << "请输入该职工岗位： " << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			}

			this->m_EmpArray[index] = worker;

			cout << "修改成功!" << this->m_EmpArray[index]->m_DeptId << endl;

			this->save();

		}
		else {
			cout << "修改失败，未找到该职工" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	}
	else {

		cout << "请输入查找的方式: " << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按姓名查找" << endl;

		int select = 0;
		cin >> select;

		if (select == 1) {
			cout << "请输入想要查找的职工编号" << endl;
			int id = 0;
			cin >> id;

			int index = this->isExist(id);
			if (index != -1) {
				this->m_EmpArray[index]->showInfo();
			}
			else {
				cout << "查找失败，未找到该职工" << endl;
			}
		}
		else if (select == 2) {
			string name = "";
			cout << "请输入查找的姓名: " << endl;
			cin >> name;

			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name) {
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (!flag) {
				cout << "查找失败，未找到该职工" << endl;
			}
		}
		else {
			cout << "输入选项有误" << endl;
		}

	}

	system("pause");
	system("cls");
}

void WorkerManager::sort_Emp() {
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式： " << endl;
		cout << "1、按职工号进行升序" << endl;
		cout << "2、按职工号进行降序" << endl;

		int select = 0;
		cin >> select;


		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1) //升序
				{
					if (m_EmpArray[minOrMax]->m_id > m_EmpArray[j]->m_id)
					{
						minOrMax = j;
					}
				}
				else  //降序
				{
					if (m_EmpArray[minOrMax]->m_id < m_EmpArray[j]->m_id)
					{
						minOrMax = j;
					}
				}
			}

			if (i != minOrMax)
			{
				Worker* temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}

		}

		cout << "排序成功,排序后结果为：" << endl;
		this->save();
		this->show_Emp();
	}

}

void WorkerManager::clean_File() {
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1) {
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i] != NULL) {
					delete m_EmpArray[i];

				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}