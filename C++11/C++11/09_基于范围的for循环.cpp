#include<iostream>  
using namespace std;

void func(int* a) // �β��е����鲻�����飬��ָ��������޷�ȷ��Ԫ�ظ���
{
	//���ڷ�Χ��for,�����ΧҪȷ���󣬲���ʹ��
	for (auto& tmp : a)
	{
		cout << "tmp =" << tmp << endl;
	}
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(*a); //���鳤��

	//for (int i = 0; i < n; i++)
	//{
	//	cout << a[i] << ", ";
	//}
	//cout << endl;

	//1��ֵ��������
	//for (int tmp : a)
	//{
	//	cout << tmp << ", ";
	//}
	//cout << endl;

	for (int i = 0; i < n; i++)
	{
		int& tmp = a[i];
		tmp = 2 * tmp;
		cout << tmp << ", ";
	}
	cout << endl;

	//2����������
	for (int& tmp : a)
	{
		tmp = 2 * tmp;
		cout << tmp << ", ";
	}
	cout << endl;

	func(a);

	system("pause");

	return 0;

}