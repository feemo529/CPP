//#include<iostream>  
//using namespace std;
//#include <vector>
//
////1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//class GreaterFive {
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�������� ����5������
//	//GreaterFive() ������������
//	vector<int>::iterator ret = find_if(v.begin(), v.end(), GreaterFive());
//	if (ret == v.end()) {
//		cout << "δ�ҵ�" << endl;
//	}
//	else {
//		cout << "�ҵ���,����Ϊ: " << *ret << endl;
//	}
//}
//
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