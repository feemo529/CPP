//#include<iostream>  
//using namespace std;
//
//int tmp;
//
//int& func()
//{
//	static int tmp;
//
//	return tmp;
//}
//
//int func02()
//{
//	return 10;
//}
//
//void test(int& tmp)
//{
//	cout << "��ֵ = " << tmp << endl;
//}
//
//void test(int&& tmp)
//{
//	cout << "��ֵ = " << tmp << endl;
//}
//
//int main()
//{
//	//��ֵ����ߣ���ֵ���ұ�
//	//��ֵ����&,��ֵ����&
//	//int a = 10;
//
//	//��ֵ�����������������صķ����ñ���
//
//	//��ֵ����
//	//int a;
//	//int& b = a; //ok
//	////int& c = 1; //err
//	//const int& d = a; //ok
//	//const int& e = 1; //ok
//	//const int& f = func(); //ok
//	//const int tmp = 10;
//	//const int& g = tmp;
//
//	//const int& ��������
//
//
//	//��ֵ����
//	//int&& a = 10;
//	//int&& b = func02();
//
//	//int i = 10;
//	//int j = 20;
//	//int&& c = i + j;
//
//	//int k = 10;
//	//int&& d = k; //err,���ܰ�һ����ֵ����һ����ֵ����
//
//	int a = 10;
//	test(a); //��ֵ����
//
//	test(111); //��ֵ����
//
//	system("pause");
//
//	return 0;
//
//}