//#include <iostream>
//using namespace std;
//
//// �̳��е�ͬ����̬��Ա����ʽ
//class Base {
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//	static int A;
//};
//int Base::A = 100;
//
//class Son :public Base {
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int A;
//};
//int Son::A = 200;
//
//// ͬ����̬��Ա����
//void test01() {
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s;
//	cout << "Son  A = " << s.A << endl;
//	cout << "Base A = " << s.Base::A << endl;
//
//	//ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	cout << "Son  A = " << Son::A << endl;
//	cout << "Base A = " << Son::Base::A << endl;
//};
//
////ͬ����Ա����
//void test02() {
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//
//	//ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	Son::func();
//	Son::Base::func();
//	//����ͬ������������ص�����������ͬ����Ա��������Ҫ�������������
//	Son::Base::func(10);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}