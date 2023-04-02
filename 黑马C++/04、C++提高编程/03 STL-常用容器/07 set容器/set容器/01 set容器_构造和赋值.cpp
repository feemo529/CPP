//#include<iostream>  
//using namespace std;
//#include<set>
//
//void printSet(set<int>s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s;
//
//	//插入数据 只有insert方式
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(50);
//	s.insert(50);
//	s.insert(40);
//
//	//遍历
//	//set容器：所有元素会自动排序且去重
//	printSet(s);
//
//	//拷贝构造
//	set<int>s2(s);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//
//}