#include<iostream>
#include "circle.h"
#include "point.h"
using namespace std;


//// ����
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

// Բ��
//class Circle
//{
//public:
//	// ���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	// ����Բ��
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
//	// �����п�������һ���� ��Ϊ�����еĳ�Ա
//	Point m_Center; // Բ��
//};

//�жϵ��Բ���ϵ
void isInCircle(Circle& c, Point& p)
{
	//�����������
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	// ����뾶
	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	// ����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//cout << "Բ������Ϊ��" << c.getCenter() << endl;

	// ������
	Point p;
	p.setX(10);
	p.setY(9);

	isInCircle(c, p);
	system("pause");

	return 0;
}