#pragma once
#include<iostream>  
using namespace std;
#include <vector>
#include <map>
#include <deque>
#include "speaker.h"
#include <algorithm>
#include <numeric>
#include <fstream>

//设计演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	//菜单功能
	void show_Menu();

	//退出
	void exitSystem();

	//初始化属性
	void initSpeech();

	//创建选手
	void createSpeaker();

	//开始比赛 - 比赛流程控制
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示得分
	void showScore();

	//保存分数
	void saveRecord();

	//读取记录
	void loadRecord();

	//查看记录
	void showRecord();

	//清空记录
	void clearRecord();

	//析构函数
	~SpeechManager();

	vector<int>v1; //比赛容器 12人
	vector<int>v2; //第一轮晋级容器 6人
	vector<int>vVictory; //胜利容器 3人

	//存放编号 以及对应 的具体选手 容器
	map<int, Speaker> m_Speaker;

	//记录比赛轮数
	int m_Index;

	//文件为空标志
	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>> m_Record;
};