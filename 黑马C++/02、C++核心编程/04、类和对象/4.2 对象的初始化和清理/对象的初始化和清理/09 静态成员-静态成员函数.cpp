#include<iostream>
using namespace std;

// ��̬��Ա����
//1 ���ж�����ͬһ������
//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person {
public:

	// ��̬��Ա����
	static void func() {
		m_A = 100; // ��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200; // �����ܷ��ʷǾ�̬��Ա���������޷����ֵ������ĸ������m_B
		cout << "static void func ����" << endl;
	}

	static int m_A; //��̬��Ա����
	int m_B; // �Ǿ�̬

	// ��̬��������Ȩ��
private:
	static void func2() {
		cout << "static void func2 �ĵ���" << endl;
	}
};

int Person::m_A = 0;

// ���ַ��ʷ�ʽ
void test01() {
	// 1��ͨ��������з���
	Person p;
	p.func();

	// 2��ͨ���������з���
	Person::func();

	//Person::func2(); ������ʲ�����̬��Ա����

}

int main()
{
	test01();

	system("pause");

	return 0;
}