//#include<iostream>  
//using namespace std;
//
////�ݹ���ֹ����1
////void func()
////{
////	cout << "empty" << endl;
////}
//
////�ݹ���ֹ����2
//template<class T>
//void func(T tmp)
//{
//	cout << "tmp = " << tmp << endl;
//}
//
////�ɱ������ģ�庯��
////������չ������
//template<class T1, class ... T2> // T��ģ�������
//void func(T1 first, T2... last) // args�к���������
//{
//	cout << first << endl;
//	//�ݹ���ú�������
//	func(last...);
//}
//
//int main()
//{
//	func(1, 2, 3, 4);
//	/*
//	* �ݹ���ֹ����1���ù���
//	func(1, 2, 3, 4);
//	func(2, 3, 4);
//	func(3, 4);
//	func(4);
//	func();
//	*/
//	/*
//	* �ݹ���ֹ����2���ù���
//	func(1, 2, 3, 4);
//	func(2, 3, 4);
//	func(3, 4);
//	func(4);
//	*/
//	//func(1, "mike", 3.11, 'a');
//
//	system("pause");
//
//	return 0;
//
//}