//#include <iostream>
//using namespace std;
//
//// �̳���ͬ����Ա����ʽ
//class Base {
//public:
//	Base() {
//		A = 100;
//	}
//
//	void func() {
//		cout << "Base - func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
//	}
//	int A;
//};
//
//class Son :public Base {
//public:
//	Son() {
//		A = 200;
//	}
//	void func() {
//		cout << "Son - func()����" << endl;
//	}
//	int A;
//};
//
//// ͬ����Ա����
//void test01() {
//	Son s;
//	cout << "Son A = " << s.A << endl;
//	//�������ʸ����б����ص�ͬ����Ա����Ҫ�Ӹ����������
//	cout << "Base A = " << s.Base::A << endl;
//};
//
//// ͬ����Ա����
//void test02() {
//	Son s;
//	s.func();	// ͬ��
//	s.Base::func();
//
//	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
//	//s.func(100); // ����
//	s.Base::func(100);
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