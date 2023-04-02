#include "manager.h"

Manager::Manager() {

}

Manager::Manager(string name, string pwd) {
	this->m_Name = name;
	this->m_Pwd = pwd;

	//��ʼ������
	this->initVector();

	//��ȡ������Ϣ
	ifstream ifs;

	ifs.open(COMPUTER_FLIE, ios::in);

	ComputerRoom c;
	while (ifs >> c.m_ComId && ifs >> c.m_MaxNum) {
		vCom.push_back(c);
	}
	cout << "��ǰ��������Ϊ: " << vCom.size() << endl;

	ifs.close();
}

//�˵�ҳ��
void Manager::operMenu() {
	cout << "��ӭ����Ա: " << this->m_Name << "��¼��" << endl;
	cout << "\t\t --------------------------------- \n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    1.����˺�\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    2.�鿴�˺�\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    3.�鿴����\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    4.���ԤԼ\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    0.ע����¼\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t --------------------------------- \n";
	cout << "���������ò���: ";
}

//����˺�
void Manager::addPerson() {
	cout << "����������˺ŵ�����" << endl;
	cout << "1�����ѧ��" << endl;
	cout << "2�������ʦ" << endl;

	string fileName;
	string tip;
	string errorTip;
	ofstream ofs;

	int select = 0;
	cin >> select;

	if (select == 1) {
		fileName = STUDENT_FILE;
		tip = "������ѧ��: ";
		errorTip = "ѧ���ظ�,����������: ";
	}
	else {
		fileName = TEACHER_FILE;
		tip = "������ְ����: ";
		errorTip = "ְ�����ظ�,����������: ";
	}

	ofs.open(fileName, ios::out | ios::app);
	int id = 0;
	string name;
	string pwd;

	cout << tip << endl;
	//����ظ�ѧ��
	while (true)
	{
		cin >> id;

		if (checkRepeat(id, select)) {

			cout << errorTip << endl;
		}
		else {
			break;
		}
	}
	cout << "����������: " << endl;
	cin >> name;
	cout << "����������: " << endl;
	cin >> pwd;

	//���ļ���д������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�" << endl;

	system("pause");
	system("cls");

	ofs.close();

	this->initVector();//���ó�ʼ���ӿڣ����»�ȡ�ļ��е�����
}

void printStudent(Student& s) {
	cout << "ѧ��: " << s.m_Id << " ����: " << s.m_Name << " ����: " << s.m_Pwd << endl;
}

void printTeacher(Teacher& t) {
	cout << "ְ����: " << t.m_empId << " ����: " << t.m_Name << " ����: " << t.m_Pwd << endl;
}

//�鿴�˺�
void Manager::showPerson() {
	cout << "��ѡ��鿴����: " << endl;
	cout << "1���鿴����ѧ��" << endl;
	cout << "2���鿴������ʦ" << endl;

	int select = 0;

	cin >> select;

	if (select == 1) {
		cout << "����ѧ����Ϣ����: " << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	}
	else {
		cout << "������ʦ��Ϣ����: " << endl;
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}

	system("pause");
	system("cls");
}

//�鿴������Ϣ
void Manager::showComputer() {
	cout << "������Ϣ����: " << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << "�������: " << vCom[i].m_ComId << " �����������:" << vCom[i].m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}

//�������ԤԼ��¼
void Manager::clearFile() {
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::trunc);

	cout << "��ճɹ�!" << endl;
	system("pause");
	system("cls");
}

//��ʼ������
void Manager::initVector() {
	vStu.clear();
	vTea.clear();

	//��ȡѧ���ļ���Ϣ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd) {
		vStu.push_back(s);
	}
	cout << "��ǰѧ������Ϊ: " << vStu.size() << endl;
	ifs.close();

	//��ȡ��ʦ��Ϣ
	ifs.open(TEACHER_FILE, ios::in);

	Teacher t;
	while (ifs >> t.m_empId && ifs >> t.m_Name && ifs >> t.m_Pwd) {
		vTea.push_back(t);
	}
	cout << "��ǰ��ʦ����Ϊ: " << vTea.size() << endl;

	ifs.close();
}

//����ظ�ѧ��
bool Manager::checkRepeat(int id, int type) {
	if (type == 1) {
		for (int i = 0; i < vStu.size(); i++)
		{
			if (id == vStu[i].m_Id) {
				return true;
			}
		}
	}
	else {
		for (int i = 0; i < vTea.size(); i++)
		{
			if (id == vTea[i].m_empId) {
				return true;
			}
		}
	}
	return false;
}