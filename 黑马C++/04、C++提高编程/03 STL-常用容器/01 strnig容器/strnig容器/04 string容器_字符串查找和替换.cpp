//#include<iostream>  
//using namespace std;
//
////1、查找
//void test01()
//{
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1)
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//
//	//rfind
//	//find查找是从左往后，rfind从右往左
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
//
////2、替换
//void test02() {
//	string str1 = "abcdefg";
//	str1.replace(1, 3, "1111");
//	cout << "str1 = " << str1 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//
//}