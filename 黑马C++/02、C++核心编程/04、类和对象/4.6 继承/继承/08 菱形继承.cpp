#include <iostream>
using namespace std;

// ���μ̳�
class Animal
{
public:
	int Age;
};

// ������̳� ������μ̳е�����
// �̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
//��ʱ�����ĸ���Animal��Ϊ�����
// ����
class Sheep :virtual public Animal {};

//����
class Tuo :virtual public Animal {};

//������
class SheepTuo :public Sheep, public Tuo {};


void test01() {
	SheepTuo st;

	st.Sheep::Age = 18;
	st.Tuo::Age = 28;

	cout << "st.Sheep::Age =" << st.Sheep::Age << endl;
	cout << "st.Tuo::Age =" << st.Tuo::Age << endl;
	cout << "st.Age =" << st.Age << endl;
}

// vbptr �����ָ��
// ���μ̳д�������Ҫ����������̳�������ͬ�����ݣ�������Դ�˷��Լ���������
// ������̳п��Խ�����μ̳�����
int main() {

	test01();

	system("pause");

	return 0;
}