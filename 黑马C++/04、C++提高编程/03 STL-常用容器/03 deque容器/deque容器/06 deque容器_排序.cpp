#include<iostream>  
using namespace std;
#include<deque>
#include<algorithm>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//���� Ĭ������ ��С����
	sort(d1.begin(), d1.end());
	cout << "�����:" << endl;
	printDeque(d1);

}

int main()
{
	test01();

	system("pause");

	return 0;

}