//#include<iostream>  
//using namespace std;
//
//
//int main()
//{
//	shared_ptr<int> sp1(new int(11));
//	shared_ptr<int> sp2 = sp1; //�������죬��2������Ͷ����ռ��
//
//	cout << "num = " << sp2.use_count() << endl; //��ӡ������
//
//	//�ͷ�sp1
//	sp1.reset();
//	cout << "num = " << sp2.use_count() << endl; //��ӡ������
//
//	cout << *sp2 << endl;
//	//cout << *sp1 << endl; //err
//
//	//�ͷ�sp2,ֻ�Ǽ�������ȥ1������������ֵΪ0�������ռ��ͷ�
//	sp2.reset();
//	cout << "num = " << endl;
//
//	system("pause");
//
//	return 0;
//
//}