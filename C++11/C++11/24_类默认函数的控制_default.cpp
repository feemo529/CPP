//#include<iostream>  
//using namespace std;
//
//class X
//{
//public:
//	X() = default; //�ñ������ṩһ��Ĭ�Ϲ��캯��
//
//	X(int i)
//	{
//		//д�˴��εĹ��캯���������������ṩ�޲εĹ��캯��
//		a = i;
//	}
//
//	int a;
//};
//
////defaultֻ����������Ĭ���ṩ�Ĺ��캯�����޲ι��죬�������죬��ֵ��������أ�����������
//class X2
//{
//public:
//	//int f() = default; // err
//	//X2(int a) = default; // err
//};
//
//class X3
//{
//public:
//	X3(); //����
//
//	X3(int i)
//	{
//		//д�˴��εĹ��캯���������������ṩ�޲εĹ��캯��
//		a = i;
//	}
//
//	int a;
//};
//
//X3::X3() = default; //���ⶨ��
//
//int main()
//{
//	X obj;
//
//	system("pause");
//
//	return 0;
//
//}