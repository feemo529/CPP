#include<iostream>
using namespace std;

//������

class Person {
public:

	// thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
	// �������ָ��ָ���ֵҲ�������޸ģ���Ҫ���������� �� const
	// �ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void ShowPerson() const {
		//this->A = 100;
		this->B = 100; //���޸� �ɱ��
		//this->NULL;  // thisָ�벻�����޸�ָ���ָ���
	}

	void func() {}

	int A;
	mutable	int B; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
};

void test01() {
	Person p;

	p.ShowPerson();
}

// ������
void test02() {
	const Person p; //�ڶ���ǰ��const����Ϊ������
	//p.A = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
	p.B = 100;	//���ǳ���������޸� mutable ���γ�Ա����

	//������ֻ�ܵ��ó�����
	p.ShowPerson();
	//p.func(); // �������ܵ�����ͨ�ĳ�Ա����
}

int main() {

	test01();
	//test02();

	system("pause");

	return 0;
}