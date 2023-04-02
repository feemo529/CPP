#pragma once	// 防止头文件重复
#include <iostream> // 包含输入输出流
using namespace std; // 使用标准命名空间
#include "worker.h"
#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	WorkerManager();

	// 展示菜单
	void Show_Menu();

	// 退出功能
	void exitSystem();

	// 增加职工
	void AddEmp();

	//保存文件
	void save();

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void show_Emp();

	//删除职工
	void del_Emp();

	//按照职工编号判断职工是否存在，若存在返回职工在数组中位置，不存在返回-1
	int isExist(int id);

	//修改职工
	void mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void sort_Emp();

	//清空文件
	void clean_File();

	~WorkerManager();

	//记录文件中的人数个数
	int	m_EmpNum;

	//员工数组的指针
	Worker** m_EmpArray;

	// 标志文件是否为空
	bool m_FileIsEmpty;
};