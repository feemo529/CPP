//#include <iostream>
//using namespace std;
//
//// �̳з�ʽ
//
////�����̳�
//class Base1 {
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
//
//class Son1 :public Base1 {
//public:
//	void func() {
//		A = 10; // �����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
//		B = 10; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		//C = 10; // �����е�˽��Ȩ�޳�Ա ������ʲ���
//	}
//
//};
//void test01() {
//	Son1 s1;
//	s1.A = 100;
//	//s1.B = 100; // ����Ȩ�������޷�����
//}
//
//class Base2 {
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
//
//class Son2 :protected Base2 {
//public:
//	void func() {
//		A = 100; // �����еĹ���Ȩ�޳�Ա �������б�Ϊ ����Ȩ��
//		B = 100; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		//C; //���ɷ���
//	}
//};
//
//void test02() {
//	Son2 s1;
//	//s1.A = 100; // ���ɷ���, Son2�б�Ϊ����Ȩ�ޣ����������޷�����
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		A = 100; //�����еĹ���Ȩ�޳�Ա �������б�Ϊ ˽��Ȩ��
//		B = 100; //�����еı���Ȩ�޳�Ա �������б�Ϊ ˽��Ȩ��
//		//C = 100; //���ɷ���
//	}
//};
//
//void test03() {
//	Son1 s1;
//	s1.A = 100; // ��Son3�� ��Ϊ ˽�г�Ա ������ʲ���
//	//s1.B = 100; // ����Ȩ�������޷�����
//}
//
//class GrandSon3 :public Son3 {
//public:
//	void func() {
//		//A = 100; // Son3��˽�м̳У����Լ̳�Son3��������GrandSon3�ж��޷����ʵ�
//		//B = 100;
//	}
//};
//
//int main() {
//
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}