//#include<iostream>  
//using namespace std;
//
//class X
//{
//public:
//	X() {} //��ͨ�޲�
//	X(const X&) = delete; //�������죬���ÿ�������
//	X& operator = (const X&) { return *this; } // ��ֵ�������غ���
//
//	X(int) = delete; //����
//
//	//void* operator new(size_t) = delete;
//	//void* operator new[](size_t) = delete;
//};
//
//int main()
//{
//	X obj1; //��ͨ�޲�
//	//X obj2 = obj1; //��������, 
//
//	//obj2 = obj1;
//
//	//X obj3(10);
//
//	//X* p = new X; //err
//	//X* p = new X[10]; //err
//
//	system("pause");
//
//	return 0;
//
//}