//#include <iostream>
//using namespace std;
//
//// ��ͨʵ��ҳ��
//
//////Javaҳ��
////class Java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "JAVAѧ����Ƶ" << endl;
////	}
////};
//////Pythonҳ��
////class Python
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "Pythonѧ����Ƶ" << endl;
////	}
////};
//////C++ҳ��
////class CPP
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
////	}
////	void left()
////	{
////		cout << "Java,Python,C++...(���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "C++ѧ����Ƶ" << endl;
////	}
////};
//
////�̳�ʵ��
//class BasePage {
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//};
//
//// �̳еĺô������Լ����ظ��Ĵ���
////class A : public B;
////A ���Ϊ���� �� ������
////B ���Ϊ���� �� ����
//
////Javaҳ��
//class Java :public BasePage {
//public:
//	void content() {
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Python ҳ��
//class Python :public BasePage {
//public:
//	void content() {
//		cout << "Python ѧ����Ƶ" << endl;
//	}
//};
//
////C++ ҳ��
//class CPP :public BasePage {
//public:
//	void content() {
//		cout << "C++ ѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	//Javaҳ��
//	cout << "Java������Ƶҳ�����£� " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//
//	//Pythonҳ��
//	cout << "Python������Ƶҳ�����£� " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£� " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//
//}
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