#include<iostream>
using namespace std;

//1��new�Ļ����﷨
int* func()
{
	// �ڶ���������������
	// new ���ص��Ǹ��������͵�ָ��
	int* a = new int(10);
	return a;
}

void test01()
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	// ����delete�������ͷŶ�������
	delete p;

	//cout << *p << endl; // �ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��	
}

//2���ڶ�������new��������
void test02()
{
	// ����10�������ݵ����� �ڶ���
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// �ͷŶ������� delete ��� []
	delete[] arr;
}

int main()
{
	//test01();
	test02();
	system("pause");

	return 0;
}