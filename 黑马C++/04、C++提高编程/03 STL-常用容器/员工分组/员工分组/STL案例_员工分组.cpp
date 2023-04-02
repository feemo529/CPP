#include<iostream>  
using namespace std;
#include<vector>
#include<map>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string name;
	int	salary;
};

void createWorker(vector<Worker>& v)
{
	string name = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.name = "Ա��";
		worker.name += name[i];

		worker.salary = rand() % 10000 + 10000;
		//��Ա�����뵽������
		v.push_back(worker);
	}
}

//Ա������
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3;

		//��Ա�����뵽������
		m.insert(make_pair(deptId, *it));
	}
}

//������ʾ
void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "�߻�����: " << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); // ͳ�ƾ�������
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.name
			<< " н��: " << pos->second.salary << endl;
	}

	cout << "-----------------------------------------" << endl;
	cout << "��������: " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); // ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.name
			<< " н��: " << pos->second.salary << endl;
	}

	cout << "-----------------------------------------" << endl;
	cout << "�з�����: " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); // ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.name
			<< " н��: " << pos->second.salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//1������Ա��
	vector<Worker> vWorker;
	createWorker(vWorker);

	//2��Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3��������ʾ
	showWorkerByGroup(mWorker);

	//����
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "����: " << it->name
	//		<< " н��: " << it->salary << endl;
	//}

	system("pause");

	return 0;

}