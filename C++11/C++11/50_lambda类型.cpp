//#include<iostream> 
//#include <functional>
//using namespace std;
//using namespace std::placeholders;
//
//int main()
//{
//	int a = 10;
//
//	function<int(int)> f1 = [](int a)
//	{
//		//cout << a << endl;
//		return a + 1;
//	};
//	cout << f1(9) << endl;
//
//	function<int(int)> f2 = bind(
//		[](int a) { return a + 1; },
//		_1
//	);
//	cout << f2(9) << endl;
//
//	auto f3 = [](int x, int y) -> int { cout << a << endl; return x + y; };
//	cout << f3(1, 2) << endl;
//
//	decltype (f3) tmp = f3;
//	cout << tmp(2, 2) << endl;
//
//	//����һ������ָ��
//	typedef int (*PFUC) (int, int);
//	PFUC p1 = f3; //lambda���ʱת��Ϊ����ָ��,ok��ת��Ϊ����ָ��ʱ���������ⲿ��������
//	cout << p1(10, 10) << endl;
//
//	//decltype (f3) = p1; //����ָ��ת��Ϊlambda���ʽ�����У�����
//
//	system("pause");
//
//	return 0;
//
//}