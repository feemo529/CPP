#include "teacher.h"

Teacher::Teacher() {

}

Teacher::Teacher(int empId, string name, string pwd) {
	this->m_empId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//�˵�ҳ��
void Teacher::operMenu() {
	cout << "��ӭ��ʦ: " << this->m_Name << "��¼��" << endl;
	cout << "\t\t --------------------------------- \n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    1.�鿴����ԤԼ\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    2.���ԤԼ\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    0.ע����¼\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t --------------------------------- \n";
	cout << "���������ò���: ";
}


//�鿴����ԤԼ
void Teacher::showAllOrder() {
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "��";
		cout << "ԤԼ����: ��" << of.m_orderData[i]["date"];
		cout << "�� ʱ��: " << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
		cout << "�� ѧ��: " << of.m_orderData[i]["stuId"];
		cout << "�� ����: " << of.m_orderData[i]["stuName"];
		cout << "�� ����: " << of.m_orderData[i]["roomId"];
		string status = "�� ״̬: ";
		if (of.m_orderData[i]["status"] == "1") {
			status += "����С�";
		}
		else if (of.m_orderData[i]["status"] == "2") {
			status += "��ԤԼ��";
		}
		else if (of.m_orderData[i]["status"] == "-1") {
			status += "���δͨ��,ԤԼʧ�ܡ�";
		}
		else {
			status += "ԤԼ��ȡ����";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//���ԤԼ
void Teacher::vaildOrder() {
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����˵�ԤԼ��¼����: " << endl;
	vector<int>v;
	int index = 0;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderData[i]["status"] == "1") {
			v.push_back(i);
			cout << ++index << "��";
			cout << "ԤԼ����: ��" << of.m_orderData[i]["date"];
			cout << "�� ʱ��: " << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
			cout << "�� ѧ��: " << of.m_orderData[i]["stuId"];
			cout << "�� ����: " << of.m_orderData[i]["stuName"];
			cout << "�� ����: " << of.m_orderData[i]["roomId"];
			string status = "�� ״̬: ";
			if (of.m_orderData[i]["status"] == "1") {
				status += "����С�";
			}
			cout << status << endl;
		}

	}
	cout << "������Ҫ��˵�ԤԼ��¼��0�����أ�";
	int select = 0;
	int ret = 0;
	while (true) {
		cin >> select;
		if (select >= 0 && select <= v.size()) {
			if (select == 0) {
				break;
			}
			else {
				cout << "��������˵Ĳ���: " << endl;
				cout << "1��ԤԼͨ��" << endl;
				cout << "2��ԤԼ��ͨ��" << endl;
				cin >> ret;
				if (ret == 1) {
					of.m_orderData[v[select - 1]]["status"] = "2";
				}
				else if (ret == 2) {
					of.m_orderData[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();
				cout << "������" << endl;
				break;
			}
		}
		cout << "��������,����������" << endl;
	}
	system("pause");
	system("cls");
}
