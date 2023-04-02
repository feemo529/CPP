#include<iostream>
#include "point.h"
#include "circle.h"
using namespace std;


void Circle::setR(int r)
{
	m_R = r;
}
int Circle::getR()
{
	return m_R;
}
// ÉèÖÃÔ²ĞÄ
void Circle::setCenter(Point Center)
{
	m_Center = Center;
}
Point Circle::getCenter()
{
	return m_Center;
}