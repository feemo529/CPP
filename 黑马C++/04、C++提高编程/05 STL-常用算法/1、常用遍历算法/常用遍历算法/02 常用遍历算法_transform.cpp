#include<iostream>  
using namespace std;
#include <vector>
#include<algorithm>

//�º���
class Transform {
public:
	int operator()(int val)
	{
		return val;
	}
};

class MyPrint {
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

//���ñ����㷨 transform

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget; //Ŀ������

	vTarget.resize(v.size()); // �ȿ��ٿռ䣡��������

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;

}