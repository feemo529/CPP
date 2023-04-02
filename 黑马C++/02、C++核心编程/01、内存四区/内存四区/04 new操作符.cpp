#include<iostream>
using namespace std;

//1、new的基本语法
int* func()
{
	// 在堆区创建整型数据
	// new 返回的是该数据类型的指针
	int* a = new int(10);
	return a;
}

void test01()
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	// 利用delete操作符释放堆区数据
	delete p;

	//cout << *p << endl; // 内存已经被释放，再次访问就是非法操作，会报错	
}

//2、在堆区利用new开辟数组
void test02()
{
	// 创建10整型数据的数组 在堆区
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// 释放堆区数组 delete 后加 []
	delete[] arr;
}

int main()
{
	//test01();
	test02();
	system("pause");

	return 0;
}