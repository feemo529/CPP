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

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//�˵�����
	void show_Menu();

	//�˳�
	void exitSystem();

	//��ʼ������
	void initSpeech();

	//����ѡ��
	void createSpeaker();

	//��ʼ���� - �������̿���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�������
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�鿴��¼
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//��������
	~SpeechManager();

	vector<int>v1; //�������� 12��
	vector<int>v2; //��һ�ֽ������� 6��
	vector<int>vVictory; //ʤ������ 3��

	//��ű�� �Լ���Ӧ �ľ���ѡ�� ����
	map<int, Speaker> m_Speaker;

	//��¼��������
	int m_Index;

	//�ļ�Ϊ�ձ�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;
};