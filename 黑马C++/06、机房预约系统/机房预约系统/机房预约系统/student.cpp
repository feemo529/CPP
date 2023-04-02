#include "student.h"

Student::Student() {}

Student::Student(int id, string name, string pwd) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

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
void Student::operMenu() {
	cout << "��ӭѧ��: " << this->m_Name << "��¼��" << endl;
	cout << "\t\t --------------------------------- \n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    1.����ԤԼ\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    2.�鿴�ҵ�ԤԼ\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    3.�鿴����ԤԼ\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    4.ȡ��ԤԼ\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    0.ע����¼\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t --------------------------------- \n";
	cout << "���������ò���: ";
}

//����ԤԼ
void Student::applyOrder() {
	cout << "��������ʱ��Ϊ��һ������!" << endl;
	cout << "����������ԤԼ��ʱ��: " << endl;
	cout << "1����һ" << endl;
	cout << "2���ܶ�" << endl;
	cout << "3������" << endl;
	cout << "4������" << endl;
	cout << "5������" << endl;

	int date = 0;
	int interval = 0;
	int room = 0;

	while (true) {
		cin >> date;
		if (date >= 1 && date <= 5) {
			break;
		}
		cout << "��������,����������" << endl;
	}

	cout << "����������ԤԼ��ʱ���: " << endl;
	cout << "1������" << endl;
	cout << "2������" << endl;

	while (true) {
		cin >> interval;
		if (interval >= 1 && interval <= 2) {
			break;
		}
		cout << "��������,����������" << endl;
	}

	cout << "��ѡ�����: " << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_ComId << "�Ż�������Ϊ: " << vCom[i].m_MaxNum << endl;
	}

	while (true) {
		cin >> room;
		if (room >= 1 && room <= 3) {
			break;
		}
		cout << "��������,����������" << endl;
	}

	cout << "ԤԼ�ɹ��������" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);
	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_Id << " ";
	ofs << "stuName:" << this->m_Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();

	system("pause");
	system("cls");
}

//�鿴�ҵ�ԤԼ
void Student::showMyOrder() {
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		//string ת int
		//string ���� .c_str() ת const char *
		//���� atoi (const char *) ת int
		if (atoi(of.m_orderData[i]["stuId"].c_str()) == this->m_Id) {
			cout << "ԤԼ����: ��" << of.m_orderData[i]["date"];
			cout << "�� ʱ��: " << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
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
	}
	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showAllOrder() {
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

//ȡ��ԤԼ
void Student::cancelOrder() {
	OrderFile ord;
	if (ord.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "ԤԼ�ɹ�������еļ�¼����ȡ����������Ҫȡ���ļ�¼" << endl;
	vector<int>v;//�����������������������±���
	int index = 1;
	for (int i = 0; i < ord.m_Size; i++)
	{
		//���ж��Ƿ�������ѧ��
		if (this->m_Id == atoi(ord.m_orderData[i]["stuId"].c_str()))
		{
			//ԤԼ�ɹ�/����еĿ���ȡ��
			if (ord.m_orderData[i]["status"] == "1" || ord.m_orderData[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "��";
				cout << "ԤԼ���ڣ���" << ord.m_orderData[i]["date"] << " ";
				cout << "ԤԼʱ��Σ�" << (ord.m_orderData[i]["interval"] == "1" ? "����" : "����") << " ";
				cout << "�����ţ�" << ord.m_orderData[i]["roomId"] << " ";
				cout << "ѧ�ţ�" << ord.m_orderData[i]["stuId"] << " ";
				cout << "������" << ord.m_orderData[i]["stuName"] << " ";

				string status = "ԤԼ״̬��";
				if (ord.m_orderData[i]["status"] == "1")
				{
					status += "�����";
				}
				else if (ord.m_orderData[i]["status"] == "2")
				{
					status += "ԤԼ�ɹ�";
				}

				cout << status << endl;
			}
		}
	}

	cout << "������Ҫȡ���ļ�¼��0������: ";
	int select = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				ord.m_orderData[v[select - 1]]["status"] = "0";
				ord.updateOrder();
				cout << "��ȡ��ԤԼ" << endl;

				break;
			}
		}

	}

	system("pause");
	system("cls");
}
