//#include<iostream>  
//#include<functional>
//using namespace std;
//
//void test01(int x, int y)
//{
//	cout << x << " " << y << endl;
//}
//
//int main()
//{
//	bind(test01, 11, 22)(); // ��� 11 22
//
//	//std:placeholders::_1����������ʱ������һ�������滻
//	//std:placeholders::_2����������ʱ�����ڶ��������滻
//	bind(test01, std::placeholders::_1, std::placeholders::_2)(11, 22);
//
//	using namespace std::placeholders;
//	bind(test01, 11, _1)(22, 33, 44); // 11 22 "_1"��˼ֻ�ᱻ��һ�������滻
//
//	bind(test01, _2, _1)(11, 22); // 22 11
//
//	//bind(test01, _2, 22)(11); // err,û�еڶ�������
//	bind(test01, _2, 22)(11, 0); // 0 22
//	bind(test01, _3, 22)(11, 22, 3); // 3 22
//
//
//	system("pause");
//
//	return 0;
//
//}