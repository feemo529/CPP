#pragma once
#include<iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	// 设置半径
	void setR(int r);

	int getR();

	// 设置圆心
	void setCenter(Point Center);

	Point getCenter();


private:

	int m_R;
	// 在类中可以让另一个类 作为本类中的成员
	Point m_Center; // 圆心
};