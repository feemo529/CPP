//#include <iostream>
//using namespace std;
//
////�̳��еĶ���ģ��
//
//class Base {
//public:
//	int A;
//protected:
//	int B;
//private:
//	int C; //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
//};
//
//class Son :public Base {
//public:
//	int D;
//};
//
//// ���ÿ�����Ա������ʾ���߲鿴����ģ��
//
//void test01() {
//
//	// ���������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	// ������˽�г�Ա���� �Ǳ������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ��
//	cout << "size of Son = " << sizeof(Son) << endl; // 16
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}