#include "speechManager.h"

//构造函数
SpeechManager::SpeechManager() {
	//初始化容器属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();
}

void SpeechManager::show_Menu() {
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech() {
	//初始容器属性
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	//初始比赛轮数
	this->m_Index = 1;
}

void SpeechManager::createSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//12名选手编号
		this->v1.push_back(i + 10001);

		//选手编号 以及对应的选手 存放到map容器中
		this->m_Speaker.insert(pair<int, Speaker>(i + 10001, sp));
	}
}

void SpeechManager::startSpeech() {
	//第一轮比赛
	//1、抽签
	speechDraw();

	//2、比赛
	speechContest();

	//3、显示晋级赛
	showScore();

	//第二轮比赛
	this->m_Index++;
	//1、抽签
	speechDraw();

	//2、比赛
	speechContest();

	//3、显示最终结果
	showScore();

	//4、保存分数
	saveRecord();
	//重置比赛,获取记录
	//初始化属性
	this->initSpeech();

	//创建选手
	this->createSpeaker();

	//获取往届记录
	this->loadRecord();

	cout << "本届比赛完毕！" << endl;
	system("pause");
	system("cls");

}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第 << " << this->m_Index << " >> 轮比赛选手正在抽签" << endl;
	cout << "--------------------------" << endl;
	cout << "抽签后演讲顺序如下: " << endl;

	if (this->m_Index == 1) {
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;
	}
	else {
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for (int i = 0; i < v2.size(); i++)
		{
			cout << v2[i] << " ";
		}
		cout << endl;
	}
	cout << "--------------------------" << endl;
	system("pause");
	cout << endl;
}

//比赛
void SpeechManager::speechContest() {
	cout << "------------- 第" << this->m_Index << "轮正式比赛开始：------------- " << endl;

	multimap<double, int, greater<double>> groupScroe; // 临时容器，保存key分数，value 选手编号

	int num = 0; // 记录人员数，6个为1组

	vector <int> v_Src; //比赛人员容器
	if (this->m_Index == 1) {
		v_Src = this->v1;
	}
	else {
		v_Src = this->v2;
	}

	//遍历所有参赛选手
	for (int i = 0; i < v_Src.size(); i++)
	{
		num++;

		//评委打分
		deque<double> d;
		for (int j = 0; j < 10; j++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			d.push_back(score);
		}

		sort(d.begin(), d.end(), greater<double>());
		d.pop_front(); // 去掉最高分
		d.pop_back(); // 去掉最低分

		double sum = accumulate(d.begin(), d.end(), 0.0f); // 获取平均分
		double avg = sum / (double)d.size(); // 获取平均分

		//每个人平均分
		//cout << "编号" << v_Src[i] << " 选手: " << this->m_Speaker[v_Src[i]].m_Name << " 获取平均分为: " << avg << endl; //打印分数
		this->m_Speaker[v_Src[i]].m_Score[this->m_Index - 1] = avg;

		//6个人一组，用临时容器保存
		groupScroe.insert(make_pair(avg, v_Src[i]));
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次: " << endl;
			for (auto n : groupScroe) {
				cout << "编号: " << n.second << " 姓名: " << this->m_Speaker[n.second].m_Name
					<< " 成绩: " << this->m_Speaker[n.second].m_Score[this->m_Index - 1] << endl;
			}

			int count = 0;
			//取前三名
			for (multimap<double, int, greater<double>>::iterator it = groupScroe.begin(); it != groupScroe.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else {
					vVictory.push_back((*it).second);
				}
			}

			groupScroe.clear();

			cout << endl;
		}
	}
	cout << "------------- 第" << this->m_Index << "轮比赛完毕  ------------- " << endl;
	system("pause");
}

//晋级
void SpeechManager::showScore() {

	vector<int> v;
	if (this->m_Index == 1)
	{
		cout << "--------- 第" << this->m_Index << "轮晋级选手信息如下：-----------" << endl;
		v = v2;
	}
	else {
		cout << "--------- 最终结果如下：-----------" << endl;
		v = vVictory;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << "选手编号: " << v[i] << " 姓名: " << m_Speaker[v[i]].m_Name << " 得分: " << m_Speaker[v[i]].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_Menu();
}

//保存分数
void SpeechManager::saveRecord() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); // 用输出得方式打开文件， 写文件

	//将每个人数写入到文件中
	for (int i = 0; i < vVictory.size(); i++)
	{
		ofs << vVictory[i] << "," << m_Speaker[vVictory[i]].m_Score[1] << ",";
	}
	ofs << endl;

	//关闭文件
	ofs.close();

	cout << "记录已经保存" << endl;

	this->fileIsEmpty = false;
}

//读取记录
void SpeechManager::loadRecord() {
	ifstream ifs("speech.csv", ios::in); // 输入流对象

	//文件不存在情况
	if (!ifs.is_open()) {
		this->fileIsEmpty = true;
		//cout << "文件不存在!" << endl;
		ifs.close();
		return;
	}

	//文件清空情况
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空!" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	this->fileIsEmpty = false;

	ifs.putback(ch); // 读取得单个字符放回去

	string data;
	int index = 0;

	while (ifs >> data) {
		//cout << data << endl;
		vector<string>v; //存放6个string字符串

		int pos = -1; //查找","位置得变量
		int start = 0;

		while (true) {
			pos = data.find(",", start);
			if (pos == -1) {
				//没有找到情况
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record[index] = v;
		index++;
	}

	ifs.close();
	//for (auto n : m_Record) {
	//	cout << "第<< " << n.first << " >>届" << "冠军编号: " << n.second[0] << " 分数: " << n.second[1] << endl;
	//}
}

//查看记录
void SpeechManager::showRecord() {
	if (this->fileIsEmpty) {
		cout << "文件不存在，或记录为空！" << endl;
	}
	else {
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届 " <<
				"冠军编号: " << this->m_Record[i][0] << " 得分: " << this->m_Record[i][1] << " "
				"亚军编号: " << this->m_Record[i][2] << " 得分: " << this->m_Record[i][3] << " "
				"季军编号: " << this->m_Record[i][4] << " 得分: " << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}

//清空记录
void SpeechManager::clearRecord() {
	cout << "确认清空? " << endl;
	cout << "1、确认 " << endl;
	cout << "2、取消 " << endl;

	int select = 0;
	cin >> select;

	if (select == 1) {
		//打开模式 ios::trunc 如果存在删除文件并重新创建
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//初始化属性
		this->initSpeech();

		//创建选手
		this->createSpeaker();

		//获取往届记录
		this->loadRecord();

		cout << "清空成功! " << endl;
	}

	system("pause");
	system("cls");
}

//析构函数
SpeechManager::~SpeechManager() {

}