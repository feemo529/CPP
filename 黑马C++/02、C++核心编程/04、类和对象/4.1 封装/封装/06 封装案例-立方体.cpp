//#include<iostream>
//using namespace std;
//
////�����������
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
//	// ��ȡ���
//	int getArea()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//��ȡ���
//	int getVolume()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	// ���ó�Ա�����ж��������Ƿ����
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
//// ����ȫ�ֺ����ж� �����������Ƿ����
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
//	cout << "���Ϊ: " << c1.getArea() << endl;
//	cout << "���Ϊ: " << c1.getVolume() << endl;
//
//	Cube c2;
//	c2.setLength(10);
//	c2.setHeight(10);
//	c2.setWidth(10);
//
//	// ����ȫ�ֺ����ж�
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1 �� c2����ȵ�" << endl;
//
//	}
//	else
//	{
//		cout << "c1 �� c2 �����" << endl;
//	}
//
//	// ���ó�Ա�����ж�
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "��Ա�����ж�: c1 �� c2����ȵ�" << endl;
//
//	}
//	else
//	{
//		cout << "��Ա�����ж�: c1 �� c2 �����" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}