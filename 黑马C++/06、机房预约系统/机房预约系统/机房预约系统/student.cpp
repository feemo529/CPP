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
	cout << "当前机房数量为: " << vCom.size() << endl;
	ifs.close();
}

//菜单页面
void Student::operMenu() {
	cout << "欢迎学生: " << this->m_Name << "登录！" << endl;
	cout << "\t\t --------------------------------- \n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    1.申请预约\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    2.查看我的预约\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    3.查看所有预约\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    4.取消预约\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t|\t    0.注销登录\t\t  |\n";
	cout << "\t\t|\t\t\t\t  |\n";
	cout << "\t\t --------------------------------- \n";
	cout << "请输入您得操作: ";
}

//申请预约
void Student::applyOrder() {
	cout << "机房开放时间为周一至周五!" << endl;
	cout << "请输入申请预约的时间: " << endl;
	cout << "1、周一" << endl;
	cout << "2、周二" << endl;
	cout << "3、周三" << endl;
	cout << "4、周四" << endl;
	cout << "5、周五" << endl;

	int date = 0;
	int interval = 0;
	int room = 0;

	while (true) {
		cin >> date;
		if (date >= 1 && date <= 5) {
			break;
		}
		cout << "输入有误,请重新输入" << endl;
	}

	cout << "请输入申请预约的时间段: " << endl;
	cout << "1、上午" << endl;
	cout << "2、下午" << endl;

	while (true) {
		cin >> interval;
		if (interval >= 1 && interval <= 2) {
			break;
		}
		cout << "输入有误,请重新输入" << endl;
	}

	cout << "请选择机房: " << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_ComId << "号机房容量为: " << vCom[i].m_MaxNum << endl;
	}

	while (true) {
		cin >> room;
		if (room >= 1 && room <= 3) {
			break;
		}
		cout << "输入有误,请重新输入" << endl;
	}

	cout << "预约成功！审核中" << endl;

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

//查看我的预约
void Student::showMyOrder() {
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		//string 转 int
		//string 利用 .c_str() 转 const char *
		//利用 atoi (const char *) 转 int
		if (atoi(of.m_orderData[i]["stuId"].c_str()) == this->m_Id) {
			cout << "预约日期: 周" << of.m_orderData[i]["date"];
			cout << "， 时段: " << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
			cout << "， 机房: " << of.m_orderData[i]["roomId"];
			string status = "， 状态: ";
			if (of.m_orderData[i]["status"] == "1") {
				status += "审核中。";
			}
			else if (of.m_orderData[i]["status"] == "2") {
				status += "已预约。";
			}
			else if (of.m_orderData[i]["status"] == "-1") {
				status += "审核未通过,预约失败。";
			}
			else {
				status += "预约已取消。";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}

//查看所有预约
void Student::showAllOrder() {
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "、";
		cout << "预约日期: 周" << of.m_orderData[i]["date"];
		cout << "， 时段: " << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
		cout << "， 学号: " << of.m_orderData[i]["stuId"];
		cout << "， 姓名: " << of.m_orderData[i]["stuName"];
		cout << "， 机房: " << of.m_orderData[i]["roomId"];
		string status = "， 状态: ";
		if (of.m_orderData[i]["status"] == "1") {
			status += "审核中。";
		}
		else if (of.m_orderData[i]["status"] == "2") {
			status += "已预约。";
		}
		else if (of.m_orderData[i]["status"] == "-1") {
			status += "审核未通过,预约失败。";
		}
		else {
			status += "预约已取消。";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//取消预约
void Student::cancelOrder() {
	OrderFile ord;
	if (ord.m_Size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "预约成功和审核中的记录可以取消，请输入要取消的记录" << endl;
	vector<int>v;//存放最大容器里满足条件的下标编号
	int index = 1;
	for (int i = 0; i < ord.m_Size; i++)
	{
		//先判断是否是自身学号
		if (this->m_Id == atoi(ord.m_orderData[i]["stuId"].c_str()))
		{
			//预约成功/审核中的可以取消
			if (ord.m_orderData[i]["status"] == "1" || ord.m_orderData[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "、";
				cout << "预约日期：周" << ord.m_orderData[i]["date"] << " ";
				cout << "预约时间段：" << (ord.m_orderData[i]["interval"] == "1" ? "上午" : "下午") << " ";
				cout << "机房号：" << ord.m_orderData[i]["roomId"] << " ";
				cout << "学号：" << ord.m_orderData[i]["stuId"] << " ";
				cout << "姓名：" << ord.m_orderData[i]["stuName"] << " ";

				string status = "预约状态：";
				if (ord.m_orderData[i]["status"] == "1")
				{
					status += "审核中";
				}
				else if (ord.m_orderData[i]["status"] == "2")
				{
					status += "预约成功";
				}

				cout << status << endl;
			}
		}
	}

	cout << "请输入要取消的记录，0代表返回: ";
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
				cout << "已取消预约" << endl;

				break;
			}
		}

	}

	system("pause");
	system("cls");
}
