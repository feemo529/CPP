//#include<iostream>  
//using namespace std;
//
//class Test
//{
//public:
//	~Test()
//	{
//		cout << "����" << endl;
//	}
//};
//
//void test01()
//{
//	unique_ptr<int> up1(new int(11)); //��������ָ�����
//	cout << "*up1 = " << *up1 << endl; //������operator *()
//
//	{
//		unique_ptr<Test> up2(new Test); //�����ֶ��ͷ�
//		up2 = nullptr; //�ֶ��ͷ�
//		up2 = NULL; //�ֶ��ͷ�
//		up2.reset(); //�ֶ��ͷ�
//
//		cout << "111111" << endl;
//	}
//	cout << "--------------------------\n";
//}
//
//void test02()
//{
//	unique_ptr<int> up1(new int(11)); //��������ָ�����
//	//unique_ptr<int> up2 = up1; //���ÿ������죬err
//
//	//��up1��ʹ��Ȩת�Ƹ�up2,up1�����ٲ�������
//	unique_ptr<int> up2 = move(up1); //ok��
//
//	cout << "*up2 = " << *up2 << endl;
//	//cout << "*up1 = " << *up1 << endl; // err
//
//}
//
//void test03()
//{
//	unique_ptr<int> up1(new int(11)); //��������ָ�����
//
//	up1.reset(); //������޲Σ���������ʾ�ͷŶ����ڴ�
//
//	//����в��������ͷ�ԭ�������ڴ棬���¸�up1��һ���µĶ����ڴ�
//	up1.reset(new int(22));
//}
//
//void test04()
//{
//	unique_ptr<int> up1(new int(11));
//
//	//�ͷſ���Ȩ�����ͷŶ����ռ�
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