#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "worker.h"

WorkerManager::WorkerManager() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1���ļ����������
	if (!ifs.is_open()) {
		//cout << "�ļ�������" << endl;
		this->m_EmpNum = 0;	//��ʼ������
		this->m_EmpArray = NULL; //��ʼ������ָ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2���ļ����ڵ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//cout << "�ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;	//��ʼ������
		this->m_EmpArray = NULL; //��ʼ������ָ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 3���ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ: " << num << endl; // ���Դ���
	this->m_EmpNum = num; // ���³�Ա����

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ������ݴ浽������
	this->init_Emp();

	//����
	//for (int i = 0; i < this->m_EmpNum; i++) {
	//	cout << "ְ���ţ� " << this->m_EmpArray[i]->m_id
	//		<< " ְ�������� " << this->m_EmpArray[i]->m_Name
	//		<< " ���ű�ţ� " << this->m_EmpArray[i]->m_DeptId << endl;
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
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::AddEmp() {
	cout << "����������ְ��������" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0) {
		//�����¿ռ��С
		//�¿ռ����� = ԭ����¼���� + ��������
		int newSize = this->m_EmpNum + addNum;

		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		//��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//���������
		for (int i = 0; i < addNum; i++) {
			int id;// ְ�����
			string name; // ְ������
			int dSelect; // ����

			cout << "�������" << i + 1 << "����ְ�����: " << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ������: " << endl;
			cin >> name;

			cout << "�������ְ����λ�� " << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
			//��������ְ��ְ�𣬱��浽������
			newSpace[this->m_EmpNum + i] = worker;

		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ�ָ��
		this->m_EmpArray = newSpace;

		//������ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		// ��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ��" << endl;

		//���浽�ļ���
		this->save();

	}
	else {
		cout << "������������" << endl;
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
		// ��¼����
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
		//����
		if (dId == 1) {
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) {
			worker = new Manager(id, name, dId);
		}
		else {
			worker = new Boss(id, name, dId);
		}

		//�����������
		this->m_EmpArray[index] = worker;
		index++;
	}

	ifs.close();
}

void WorkerManager::show_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ�������Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < this->m_EmpNum; i++) {
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::del_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else {
		//����ְ�����ɾ��
		cout << "��������Ҫɾ��ְ�����" << endl;
		int id = 0;
		cin >> id;

		int index = this->isExist(id);
		if (index != -1) {
			for (int i = index; i < this->m_EmpNum - 1; i++) {
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save();
			cout << "ɾ���ɹ���" << endl;
		}
		else {
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else {
		cout << "��������Ҫ�޸�ְ�����" << endl;
		int id = 0;
		cin >> id;

		int index = this->isExist(id);
		if (index != -1) {
			delete this->m_EmpArray[index];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽��" << id << "��ְ������������ְ���ţ�" << endl;
			cin >> newId;

			cout << "������������" << endl;
			cin >> newName;

			cout << "�������ְ����λ�� " << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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

			cout << "�޸ĳɹ�!" << this->m_EmpArray[index]->m_DeptId << endl;

			this->save();

		}
		else {
			cout << "�޸�ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else {

		cout << "��������ҵķ�ʽ: " << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2������������" << endl;

		int select = 0;
		cin >> select;

		if (select == 1) {
			cout << "��������Ҫ���ҵ�ְ�����" << endl;
			int id = 0;
			cin >> id;

			int index = this->isExist(id);
			if (index != -1) {
				this->m_EmpArray[index]->showInfo();
			}
			else {
				cout << "����ʧ�ܣ�δ�ҵ���ְ��" << endl;
			}
		}
		else if (select == 2) {
			string name = "";
			cout << "��������ҵ�����: " << endl;
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
				cout << "����ʧ�ܣ�δ�ҵ���ְ��" << endl;
			}
		}
		else {
			cout << "����ѡ������" << endl;
		}

	}

	system("pause");
	system("cls");
}

void WorkerManager::sort_Emp() {
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ�� " << endl;
		cout << "1����ְ���Ž�������" << endl;
		cout << "2����ְ���Ž��н���" << endl;

		int select = 0;
		cin >> select;


		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1) //����
				{
					if (m_EmpArray[minOrMax]->m_id > m_EmpArray[j]->m_id)
					{
						minOrMax = j;
					}
				}
				else  //����
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

		cout << "����ɹ�,�������Ϊ��" << endl;
		this->save();
		this->show_Emp();
	}

}

void WorkerManager::clean_File() {
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

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
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}