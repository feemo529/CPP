//#include<iostream>  
//using namespace std;
//
///*
//	ע�⣺
//	1�����๹�캯��������˽�е�
//	2�������������޷���ʼ���������Ա����
//	3��������̳�
//	4�����˼̳й��죬�����಻�����ṩĬ�ϵĹ��캯��
//*/
//
////����
//class A
//{
//public:
//	A(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//protected:
//	int a;
//	int b;
//};
//
////������
//class B :public A
//{
//public:
//	//ͨ�������б�����๹�캯������
//	//B(int x, int y) :A(x, y)
//	//{
//
//	//}
//
//	//�̳й���
//	using A::A;
//
//	void display()
//	{
//		cout << "a = " << a << ", b = " << b << endl;
//	}
//	//û�������µĳ�Ա����
//
//};
//
//int main()
//{
//	//���������
//	B obj(10, 20);
//	obj.display();
//
//	system("pause");
//
//	return 0;
//
//}