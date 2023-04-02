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
		worker.name = "员工";
		worker.name += name[i];

		worker.salary = rand() % 10000 + 10000;
		//将员工放入到容器中
		v.push_back(worker);
	}
}

//员工分组
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3;

		//将员工插入到分组中
		m.insert(make_pair(deptId, *it));
	}
}

//分组显示
void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "策划部门: " << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); // 统计具体人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.name
			<< " 薪资: " << pos->second.salary << endl;
	}

	cout << "-----------------------------------------" << endl;
	cout << "美术部门: " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.name
			<< " 薪资: " << pos->second.salary << endl;
	}

	cout << "-----------------------------------------" << endl;
	cout << "研发部门: " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.name
			<< " 薪资: " << pos->second.salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//1、创建员工
	vector<Worker> vWorker;
	createWorker(vWorker);

	//2、员工分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3、分组显示
	showWorkerByGroup(mWorker);

	//测试
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "姓名: " << it->name
	//		<< " 薪资: " << it->salary << endl;
	//}

	system("pause");

	return 0;

}