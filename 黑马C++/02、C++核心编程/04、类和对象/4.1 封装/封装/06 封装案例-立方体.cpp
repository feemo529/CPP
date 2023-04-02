//#include<iostream>
//using namespace std;
//
////设计立方体类
//class Cube
//{
//public:
//	void setLength(int len)
//	{
//		m_L = len;
//	}
//
//	int getLength()
//	{
//		return m_L;
//	}
//	void setWidth(int width)
//	{
//		m_W = width;
//	}
//
//	int geWidth()
//	{
//		return m_W;
//	}
//	void setHeight(int height)
//	{
//		m_H = height;
//	}
//
//	int getHeight()
//	{
//		return m_H;
//	}
//	// 获取面积
//	int getArea()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//获取体积
//	int getVolume()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	// 利用成员函数判断立方体是否相等
//	bool isSameByClass(Cube& c)
//	{
//		if (m_L == c.getLength() && m_W == c.geWidth() && m_H == c.getHeight())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//
//// 利用全局函数判断 两个立方体是否相等
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getLength() == c2.getLength() && c1.geWidth() == c2.geWidth() && c1.getHeight() == c2.getHeight())
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	Cube c1;
//	c1.setLength(10);
//	c1.setHeight(10);
//	c1.setWidth(10);
//
//	cout << "面积为: " << c1.getArea() << endl;
//	cout << "体积为: " << c1.getVolume() << endl;
//
//	Cube c2;
//	c2.setLength(10);
//	c2.setHeight(10);
//	c2.setWidth(10);
//
//	// 利用全局函数判断
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1 和 c2是相等的" << endl;
//
//	}
//	else
//	{
//		cout << "c1 和 c2 不相等" << endl;
//	}
//
//	// 利用成员函数判断
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断: c1 和 c2是相等的" << endl;
//
//	}
//	else
//	{
//		cout << "成员函数判断: c1 和 c2 不相等" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}