#include<iostream>  
using namespace std;
#include "speechManager.h"
#include <ctime>

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建管理类对象
	SpeechManager sm;

	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "选手编号：" << it->first << " 姓名: " << it->second.m_Name << " 分数: " << it->second.m_Score[0] << endl;
	//}

	int choice = 0; //存储用户选项

	while (true) {
		sm.show_Menu(); //显示菜单

		cout << "请输入您的选择: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: // 开始比赛
			sm.startSpeech();
			break;
		case 2:	// 查看往届记录
			sm.showRecord();
			break;
		case 3:	// 清空比赛记录
			sm.clearRecord();
			break;
		case 0:	// 退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;

}