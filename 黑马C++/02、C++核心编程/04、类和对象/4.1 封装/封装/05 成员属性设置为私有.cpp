//#include<iostream>
//using namespace std;
//
//// ��Ա��������Ϊ˽��
//// 1�������Լ����ƶ�дȨ��
//// 2������д���Լ�����ݵ���Ч��
//
//class Person
//{
//public:
//	// set����
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//get����
//	string getName()
//	{
//		return m_Name;
//	}
//
//	// ��ȡ����
//	int getAge()
//	{
//		//m_Age = 0; // ��ʼ��
//		return m_Age;
//	}
//
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "��������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	// ֻд
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//private:
//	string m_Name; // ���ÿɶ���д
//	int m_Age;	// ֻ��
//	string m_Lover;	// ֻд
//};
//
//
//int main() {
//
//	Person p;
//	p.setName("����");
//	cout << "������ " << p.getName() << endl;
//
//	p.setAge(14);
//	cout << "���䣺 " << p.getAge() << endl;
//
//	p.setLover("����");
//
//	system("pause");
//
//	return 0;
//}