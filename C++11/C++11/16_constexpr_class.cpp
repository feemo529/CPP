//#include<iostream>  
//using namespace std;
//
//class Date
//{
//public:
//
//	//constexpr ���ι��캯�������캯�������Ϊ��
//	constexpr Date(int y, int m, int d) :year(y), month(m), day(d)
//	{
//
//	}
//
//	constexpr int GetYear()
//	{
//		return year;
//	}
//	constexpr int GetMonth()
//	{
//		return month;
//	}
//	constexpr int GetDay()
//	{
//		return day;
//	}
//
//private:
//	int year;
//	int month;
//	int day;
//};
//
//int main()
//{
//	constexpr Date obj(2017, 10, 10); //����ʹ�ó��������캯������
//	cout << obj.GetYear() << endl; //vs2022����
//
//	system("pause");
//
//	return 0;
//
//}