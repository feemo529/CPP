//#include<iostream>  
//using namespace std;
//
//class Test
//{
//public:
//	~Test()
//	{
//		cout << "析构" << endl;
//	}
//};
//
//void test01()
//{
//	unique_ptr<int> up1(new int(11)); //创建智能指针对象
//	cout << "*up1 = " << *up1 << endl; //重载了operator *()
//
//	{
//		unique_ptr<Test> up2(new Test); //无需手动释放
//		up2 = nullptr; //手动释放
//		up2 = NULL; //手动释放
//		up2.reset(); //手动释放
//
//		cout << "111111" << endl;
//	}
//	cout << "--------------------------\n";
//}
//
//void test02()
//{
//	unique_ptr<int> up1(new int(11)); //创建智能指针对象
//	//unique_ptr<int> up2 = up1; //禁用拷贝构造，err
//
//	//把up1的使用权转移给up2,up1不能再操作堆区
//	unique_ptr<int> up2 = move(up1); //ok，
//
//	cout << "*up2 = " << *up2 << endl;
//	//cout << "*up1 = " << *up1 << endl; // err
//
//}
//
//void test03()
//{
//	unique_ptr<int> up1(new int(11)); //创建智能指针对象
//
//	up1.reset(); //如果是无参，作用是显示释放堆区内存
//
//	//如果有参数，先释放原来堆区内存，重新给up1绑定一个新的堆区内存
//	up1.reset(new int(22));
//}
//
//void test04()
//{
//	unique_ptr<int> up1(new int(11));
//
//	//释放控制权，不释放堆区空间
//	int* p = up1.release();
//	cout << *p << endl;
//	delete p;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//	system("pause");
//
//	return 0;
//
//}