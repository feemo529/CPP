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
//	//weak_ptr��Ȼ���Ͷ����ռ�󶨣�����ͨ��lock������ȡshared_ptr<int>����
//	shared_ptr<int> p3 = wp.lock(); //��ʱ��3������󶨶����ڴ�
//
//	cout << "num = " << p1.use_count() << endl;
//	cout << "num = " << wp.use_count() << endl;
//
//	cout << *p1 << "��" << *p2 << "��" << *p3 << endl;
//	//cout << *wp << endl; //err��û������ * �� ->
//	p1.reset();
//	p2.reset();
//	p3.reset();
//
//	cout << "num = " << p1.use_count() << endl;
//	cout << "num = " << wp.use_count() << endl;
//
//	//�������ռ��ͷź�wp.lock()��ȡ�ķ���ֵΪnullptr
//	shared_ptr<int> tmp = wp.lock();
//	if (tmp == nullptr)
//	{
//		cout << "�����ռ��Ѿ��ͷ�" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}