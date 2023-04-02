#pragma once	// ��ֹͷ�ļ��ظ�
#include <iostream> // �������������
using namespace std; // ʹ�ñ�׼�����ռ�
#include "worker.h"
#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	WorkerManager();

	// չʾ�˵�
	void Show_Menu();

	// �˳�����
	void exitSystem();

	// ����ְ��
	void AddEmp();

	//�����ļ�
	void save();

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void show_Emp();

	//ɾ��ְ��
	void del_Emp();

	//����ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ����������λ�ã������ڷ���-1
	int isExist(int id);

	//�޸�ְ��
	void mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void sort_Emp();

	//����ļ�
	void clean_File();

	~WorkerManager();

	//��¼�ļ��е���������
	int	m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;

	// ��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
};