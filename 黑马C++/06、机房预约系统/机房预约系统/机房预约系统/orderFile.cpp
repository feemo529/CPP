#include "orderFile.h"



void search(string& s, map<string, string>& m) {
	string key;
	string value;
	int pos = s.find(":");
	if (pos != -1)
	{
		key = s.substr(0, pos);
		value = s.substr(pos + 1, s.size() - pos);
		m[key] = value;
	}
}


//构造函数
OrderFile::OrderFile() {
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;
	string interval;
	string stuId;
	string stuName;
	string roomId;
	string status;

	this->m_Size = 0;  //预约记录个数

	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status) {
		//cout << date << endl;
		//cout << interval << endl;
		//cout << stuId << endl;
		//cout << stuName << endl;
		//cout << roomId << endl;
		//cout << status << endl;

		map<string, string> m;

		search(date, m);
		search(interval, m);
		search(stuId, m);
		search(stuName, m);
		search(roomId, m);
		search(status, m);

		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();

	//for (auto i : m_orderData) {
	//	cout << "key = " << i.first << " value = ";
	//	for (auto j : i.second) {
	//		cout << j.first << " " << j.second << " ";
	//	}
	//	cout << endl;
	//}

}

//更新预约记录 
void OrderFile::updateOrder() {
	if (this->m_Size == 0)
	{
		return;
	}
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::out || ios::trunc);
	for (int i = 0; i < this->m_Size; ++i)
	{
		ofs << "date:" << this->m_orderData[i]["date"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << endl;
	}

}
