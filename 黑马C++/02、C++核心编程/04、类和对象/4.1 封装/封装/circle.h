#pragma once
#include<iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	// ���ð뾶
	void setR(int r);

	int getR();

	// ����Բ��
	void setCenter(Point Center);

	Point getCenter();


private:

	int m_R;
	// �����п�������һ���� ��Ϊ�����еĳ�Ա
	Point m_Center; // Բ��
};