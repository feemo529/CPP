//#include<iostream>  
//using namespace std;
//
//
//int main()
//{
//	shared_ptr<int> p1(new int(11));
//	shared_ptr<int> p2 = p1;
//
//	weak_ptr<int> wp = p1;
//
//	cout << "num = " << p1.use_count() << endl;
//	cout << "num = " << wp.use_count() << endl;
//
//	//weak_ptr虽然不和堆区空间绑定，可以通过lock函数获取shared_ptr<int>对象
//	shared_ptr<int> p3 = wp.lock(); //此时有3个对象绑定堆区内存
//
//	cout << "num = " << p1.use_count() << endl;
//	cout << "num = " << wp.use_count() << endl;
//
//	cout << *p1 << "，" << *p2 << "，" << *p3 << endl;
//	//cout << *wp << endl; //err，没有重载 * 和 ->
//	p1.reset();
//	p2.reset();
//	p3.reset();
//
//	cout << "num = " << p1.use_count() << endl;
//	cout << "num = " << wp.use_count() << endl;
//
//	//当堆区空间释放后，wp.lock()获取的返回值为nullptr
//	shared_ptr<int> tmp = wp.lock();
//	if (tmp == nullptr)
//	{
//		cout << "堆区空间已经释放" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}