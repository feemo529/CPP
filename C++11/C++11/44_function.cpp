//#include<iostream>
//#include<functional>
//using namespace std;
//
////1����ͨ����
//
//void test01()
//{
//	cout << __func__ << endl;
//}
//
////2�����о�̬����
//class Test
//{
//public:
//	static int test_func(int a)
//	{
//		cout << __func__ << "(" << a << "��->:";
//		return a;
//	}
//};
//
////3�����зº���
//class MyFunctor
//{
//public:
//	int operator()(int a)
//	{
//		cout << __func__ << "(" << a << "��->:";
//		return a;
//	}
//};
//
//int main()
//{
//	//1������ͨ����
//	function<void(void)> f1 = test01;
//	f1(); //�ȼ��� test01();
//
//	//2�������еþ�̬����
//	function<int(int)> f2 = Test::test_func;
//	cout << f2(10) << endl;
//
//	//2�������е÷º���
//	MyFunctor obj;
//	function<int(int)> f3 = obj;
//	cout << obj(22) << endl;
//
//	system("pause");
//
//	return 0;
//
//}