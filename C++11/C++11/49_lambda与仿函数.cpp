//#include<iostream>  
//using namespace std;
//
//class MyFunctor
//{
//public:
//	MyFunctor(int i) :r(i) {}
//
//	int operator()(int tmp)
//	{
//		return tmp + r;
//	}
//private:
//	int r;
//};
//int main()
//{
//	int tmp = 10;
//
//	//�º�������
//	MyFunctor obj(tmp);
//
//	//���÷º���
//	cout << "result1 = " << obj(1) << endl;
//
//	//�º���ʱ������ʵ��lambda��һ�ַ�ʽ
//	//lambda���ʽ
//	auto f = [tmp](int t)
//	{
//		return tmp + t;
//	};
//	cout << "result2 = " << f(1) << endl;
//
//	system("pause");
//
//	return 0;
//
//}