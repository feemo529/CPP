//#include<iostream>  
//using namespace std;
//
///*
//constexpr����������:
//	������ֻ����һ��return���(�м�������)vs2022����
//	���������з���ֵ��������void������
//	��ʹ��ǰ�������ж���
//	return���������ʽ�в���ʹ�÷ǳ������ʽ�ĺ�����ȫ�ֺ������ұ�����һ���������ʽ
//*/
//
//constexpr int func01()
//{
//	//err��������ֻ����һ��return���
//	constexpr int a = 1;
//	return a;
//}
//
//constexpr int func02()
//{
//	//�������typedef,usingָ���̬����
//	static_assert(1, "fail");
//
//	return 1;
//}
//
////return���������ʽ�в���ʹ�÷ǳ������ʽ�ĺ�����ȫ�ֺ������ұ�����һ���������ʽ(vs2022���ԣ�
//int a = 3;
//constexpr int func03()
//{
//	return a;//����ȫ������
//}
//
//int test()
//{
//	return 10;
//}
//
//constexpr int func04()
//{
//	//��������ʹ�÷ǳ������ʽ�ĺ���
//	return test();
//}
//
//
//
//int main()
//{
//	constexpr int func05();
//	constexpr int tmp = func05(); //err,��ʹ��ǰ�������ж���
//
//	system("pause");
//
//	return 0;
//
//}
//
//constexpr int func05()
//{
//	//�������typedef,usingָ���̬����
//	static_assert(1, "fail");
//
//	return 1;
//}
