#include<iostream>
using namespace std;


// ����Ĭ�ϲ���

int func(int a, int b = 20, int c = 20)
{
	return a + b + c;
}

// ע������
// 1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//int func2(int a = 10, int b, int c) {} // ����

// 2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
int func2(int a = 10, int b = 10);

int func2(int a, int b)
{
	return a + b;
}

int main()
{

	//cout << func(10, 20) << endl;
	cout << func2() << endl;

	system("pause");

	return 0;
}