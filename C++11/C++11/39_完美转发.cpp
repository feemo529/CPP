//#include<iostream>  
//using namespace std;
//
////template<class T> void func(const T&)
////{
////	cout << "const T &" << endl;
////}
////
////template<class T> void func(T&)
////{
////	cout << "T &" << endl;
////}
////
////template<class T> void forward_val(const T& tmp)
////{
////	func(tmp); //����
////}
////
////template<class T> void forward_val(T& tmp)
////{
////	func(tmp); //����
////}
////
////int main()
////{
////	int a = 0;
////	const int& b = 1;
////	//��Ҫ���������������汾
////	forward_val(a); // T&
////	forward_val(b); // T&
////	forward_val(1111); // T&
////
////	system("pause");
////
////	return 0;
////
////}
//
//
//template<class T> void func(const T&)
//{
//	cout << "const T &" << endl;
//}
//
//template<class T> void func(T&)
//{
//	cout << "T &" << endl;
//}
//
//template<class T> void func(T&&)
//{
//	cout << "T &&" << endl;
//}
//
//template<class T> void forward_val(T&& tmp) //����Ϊ��ֵ����
//{
//	//���ֲ�������ֵ����ֵ����
//	func(std::forward<T>(tmp)); //����
//}
//
//int main()
//{
//	int a = 0;
//	const int& b = 1;
//	forward_val(a); // T &
//	forward_val(b); // const T &
//	forward_val(1111); // T &&
//
//	system("pause");
//
//	return 0;
//
//}