//#include<iostream>  
//using namespace std;
//
//
//int main()
//{
//	int a = 10;
//	//lambda���ʽ���½�һ���������ⲿ�����������������һ�ݣ������ֵ����
//	auto f1 = [=]() mutable
//	{
//		a = 111;
//		cout << "a = " << a << endl;
//	};
//	f1();
//	cout << "a = " << a << endl;
//	auto f2 = [&]() mutable
//	{
//		a = 111;
//	};
//	f2();
//	cout << "a = " << a << endl;
//
//
//	system("pause");
//
//	return 0;
//
//}