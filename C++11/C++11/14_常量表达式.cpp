//#include<iostream>  
//using namespace std;
//
//int GetNum()
//{
//	return 3;
//}
//
//const int GetNum2()
//{
//	return 3;
//}
//
//constexpr int GetNum3()
//{
//	//�������ʽ�������ٱ���׶�
//	return 3;
//}
//
//int main()
//{
//	//ö�ٳ�Ա��ʼ�������������ͳ���
//	//enum { e1 = GetNum(), e2 }; // ����
//	//enum { e1 = GetNum2(), e2 }; // ����
//	enum { e1 = GetNum3(), e2 };
//
//	constexpr int tmp = GetNum3(); //ͬ�������ڱ���׶�
//	enum { a1 = tmp, a2 };
//
//
//	system("pause");
//
//	return 0;
//
//}