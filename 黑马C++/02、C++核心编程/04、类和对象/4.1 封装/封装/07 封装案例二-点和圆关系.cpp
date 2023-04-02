#include<iostream>
#include "circle.h"
#include "point.h"
using namespace std;


//// 点类
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//
//	int getX()
//	{
//		return m_X;
//	}
//
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

// 圆类
//class Circle
//{
//public:
//	// 设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	// 设置圆心
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//
//	int m_R;
//	// 在类中可以让另一个类 作为本类中的成员
//	Point m_Center; // 圆心
//};

//判断点和圆类关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点距离
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	// 计算半径
	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	// 创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//cout << "圆心坐标为：" << c.getCenter() << endl;

	// 创建点
	Point p;
	p.setX(10);
	p.setY(9);

	isInCircle(c, p);
	system("pause");

	return 0;
}